import java.util.Scanner;

public class Main
{
	public static void main(String args[])
	{
		Scanner s=new Scanner(System.in);
		int N=s.nextInt();
		for(int i=0;i<N;i++)
		{
			int t[]=new int[2];
			t[0]=s.nextInt();
			t[1]=s.nextInt();
			int max=t[0]>t[1]?t[0]:t[1];
			int min=t[0]<t[1]?t[0]:t[1];

			while(min!=max && min!=0 && max!=0)
			{
				if(max%min!=0)
				max%=min;
				else
					max=min;
				if(max<min)
				{
					int temp=min;
					min=max;
					max=temp;

				}
			}
			System.out.println(max+min);

		}
	}
}
