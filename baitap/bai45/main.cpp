//Bài 45: Hãy tính tích các chữ số của số nguyên dương n
#include <iostream>
using namespace std;
int TinhTich(int n);
int main()
{
    int n;
    do
    {
        cout<<"\nNhap n: ";
        cin>>n;
    }
    while(n<0 && cout<<"Nhap lai n." );
    int s=TinhTich(n);
    cout<<"Tich la: "<<s;
    return 0;
}
int TinhTich(int n)
{
    int s=1;
    int x=n;
    if(n>0)
    {
        while(x!=0)
        {
            s=s*(x%10);
            x/=10;
        }
    }
    else cout<<"Nhap lai n.";
    return s;
}

