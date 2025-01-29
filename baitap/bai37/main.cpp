//Bài 37: Tính S(n) = CanBac N(N + CanBac N – 1(N – 1 + … + CanBac3(3 + CanBac2(2))) có n – 1 dấu căn
#include <iostream>
#include<cmath>
using namespace std;
float TinhTong(int n);
int main()
{
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    float s=TinhTong(n);
    cout<<"Tong la: "<<s;
    return 0;
}
float TinhTong(int n)
{
    float s=0;
    if(n>0)
    {
        for(int i=2;i<=n;++i)
        {
            s=pow((i+s)*1.0,1.0/i);
        }
    }
    else cout<<"Nhap lai n.";
    return s;
}
