//Bài 36: Tính S(n) = CanBac2(n! + CanBac2((n-1)! +CanBac2((n – 2)! + … + CanBac2(2!) + CanBac2(1!)))) có n dấu căn
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
    float s=0,t=1;
    if(n>0)
    {
        for(int i=1;i<=n;++i)
        {
            t=t*i;
            s=sqrt(s+t);
        }
    }
    else cout<<"Nhap lai n.";
    return s;
}
