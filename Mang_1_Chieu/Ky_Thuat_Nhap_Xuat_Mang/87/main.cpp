//Bài 87: Viết hàm xuất mảng một chiều các số nguyên.
#include <iostream>

using namespace std;

void Nhapmang1chieu(int a[] , int &n);
void Xuatmang1chieu(int a[] , int n );

void Nhapmang1chieu(int a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
void Xuatmang1chieu(int a[] , int n )
{
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    int a[100];
    Nhapmang1chieu(a,n);
    Xuatmang1chieu(a,n);
    return 0;
}
