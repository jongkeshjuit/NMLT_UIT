//Bài 164: Tính tổng các giá trị có chữ số đầu tiên là chữ số chẵn có trong mảng các số nguyên (tongdauchan).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
int SoCoChuSoChanDauTien(int b);
int tongdauchan(int a[] , int n);

void Nhapmang1chieu(int a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
int SoCoChuSoChanDauTien(int b)
{
    int donvi;
    b = abs(b);
    while(b >= 10)
    {
        donvi = b % 10;
        b /= 10;
    }
    if(b % 2 == 0)
    {
        return 1;
    }
    return 0;
}
int tongdauchan(int a[] , int n)
{
    int s = 0;
    for( int i = 0; i < n; i++)
    {
        if(SoCoChuSoChanDauTien(a[i]) == 1)
            s = s + a[i];
    }
    return s;
}

int main()
{
    int n;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    int a[100];
    Nhapmang1chieu(a,n);
    cout<<endl<<"Tong gia tri co so chan dau tien phan tu trong mang la: "<<tongdauchan(a,n);
    return 0;
}
