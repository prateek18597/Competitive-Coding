import java.util.Scanner;

public class N_Queens
{
	public int N;//Number of queens to be placed
	int[][] Q;
	int count=0;

	boolean check_position(int x,int y)
	{
		for(int i=0;i<N;i++)
		{
			if( Q[x][i]==1 ||  Q[i][y]==1 )
				return false;
		}
		for(int i=x-1,j=y-1;i>=0 && j>=0;i--,j--)
		{
			if(Q[i][j]==1)
				return false;
		}
		for(int i=x,j=y;i<N && j<N;i++,j++)
		{
			if(Q[i][j]==1)
				return false;
		}
		for(int i=x,j=y;i>=0 && j<N;i--,j++)
		{
			if(Q[i][j]==1)
				return false;
		}
		for(int i=x,j=y;i<N && j>=0;i++,j--)
		{
			if(Q[i][j]==1)
				return false;
		}
		return true;
	}

	boolean nqueens(int number)
	{
		boolean answer=false;
		if(number==0)
		{
			return true;
		}

		for(int i=0;i<N;i++)
		{
			for(int j=0;j<N;j++)
			{
				if(check_position(i,j))
				{
					Q[i][j]=1;
					if(nqueens(number-1))
					{
						if(N==number)
							count++;
						answer=true;
					}
					Q[i][j]=0;
				}
				
			}		
		}
		return answer;
	}

	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		N_Queens q=new N_Queens();
		q.N=scan.nextInt();
		q.Q=new int[q.N][q.N]; 
		for(int i=0;i<q.N;i++)
		{
			for(int j=0;j<q.N;j++)
			{
				q.Q[i][j]=0;
			}
		}
		boolean ans=q.nqueens(q.N);
		System.out.println(ans);
		System.out.println(q.count);
		if(ans)
		{
			for(int i=0;i<q.N;i++)
			{
				for(int j=0;j<q.N;j++)
				{
					System.out.print("\t"+q.Q[i][j]);
				}
				System.out.println("");
			}
		}
	}
}