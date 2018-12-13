import java.util.*;
public class Solution
{
    void printMatrix(Vector<String> matrix, int n) 
    { 
        for(int i = 0; i < n; i++) 
            System.out.println(matrix.get(i));
    }

    Vector<String> checkHorizontal(int x, int y,Vector<String> matrix,String currentWord) 
    { 
        int n = currentWord.length(); 
      
        for (int i = 0; i < n; i++)
        { 
            if (matrix.get(x).charAt(y + i) == '#' ||matrix.get(x).charAt(y + i) == currentWord.charAt(i))
            { 
               matrix.get(x).charAt(y + i) = currentWord[i]; 
            } 
            else
            { 
                matrix[0][0] = '@'; 
                return matrix; 
            } 
        } 
        return matrix; 
    }

    Vector<String> checkVertical(int x, int y, 
                             Vector<String> matrix, 
                             String currentWord) 
    { 
        int n = currentWord.length(); 
      
        for (int i = 0; i < n; i++) { 
            if (matrix[x + i][y] == '#' ||  
                matrix[x + i][y] == currentWord[i]) { 
                matrix[x + i][y] = currentWord[i]; 
            } 
            else 
            { 
                matrix[0][0] = '@'; 
                return matrix; 
            } 
        } 
        return matrix; 
    } 


    void solvePuzzle(Vector<String> words,Vector<String> matrix,int index, int n) 
    { 
        if (index < words.size()) { 
            String currentWord = words.charAt(index); 
            int maxLen = n - currentWord.length(); 
      
            for (int i = 0; i < n; i++)
            { 
                for (int j = 0; j <= maxLen; j++) { 
                    Vector<String> temp = checkVertical(j, i, 
                                            matrix, currentWord); 
      
                    if (temp[0][0] != '@') { 
                        solvePuzzle(words, temp, index + 1, n); 
                    } 
                } 
            } 
      
            for (int i = 0; i < n; i++) { 
                for (int j = 0; j <= maxLen; j++) { 
                    Vector<String> temp = checkHorizontal(i, j, 
                                          matrix, currentWord); 
      
                    if (temp[0][0] != '@') { 
                        solvePuzzle(words, temp, index + 1, n); 
                    } 
                } 
            } 
        } 
        else
        { 
            printMatrix(matrix, n); 
            return; 
        } 
    } 
 


    public static void main(String args[])
    {
        int n1 = 10; 
  
    Vector<String> matrix=new Vector(); 
    Scanner s=new Scanner(System.in);
    Solution sol=new Solution();    
    matrix.add(s.next()); 
    matrix.add(s.next()); 
    matrix.add(s.next()); 
    matrix.add(s.next()); 
    matrix.add(s.next()); 
    matrix.add(s.next()); 
    matrix.add(s.next()); 
    matrix.add(s.next()); 
    matrix.add(s.next()); 
    matrix.add(s.next()); 
  
    Vector<String> words=new Vector(); 
  

    words.add("PUNJAB"); 
    words.add("JHARKHAND"); 
    words.add("MIZORAM"); 
    words.add("MUMBAI"); 
  
    sol.solvePuzzle(words, matrix, 0, n1);
    }
}