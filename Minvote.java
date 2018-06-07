import java.util.Scanner;

public class Minvote
{
	public static void main(String args[])
	{
		Scanner s=new Scanner(System.in);
		int N=s.nextInt();

		for(int i=0;i<N;i++)
		{
			int n=s.nextInt();
			int x[]=new int[n];

			for(int j=0;j<n;j++)
			{
				x[j]=s.nextInt();
			}

			for(int j=0;j<n;j++)
			{

				for(int k=0;k<n;k++)
				{
					if(k!=j)
					{

					}
				}
			}
		}
	}
}