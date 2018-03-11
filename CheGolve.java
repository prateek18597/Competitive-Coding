import java.util.Scanner;
public class CheGolve
{
	public static void main(String args[])
	{
		int N;
		Scanner s=new Scanner(System.in);
		N=s.nextInt();

		for(int i=0;i<N;i++)
		{
			int f=s.nextInt();
			int arm[]=new int[f];
			int glove[]=new int[f];

			for(int j=0;j<f;j++)
			{
				arm[j]=s.nextInt();
			}
			
			for(int j=0;j<f;j++)
			{
				glove[j]=s.nextInt();
			}

			String ans="";
			boolean b=false;

			for(int j=0;j<f;j++)
			{
				if(arm[j]<=glove[j])
				{
					b=true;
				}
				else
				{
					b=false;
					break;
				}
			}
			

			if(b)
			{
				ans="front";
			}
			b=false;

			for(int j=0;j<f;j++)
			{
				if(arm[j]<=glove[f-j-1])
				{
					b=true;
				}
				else
				{
					b=false;
					break;
				}
			}

			if(!b && ans.equals(""))
			{
				ans="none";
			}
			else
			{
				if(b && ans.equals(""))
				{
					ans="back";
				}
				else
				{
					if(b && ans.equals("front"))
					ans="both";

				}
			}

			System.out.println(ans);
	


		}
	
	}
}			
