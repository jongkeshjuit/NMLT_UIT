//Bài 141: Hãy liệt kê các vị trí mà giá trị tại vị trí đó là số chính phương trong mảng một chiều các số nguyên.

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(float a[] , int &n);
int KiemTraChinhPhuong( int b );
void lietkevitrisochinhphuong(float a[] , int n );
void Nhapmang1chieu(float a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
int KiemTraChinhPhuong( int b )
{
    return (sqrt((float)b) == (int)sqrt((float)b));
}
void lietkevitrisochinhphuong(float a[] , int n )
{
    int flag = 0;
    for(int i = 0; i < n; i++)
    {
        if(KiemTraChinhPhuong(a[i]) == 1)
        {
            flag = 1;
            cout<<i<<" ";
        }
    }
    if(flag == 0) cout<<"Khong co so Chinh Phuong. ";
}
int main()
{
    int n;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    float a[100];
    Nhapmang1chieu(a,n);
    cout<<endl<<"Cac so chinh phuong trong mang la: ";
    lietkevitrisochinhphuong(a,n);
    return 0;
}
