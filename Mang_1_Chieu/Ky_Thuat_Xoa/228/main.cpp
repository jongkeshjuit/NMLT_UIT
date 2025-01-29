//Bài 228: Hãy xóa tất cả các số chẵn trong mảng các số nguyên (xoachan)


#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
void xuat(int a[], int n);
void xoavitri(int a[], int &n, int k);
void xoachan(int a[], int &n);

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
void xoachan(int a[], int &n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
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
    xoachan(a,n);
    xuat(a,n);
    return 0;
}
