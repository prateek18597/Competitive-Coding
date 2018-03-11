import java.util.Scanner;

public class BigSale
{
	public static void main(String args[])
	{
		Scanner s=new Scanner(System.in);
		int N=s.nextInt();

		for(int i=0;i<N;i++)
		{
			int type=s.nextInt();
			double loss=0;
			for(int j=0;j<type;j++)
			{
				int price=s.nextInt();
				int quantity=s.nextInt();
				int discount=s.nextInt();

				double newP=price+price*(discount/100.0);
				double newD=newP*(discount/100.0);
				// System.out.println("New Price "+newP+" New discount "+ newD);
				loss+=(quantity*(price-newP+newD));
			}
			System.out.println(loss);
		}
	}
}