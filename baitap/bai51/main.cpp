//Bài 51: Tìm chữ số lớn nhất của số nguyên dương n
#include <iostream>
using namespace std;
int SoLonNhat(int n);
int main()
{
    int n;
    do
    {
        cout<<"\nNhap n: ";
        cin>>n;
    }
    while(n<0 && cout<<"Nhap lai n." );
    int s=SoLonNhat(n);
    if(n==0) cout<<"So Lon Nhat la: 0";
    if(n<0) return 0;
    if(n>0)
        cout<<"So Lon Nhat la: "<<s;
    return 0;
}
int SoLonNhat(int n)
{
    int Max=0,s;
    int x=n;
    if(n>=0)
    {
        while(x/=10)
        {
            s=n%10;
            if(s>Max)
                Max=s;
        }
    }
    else cout<<"Nhap lai n.\n";
    return s;
}
