//Bài 40: Tính S(n) = CanBac2(x^n + CanBac2(x^n-1 + … + CanBac2(x^2 + CanBac2(x)))) có n dấu căn
#include <iostream>
#include<cmath>
using namespace std;
float TinhTong( float x,int  n);
int main()
{
    float x;
    cout<<"Nhap x: ";
    cin>>x;
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    float s=TinhTong(x,n);
    cout<<"Tong la: "<<s;
    return 0;
}
float TinhTong(float x, int  n)
{
    float s=0,t=1;
    if(n>0)
    {
        for(int i=1;i<=n;++i)
        {
            t=t*x;
            s=sqrt(t+s);
        }
    }
    else cout<<"Nhap lai n.";
    return s;
}
