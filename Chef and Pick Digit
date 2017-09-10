import java.util.*;
 
	public class Main
	{
		public static void main(String args[])
		{
			Scanner s=new Scanner(System.in);
			
			int N=s.nextInt();
 
			for(int i=0;i<N;i++)
			{
				String st=s.next();
 
				int a[]={0,0,0,0,0,0,0,0,0,0};
				
				for(int j=0;j<st.length();j++)
				{
					switch(st.charAt(j))
					{
						case '0': a[0]++;
						break;
						case '1': a[1]++;
						break;
						case '2': a[2]++;
						break;
						case '3': a[3]++;
						break;
						case '4': a[4]++;
						break;
						case '5': a[5]++;
						break;
						case '6': a[6]++;
						break;
						case '7': a[7]++;
						break;
						case '8': a[8]++;
						break;
						case '9': a[9]++;
						break;
						
					}
				}
				Vector v=new Vector();
				for(int k=0;k<10;k++)
				{
					if(a[k]>0)
					{
						if(a[0]>0 && k!=0)
						{
							char c=(char)(k*10);
							if(c<='Z' && c>='A')
							{
								v.add(c);
							}
 
						}
						if(a[1]>0 && k!=1)
						{
							char c=(char)(k*10+1);
							if(c<='Z' && c>='A')
							{
								v.add(c);	
							}
 
						}
						if(a[2]>0 && k!=2)
						{
							char c=(char)(k*10+2);
							if(c<='Z' && c>='A')
							{	
								v.add(c);
							}
 
						}
						if(a[3]>0 && k!=3)
						{
							char c=(char)(k*10+3);
							
							if(c<='Z' && c>='A')
							{
								v.add(c);
							}
 
						}
						if(a[4]>0 && k!=4)
						{
							char c=(char)(k*10+4);
							if(c<='Z' && c>='A')
							{
								v.add(c);
							}
 
						}
						if(a[5]>0 && k!=5)
						{
							char c=(char)(k*10+5);
							if(c<='Z' && c>='A')
							{
								v.add(c);
							}
 
 
						}
						if(a[6]>0 && k!=6)
						{
							char c=(char)(k*10+6);
							if(c<='Z' && c>='A')
							{
								v.add(c);
							}
 
						}
						if(a[7]>0 && k!=7)
						{
							char c=(char)(k*10+7);
							if(c<='Z' && c>='A')
							{
								v.add(c);
							}
 
						}
						if(a[8]>0 && k!=8)
						{
							char c=(char)(k*10+8);
							if(c<='Z' && c>='A')
							{
								v.add(c);
							}
 
 
						}
						if(a[9]>0 && k!=9)
						{
							char c=(char)(k*10+9);
							if(c<='Z' && c>='A')
							{
								v.add(c);
							}
						}
						if(a[k]>1)
						{
							char c=(char)(k*10+k);
							if(c<='Z' && c>='A')
							{
								v.add(c);
							}
						}
					}
				}
				
 
				if(v.size()!=0){
				Collections.sort(v);
				System.out.print(v.elementAt(0));
 
				for(int x=1;x<v.size();x++)
 
				{
					//if(x>1){
					if(v.elementAt(x)!=v.elementAt(x-1))
						System.out.print(v.elementAt(x));
 
					//}
 
				}}
				System.out.println();
			}
 
		} 
	} 
