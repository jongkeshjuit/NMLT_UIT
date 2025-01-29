//Bài 225: Xóa các phần tử có chỉ số k trong mảng (xoavitri).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
void xuat(int a[], int n);
void xoavitri(int a[], int &n, int k);

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
int main()
{
    int n;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    int a[100];
    Nhapmang1chieu(a,n);
    cout<<endl<<"Cac phan tu trong mang a truoc khi xoa la: ";
    xuat(a,n);
    int k=k-1;
    cout<<"\nVi tri thu k can xoa : ";
    cin>>k;
    xoavitri(a,n,k);
    cout<<"Cac phan tu trong mang a sau khi xoa : ";
    xuat(a,n);
    return 0;
}
