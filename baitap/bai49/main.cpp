//Bài 49: Cho số nguyên dương n. Hãy tìm chữ số đầu tiên của n
#include <iostream>
using namespace std;
int SoNguyenDuongDauTien(int n);
int main()
{
    int n;
    do
    {
        cout<<"\nNhap n: ";
        cin>>n;
    }
    while(n<0 && cout<<"Nhap lai n." );
    int s=SoNguyenDuongDauTien(n);
    cout<<"So Nguyen Duong Dau Tien la: "<<s;
    return 0;
}
int SoNguyenDuongDauTien(int n)
{
    int s;
    int x=n;
    if(n>0)
    {
        while(x!=0)
        {
            s=x%10;
            x/=10;
        }
    }
    else cout<<"Nhap lai n.\n";
    return s;
}
