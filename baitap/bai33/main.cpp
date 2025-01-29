//Bài 33: Tính S(n) = CanBac2(2+CanBac2(2+….+CanBac2(2 + CanBac2(2)))) có n dấu căn
#include <iostream>
#include <cmath>
using namespace std;
float  TongCan(int n);
int main()
{
    int n;
    cout<<"Nhap n = ";
    cin>>n;
    float s=TongCan(n);
    cout<<"TongCan: "<<s;
    return 0;
}
float TongCan(int n)
{
    float s=sqrt(2);
    if(n>0)
    {
        for(int i=2;i<=n;i++)
        {
            s=sqrt(s+2);
        }
    }
    else cout<<"Nhap lai so tu nhien";
    return s;
}
