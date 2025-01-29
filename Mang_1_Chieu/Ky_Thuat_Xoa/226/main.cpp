//Bài 226: Hãy xóa tất cả các số lớn nhất trong mảng các số thực (xoalonnhat).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(float a[] , int &n);
void xuat(float a[], int n);
void xoavitri(float a[], int &n, int k);
float TimMax(float a[], int n);
void xoalonnhat(float a[], int &n);

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
float TimMax(float a[], int n)
{
    float max = a[0];
    for(int i = 1; i < n; i++)
    {
        max = (max < a[i]) ? a[i] : max;
    }
    return max;
}

void xoalonnhat(float a[], int &n)
{
    float max =TimMax(a, n);
    for(int i = 0; i < n; i++)
    {
        if(a[i] == max)
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
    xoalonnhat(a,n);
    xuat(a,n);
    return 0;
}
