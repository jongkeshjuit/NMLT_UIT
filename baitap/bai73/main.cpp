//Bài 73: Tính S(x, n) = -1 + x^2/2! – x^4/4! + … + (-1)^n+1 * x^2n/(2n)!

#include <iostream>
#include<cmath>

using namespace std;

float TinhTong(float x, int n);

int main()
{   int x;
    cout<<"\nNhap x: ";
    cin>>x;
    int n;
    do
    {
        cout<<"\nNhap n: ";
        cin>>n;
    }while(n<0 && cout<<"Nhap lai n." );
    TinhTong(x,n);
    return 0;
}
float TinhTong(float x, int n)
{
    float t=1;
    float p=1;
    float m=1;
    float s=1;
    for(int i=1;i<=n;++i)
    {
        t = t * (-1) * x * x;
        p = 2 * i;
        m = m * p *( p - 1 );
        s = s + t/m;
    }
    cout<<"\nTong la: "<<-s;
}

