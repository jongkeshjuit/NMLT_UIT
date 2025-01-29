//Bài 47: Hãy tính tổng các chữ số chẵn của số nguyên dương n
#include <iostream>
using namespace std;
int TongChan(int n);
int main()
{
    int n;
    do
    {
        cout<<"\nNhap n: ";
        cin>>n;
    }
    while(n<0 && cout<<"Nhap lai n." );
    int s=TongChan(n);
    cout<<"Tong chan la: "<<s;
    return 0;
}
int TongChan(int n)
{
    int s=0;
    int x=n;
    if(n>0)
    {
        while(x!=0)
        {
            if(x%2==0)
               s=s+x%10;
            x/=10;
        }
    }
    else cout<<"Nhap lai n.";
    return s;
}
