//Bài 227: Hãy xóa tất cả các số âm trong mảng các số thực (xoaam).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(float a[] , int &n);
void xuat(float a[], int n);
void xoavitri(float a[], int &n, int k);
void xoaam(float a[], int &n);

void Nhapmang1chieu(float a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
void xuat(float a[], int n)
{
     for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
void xoavitri(float a[], int &n, int k)
{
    for(int i = k; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}
void xoaam(float a[], int &n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0)
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
    float a[100];
    Nhapmang1chieu(a,n);
    cout<<endl<<"Cac phan tu trong mang a truoc khi xoa la: ";
    xuat(a,n);
    cout<<"\nCac phan tu trong mang a sau khi xoa : ";
    xoaam(a,n);
    xuat(a,n);
    return 0;
}
