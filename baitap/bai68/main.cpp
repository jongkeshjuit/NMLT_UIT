//Bài 68: Tính S(x, n) = -x^2 + x^4  + … + (-1)^n * x^2n

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
    int t=1;
    int s=0;
    for(int i=1;i<=n;++i)
    {
        t=t*(-1)*x*x;
        s=s+t;
    }
    cout<<"\nTong la: "<<s;
}
