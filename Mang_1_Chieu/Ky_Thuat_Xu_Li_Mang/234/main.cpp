//Bài 234: Hãy đưa số một về đầu mảng (motvedau).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
void xuat(int a[], int n);
void DoiCho(int a[], int n, int k);
void motvedau(int a[], int n);

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
void DoiCho(int a[], int n, int k)
{
    for(int i = k; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = 1;
}

void motvedau(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 1)
        {
            DoiCho(a, n, i);
        }
    }
}
int main()
{
    int n,k;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    int a[100];
    Nhapmang1chieu(a,n);
    cout<<endl<<"Cac phan tu trong mang a truoc khi xoa la: ";
    xuat(a,n);
    cout<<"\nCac phan tu trong mang a sau khi xoa : ";
    motvedau(a,n);
    xuat(a,n);
    return 0;
}
