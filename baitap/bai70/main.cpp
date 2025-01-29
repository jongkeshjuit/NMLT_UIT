//Bài 70: Tính S(n) = 1 – 1/(1 + 2) + 1/(1 + 2 + 3)  + … + (-1)^n+1 * 1/(1 + 2 + 3+ … + n)

#include <iostream>
#include<cmath>

using namespace std;

float TinhTong( int n);

int main()
{
    int n;
    do
    {
        cout<<"\nNhap n: ";
        cin>>n;
    }while(n<0 && cout<<"Nhap lai n." );
    TinhTong(n);
    return 0;
}
float TinhTong( int n)
{
    int p=0;
    float s=0;
    for(int i=1;i<=n;++i)
    {
        p = p + i;
        s = s + 1 * pow(-1, (float)(1 + i))/ p;
    }
    cout<<"\nTong la: "<<s;
}

