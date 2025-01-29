//Bài 156: Tính tổng các giá trị có chữ số đầu tiên là chữ số lẻ trong mảng một chiều các số nguyên (tongdaule).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
int SoCoChuSoLeDauTien(int b);
int tongdaule(int a[] , int n);

void Nhapmang1chieu(int a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
int SoCoChuSoLeDauTien(int b)
{
    int donvi;
    b = abs(b);
    while(b >= 10)
    {
        donvi = b % 10;
        b /= 10;
    }
    if(b % 2 == 1)
    {
        return 1;
    }
    return 0;
}
int tongdaule(int a[] , int n)
{
    int s = 0;
    for( int i = 0; i < n; i++)
    {
        if(SoCoChuSoLeDauTien(a[i]) == 1)
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
    cout<<endl<<"Tong gia tri le phan tu trong mang la: "<<tongdaule(a,n);
    return 0;
}
