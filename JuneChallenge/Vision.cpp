#include<iostream>
using namespace std;
#include<cmath>
#include<iomanip>
int main()
{
	int T;
	cin>>T;
	std::cout<<fixed;
		std::cout<<setprecision(10);

	for(int i=0;i<T;i++)
	{
		double px,py,pz;
		double qx,qy,qz;
		double dx,dy,dz;
		double cx,cy,cz,r;
		
		cin>>px>>py>>pz;
		cin>>qx>>qy>>qz;
		cin>>dx>>dy>>dz;
		cin>>cx>>cy>>cz>>r;
		
		double x,y;
		x=px-cx;//x=3
		y=py-cy;//y=3
		// cout<<"x "<<x<<endl;
		// cout<<"y "<<y<<endl;
		//Equation of Tangent;

		//Calculate c and m

		double c1,c2,m1,m2;
		double a,b,c22;

		a=x*x-r*r;//0
		b=-2*x*y;//-18
		c22=y*y-r*r;//0

		// cout<<"a "<<a<<endl;
		// cout<<"b "<<b<<endl;
		// cout<<"c22 "<<c22<<endl;
		double t1,t2;
		if(a!=0)
		{
			m1=(-b+sqrt(b*b-4*a*c22))/(2.0*a);
			m2=(-b-sqrt(b*b-4*a*c22))/(2.0*a);
		
			
			c1=y-m1*x;
			c2=y-m2*x;

			// cout<<"c1 "<<c1<<endl;
			// cout<<"c2 "<<c2<<endl;

		
			t1=(m1*(qx-cx)+c1-qy+cy)/(dy-dx*m1);
			t2=(m2*(qx-cx)+c2-qy+cy)/(dy-dx*m2);
			if(t1>0 && t2<0)
				cout<<t1<<endl;
			else
				// if(t2>0)
					cout<<t2<<endl;
			// cout<<"1.."<<endl;
		}
		else
		{
			double tt;
			m1=-c22/b;
			t2=(-qx+px)/dx;
			c1=y-m1*x;
			t1=(m1*(qx-cx)+c1-qy+cy)/(dy-dx*m1)*1.0;
			if(isinf(t1) || t1<0)
				tt=t2;
			else
				tt=t1;

			cout<<tt<<endl;
		}
		
	}
	return 0;
}