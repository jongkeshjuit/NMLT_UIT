//Bai 65: Giai phuong trinh bac 2 :  ax^2+bx+c=0
#include <iostream>
#include <cmath>
using namespace std;
float PTB2(float a, float b, float c);
int main()
{
	float a;
	cout<<"\nNhap a: ";
    cin>>a;
    float b;
    cout<<"\nNhap b: ";
    cin>>b;
    float c;
    cout<<"\nNhap c: ";
	cin>>c;
	PTB2(a,b,c);
	return 0;
}
float PTB2(float a, float b, float c)
{
    float x1,x2;
    float denta=b*b-4*a*c;
	if(denta==0) cout<<"\nPhuong Trinh co nghiem kep: x1 = x2 = "<<(float)(-1*b)/(2*a);
	else if(denta<0) cout<<"\nPhuong Trinh Vo Nghiem";
	else {
		x1=(float)(-1*b+sqrt(denta))/(2*a);
		x2=(float)(-1*b-sqrt(denta))/(2*a);
	cout<<"\nPhuong Trinh co hai nghiem phan biet:"<<"\n"<<"x1 = "<<x1<<"\n"<<"x2 = "<<x2;
	}
}
