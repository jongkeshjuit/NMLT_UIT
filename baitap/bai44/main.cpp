//Bài 44: Hãy tính tổng các chữ số của số nguyên dương n
#include <iostream>
using namespace std;
float TinhTong(int n);
int main()
{
    int n;
    do
    {
        cout<<"\nNhap n: ";
        cin>>n;
    }
    while(n<0 && cout<<"Nhap lai n." );
    int s=TinhTong(n);
    cout<<"Tong la: "<<s;
    return 0;
}
float TinhTong(int n)
{
    int s=0;
    int x=n;
    if(n>0)
    {
        while(x!=0)
        {
            s=s+x%10;
            x/=10;
        }
    }
    else cout<<"Nhap lai n.";
    return s;
}

