//Bai 64: Giai phuong trinh bac 1 :  ax+b=0
#include <iostream>
using namespace std;
float PTB1(float a, float b);
int main()
{
    float a;
    cout<<"\nNhap a: ";
    cin>>a;
    float b;
    cout<<"\nNhap b: ";
    cin>>b;
    PTB1(a,b);
}
float PTB1(float a, float b)
{
    if(a==0 && b==0) cout<<"\nPhuong trinh co vo so nghiem.";
    if(a==0 && b!=0) cout<<"\nPhuong trinh vo nghiem.";
    if(a!=0 || b!=0) cout<<"\nPhuong trinh co mot nghiem duy nhat: "<<-b/a;
}
