//Bài 111: Hãy tìm giá trị trong mảng các sô thực “xa giá trị x nhất” (xanhat).

#include <iostream>
#include<cmath>
using namespace std;

void Nhapmang(float a[] , int &n);
void Xuatmang(float a[] , int n);
void Mang_Khoang_Cach(float a[], int n, float b[], float x);
void xanhat(float a[], int n, float b[], float x);

void Nhapmang(float a[] , int &n)
{
    for(int i = 0; i < n ;i++)
    {
        cin>>a[i];
    }
}
void Xuatmang(float a[] , int n)
{
    for(int i = 0; i < n ;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void Mang_Khoang_Cach(float a[], int n, float b[], float x)
{
    for (int i = 0; i < n; i++) {
        b[i] = abs(a[i] - x);
    }
}
void xanhat(float a[], int n, float b[], float x)
{
    float max = b[0];
    int nb = 0;
    for (int i = 1; i < n; i++) {
        if (b[i] > max) {
            max = b[i];
            nb = i;
        }
    }
    cout << "\n--->Gia tri trong mang xa gia tri x nhat la: " << a[nb];
}
int main()
{
    int n;
    cout<<"Nhap so phan tu cua mang : ";
    cin>>n;
    float a[100],b[100];
    Nhapmang(a,n);
    cout<<"\nCac phan tu trong mang la : ";
    Xuatmang(a,n);
    float x;
    cout<<"Nhap gia tri x : ";
    cin>>x;
    Mang_Khoang_Cach(a,n,b,x);
    cout<<"Mang b la : ";
    Xuatmang(b,n);
    xanhat(a,n,b,x);
    return 0;
}
