//Bài 69: Tính S(x, n) = x – x^3 + x^5 + … + (-1)^n * x^2n+1

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
        t=pow(x, (2 * i )) * pow(-1, (float)i);
        s=s+t;
    }
    cout<<"\nTong la: "<<s;
}

