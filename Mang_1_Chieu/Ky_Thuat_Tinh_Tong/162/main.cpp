//Bài 162: Tính tổng các giá trị chính phương trong mảng một chiều các số nguyên (tongchinhphuong).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
int SoChinhPhuong(int b);
int tongchinhphuong(int a[] , int n);

void Nhapmang1chieu(int a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
int SoChinhPhuong(int b)
{
    return (sqrt((float)b) == (int)sqrt((float)b));
}
int tongchinhphuong(int a[] , int n)
{
    int s = 0;
    for( int i = 0; i < n; i++)
    {
        if(SoChinhPhuong(a[i]) == 1)
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
    cout<<endl<<"Tong so chinh phuong trong mang la: "<<tongchinhphuong(a,n);
    return 0;
}
