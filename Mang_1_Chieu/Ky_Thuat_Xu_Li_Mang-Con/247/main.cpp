//Bài 247: Liệt kê tất cả các mảng con (lietkecon) trong mảng một chiều các số nguyên.

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
void lietkecon(int a[], int n);
void xuat(int a[] , int n);

void Nhapmang1chieu(int a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
void xuat(int a[] , int n)
{
    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void lietkecon(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++) {
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }
}
int main()
{
    int n,k;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    int a[n];
    Nhapmang1chieu(a,n);
    cout<<endl<<"Cac phan tu trong mang a la: ";
    xuat(a,n);
    cout<<"\nCac phan tu trong mang con cua a la : \n";
    lietkecon(a,n);
    return 0;
}
