import java.util.Scanner;
public class CNDLOVE
{
	public static void main(String args[])
	{
		Scanner scan=new Scanner(System.in);
		int N=scan.nextInt();
		for(int i=0;i<N;i++)
		{
			int sum=0;
			int t=scan.nextInt();
			for(int j=0;j<t;j++)
			{
				sum+=scan.nextInt();
			}
			System.out.println(sum);
			if(sum%2==1)
			{
				System.out.println("YES");
			}
			else
				System.out.println("NO");

		}
	}
}