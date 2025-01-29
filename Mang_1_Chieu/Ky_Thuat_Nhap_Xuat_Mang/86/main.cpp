//Bài 86: Viết hàm xuất mảng một chiều các số thực.
#include <iostream>

using namespace std;

void Nhapmang1chieu(float a[] , int &n);
void Xuatmang1chieu(float a[] , int n );
void Nhapmang1chieu(float a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
void Xuatmang1chieu(float a[] , int n )
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
    float a[100];
    Nhapmang1chieu(a,n);
    Xuatmang1chieu(a,n);
    return 0;
}
