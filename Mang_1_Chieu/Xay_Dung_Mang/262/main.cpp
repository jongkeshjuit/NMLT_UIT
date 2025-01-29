//Bài 262: Cho mảng một chiều các số thực a. Hãy tạo mảng b từ mảng a, sao cho mảng b chỉ chứa các giá trị âm.

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmanga(int a[] , int &n);
void Xuatmanga(int a[] , int n);
void mangconam(int a[], int b[], int &n );

void Nhapmanga(int a[] , int &n)
{
    for(int i = 0; i < n; i++ )
        cin>>a[i];
}
void Xuatmanga(int a[] , int n)
{
     for(int i = 0; i < n; i++ )
        cout<<a[i]<<" ";
}
void mangconam(int a[], int b[], int &n )
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            b[j] = a[i];
            j++;
        }
    }
    cout << "\nMang b chi chua cac gia tri am : ";
    for (int i = 0; i < j; i++)
    {
        cout << b[i] << " ";
    }
}
int main()
{
    int n;
    cout<<"Nhap so phan tu mang a : ";
    cin>>n;
    int a[n];
    Nhapmanga(a,n);
    int b[n];
    cout<<"Phan tu mang a la : ";
    Xuatmanga(a,n);
    mangconam(a,b,n);
    return 0;
}
