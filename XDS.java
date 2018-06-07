import java.util.Scanner;

public class Main{
public static void main(String args[])
{
	Scanner s=new Scanner(System.in);
	int N=s.nextInt();
	for(int i=0;i<N;i++)
	{
		int n=s.nextInt();
		boolean b=false;//Number is not Composite

		for(int j=2;j<=Math.sqrt(n);j++)
		{
			if(n%j==0){	//Number is composite
				b=true;
				// break;
			}
		}

		if(b)
		{
			int y=(int)Math.floor(Math.sqrt(n));
			int x=n/y;

			for(int j=0;j<x;j++)
			{
				System.out.print("X");
			}
			for(int j=0;j<y;j++)
			{
				System.out.print("D");
			}
		}
		else
		{
			System.out.print("XD");
			if(n>=3)
				{
					System.out.print("X");
				}
			for(int j=0;j<Math.floor(n/2);j++)
			{
				
				System.out.print("D");
			}	
		}
		System.out.println();
	}
}
}
//XDDDDD