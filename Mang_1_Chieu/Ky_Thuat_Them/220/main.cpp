//Bài 220: Hãy thêm một phần tử có giá trị x vào mảng tại vị trí k (themvitri).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(float a[] , int &n);
void Xuat(float a[] , int n);
void themvitri(float a[], int &n, int x, int k);

void Nhapmang1chieu(float a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
void Xuat(float a[] , int n)
{
     for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void themvitri(float a[], int &n, int x, int k) {
    for (int i = n; i > k; i--) {
        a[i] = a[i - 1];
    }
    a[k] = x;
    n++;
}
int main()
{
    int n;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    float a[100];
    Nhapmang1chieu(a,n);
    cout<<"Cac phan tu trong mang la : ";
    Xuat(a,n);
    int x;
    cout<<"Nhap gia tri can them : ";
    cin>>x;
    int k;
    cout<<"Nhap vi tri can them : ";
    cin>>k;
    themvitri(a,n,x,k);
    Xuat(a,n);
    return 0;
}
