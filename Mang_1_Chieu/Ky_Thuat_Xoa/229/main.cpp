//Bài 229: Hãy xóa tất cả “số chính phương” trong mảng một chiều các số nguyên (xoachinhphuong).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
void xuat(int a[], int n);
void xoavitri(int a[], int &n, int k);
int KiemTraChinhPhuong(int n);
void xoachinhphuong(int a[], int &n);

void Nhapmang1chieu(int a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
void xuat(int a[], int n)
{
     for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
void xoavitri(int a[], int &n, int k)
{
    for(int i = k; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}
int KiemTraChinhPhuong(int n)
{
    return sqrt(float(n)) == (int)sqrt(float(n));
}
void xoachinhphuong(int a[], int &n)
{
    for(int i = 0; i < n; i++)
    {
        if(KiemTraChinhPhuong(a[i]) == 1)
        {
            xoavitri(a, n, i);
            i--;
        }
    }
}

int main()
{
    int n;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    int a[100];
    Nhapmang1chieu(a,n);
    cout<<endl<<"Cac phan tu trong mang a truoc khi xoa la: ";
    xuat(a,n);
    cout<<"\nCac phan tu trong mang a sau khi xoa : ";
    xoachinhphuong(a,n);
    xuat(a,n);
    return 0;
}
