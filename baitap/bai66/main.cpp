//Bai 66: Giai phuong trinh bac 4 :  ax^4+bx^2+c=0
#include <iostream>
#include <cmath>
using namespace std;
float PTB4(float a, float b, float c);
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
	PTB4(a,b,c);
	return 0;
}
float PTB4(float a, float b, float c)
{
    float x1,x2;
    float n1,n2,n3,n4;
    float denta=b*b-4*a*c;
	if(denta==0)
    {
        x1=(float)(-1*b+sqrt(denta))/(2*a);
		x2=(float)(-1*b-sqrt(denta))/(2*a);
        n1=(float)(+sqrt(x1));
        n2=(float)(-sqrt(x1));
        cout<<"\nPhuong Trinh co hai nghiem doi cua nhau:"<<"\n"<<"x1 = "<<n1<<"\n"<<"x2 = "<<n2;
    }
	else if(denta<0) cout<<"\nPhuong Trinh Vo Nghiem";
	else {
		x1=(float)(-1*b+sqrt(denta))/(2*a);
		x2=(float)(-1*b-sqrt(denta))/(2*a);
		if(x1>0 && x2>0)
        {
            n1=(float)(+sqrt(x1));
            n2=(float)(-sqrt(x1));
            n3=(float)(+sqrt(x2));
            n4=(float)(-sqrt(x2));
            cout<<"\nPhuong Trinh co bon nghiem phan biet:"<<"\n"<<"x1 = "<<n1<<"\n"<<"x2 = "<<n2<<"\n"<<"x3 = "<<n3<<"\n"<<"x4 = "<<n4;
        }
        else if(x1>0 && x2<0)
        {
            n1=(float)(+sqrt(x1));
            n2=(float)(-sqrt(x1));
            cout<<"\nPhuong Trinh co hai nghiem doi cua nhau:"<<"\n"<<"x1 = "<<n1<<"\n"<<"x2 = "<<n2;
        }
        else if(x1<0 && x2>0)
        {
            n3=(float)(+sqrt(x2));
            n4=(float)(-sqrt(x2));
            cout<<"\nPhuong Trinh co hai nghiem doi cua nhau:"<<"\n"<<"x1 = "<<n3<<"\n"<<"x2 = "<<n4;
        }
	}
}
