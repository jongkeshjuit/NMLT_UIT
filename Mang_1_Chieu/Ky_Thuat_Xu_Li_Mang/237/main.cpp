//Bài 237: Hãy đảo ngược mảng ban đầu (daomang).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
void xuat(int a[], int n);
void DoiCho(int a[], int n, int ViTriDoi);
void chiahetchoba(int a[], int n);

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
void HoanVi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void daomang(int a[], int n)
{
    for(int i = 0, j = n - 1; i < j; i++, j--)
    {
        HoanVi(a[i], a[j]);
    }
}
int main()
{
    int n=10,k;
    //cout<<"Nhap so phan tu mang : ";
    //cin>>n;
    int a[n]={0,1,2,3,4,5,6,7,8,9};
    //Nhapmang1chieu(a,n);
    cout<<endl<<"Cac phan tu trong mang a truoc khi xoa la: ";
    xuat(a,n);
    cout<<"\nCac phan tu trong mang a sau khi xoa : ";
    daomang(a,n);
    xuat(a,n);
    return 0;
}
