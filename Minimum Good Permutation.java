import java.util.*;
 
public class Main
{
	public static void main(String args[])
	{
		Scanner s=new Scanner(System.in);
		int N=s.nextInt();
 
		for(int i=0;i<N;i++)
 
 
		{
			
			//LinkedList list=new LinkedList();
			int num=s.nextInt();
			long n[]=new long[num];
			//boolean[] b=new boolean[num];
			for(int j=0;j<num;j++)
			{
			//	b[j]=false;
				n[j]=j+1;
			}
			if(num%2==0)
			{
				for(int j=0;j<num;)
				{
					System.out.print(n[j+1]+" "+n[j]+" ");
					j+=2;
				}
				System.out.println();
			}
			else
			{	int j=0;
				for(j=0;j<num-3;)
				{
					System.out.print(n[j+1]+" "+n[j]+" ");//+n[j]+" ");
					j+=2;
				}
				System.out.print(n[j+1]+" "+n[j+2]+" "+n[j]);
				System.out.println();
			}
 		}
 
	}
 
} 
