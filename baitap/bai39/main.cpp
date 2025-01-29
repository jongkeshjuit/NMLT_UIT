//Bài 39: Tính S(n) = CanBac N + 1(N! + CanBacN((N – 1)! + … + CanBac3(2! + CanBac2(1!))) có n dấu căn
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
    float s=0,p=1;
    if(n>0)
    {
        for(int i=1;i<=n;++i)
        {
            p=p*i;
            s=pow((s+p)*1.0,1.0/(i+1));
        }
    }
    else cout<<"Nhap lai n.";
    return s;
}
