//Bài 263: Cho mảng một chiều các số thực a. Hãy tạo mảng b từ mảng a, với b[i] = tổng các phần tử lân cận với a[i] trong mảng a.

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmanga(float a[] , int &n);
void Xuatmanga(float a[] , int n);
void mangcontonglancan(float a[], float b[], int &n );

void Nhapmanga(float a[] , int &n)
{
    for(int i = 0; i < n; i++ )
        cin>>a[i];
}
void Xuatmanga(float a[] , int n)
{
     for(int i = 0; i < n; i++ )
        cout<<a[i]<<" ";
}
void mangcontonglancan(float a[], float b[], int &n )
{
    int nb = 0;
    for(int i = 0; i < n; i++)
    {
        if(i == 0)
        {
            b[0] = a[1] + a[0];
        }
        else if(i == n - 1)
        {
            b[nb] = a[i - 1];
        }
        else
        {
            b[nb] = a[i - 1] + a[i + 1];
        }
        nb++;
    }
    cout << "\nMang b voi tong cac phan tu lan can : ";
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
}
int main()
{
    int n;
    cout<<"Nhap so phan tu mang a : ";
    cin>>n;
    float a[n];
    Nhapmanga(a,n);
    float b[n];
    cout<<"Phan tu mang a la : ";
    Xuatmanga(a,n);
    mangcontonglancan(a,b,n);
    return 0;
}
