//Bài 71: Tính S(x, n) = -x + x^2/(1 + 2) – x^3/(1 + 2 + 3) + … + (-1)^n * x^n/(1 + 2 +… + n)

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
    float p=0;
    float s=0;
    for(int i=1;i<=n;++i)
    {
        t=t*(-1)*x;
        p = p + i;
        s = s + t/p;
    }
    cout<<"\nTong la: "<<s;
}

