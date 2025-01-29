//Bài 223: Hãy thêm một giá trị x vào trong mảng tăng dần mà vẫn giữ nguyên tính đơn điệu tăng của mảng (thembaotoan).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
void Xuat(int a[] , int n);
void thembaotoan(int a[], int &n, int x);

void Nhapmang1chieu(int a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
void Xuat(int a[] , int n)
{
     for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void thembaotoan(int a[], int &n, int x)
{
    int i;
    for (i = n - 1; i >= 0 && a[i] > x; i--)
    {
        a[i + 1] = a[i];
    }
    a[i + 1] = x;
    n++;
}
int main()
{
    int n;
    cout<<"Nhap so phan tu mang a : ";
    cin>>n;
    int a[100],b[100];
    Nhapmang1chieu(a,n);
    int x;
    cout<<"Nhap gia tri can them : ";
    cin>>x;
    cout<<endl;
    cout<<"Them bao toan trong mang a la : ";
    thembaotoan(a,n,x);
    Xuat(a,n);
    return 0;
}
