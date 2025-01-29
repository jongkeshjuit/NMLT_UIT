//Bài 48: Hãy tính tích các chữ số lẻ của số nguyên dương n
#include <iostream>
using namespace std;
int TichLe(int n);
int main()
{
    int n;
    do
    {
        cout<<"\nNhap n: ";
        cin>>n;
    }
    while(n<0 && cout<<"Nhap lai n." );
    int s=TichLe(n);
    cout<<"Tich le la: "<<s;
    return 0;
}
int TichLe(int n)
{
    int s=1;
    int x=n;
    if(n>0)
    {
        while(x!=0)
        {
            if(x%2==1)
               s=s*(x%10);
            x/=10;
        }
    }
    else cout<<"Nhap lai n.";
    return s;
}
