import java.util.*;
 
public class Main
{
	public static void main(String args[])
	{
		Scanner s=new Scanner(System.in);
		int N=s.nextInt();
 
		for(int i=0;i<N;i++)
		{
			int m=s.nextInt();
			long a[]=new long[m];
			long p[]=new long[m];
			for(int j=0;j<m;j++)
			{
				a[j]=s.nextInt();
				p[0]=a[0];
				if(j>0)
				{
					p[j]=a[j]+p[j-1];
				}
 		}
 		
			long nx[]=new long[m];
 			long ans[]=new long[m];
			long min=0;
			long pos=m-1;
			nx[m-1]=a[m-1];
				ans[m-1]=nx[m-1]+p[m-1];
				min=ans[m-1];
			for(int j=m-2;j>=0;j--)
			{
					nx[j]=a[j]+nx[j+1];
					ans[j]=p[j]+nx[j];
 
					if(ans[j]<=min)
					{
						min=ans[j];
						pos=j;
					}
      }
 
			}
 			System.out.println(pos+1);
 		}
	}
} 
