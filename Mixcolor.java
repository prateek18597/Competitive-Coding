import java.util.*;
public class Main
{
	public static void main(String args[])
	{
		Scanner s=new Scanner(System.in);
		int N=s.nextInt();

		for(int i=0;i<N;i++)
		{
			int count=0;
			int color=s.nextInt();
			boolean b[]=new boolean[100000];
			Arrays.fill(b,false);
			for(int j=0;j<color;j++)
			{
				int x=s.nextInt();
				if(b[x])
				{
					count++;
				}
				else
				{
					b[x]=true;
				}
			}
			System.out.println(count);
		}
	}
}