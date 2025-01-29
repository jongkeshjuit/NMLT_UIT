//Bài 261: Cho mảng một chiều các số nguyên a. Hãy tạo mảng b từ mảng a, sao cho mảng b chỉ chứa các giá trị lẻ.

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmanga(int a[] , int &n);
void Xuatmanga(int a[] , int n);
void mangconle(int a[], int b[], int &n );

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
void mangconle(int a[], int b[], int &n )
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            b[j] = a[i];
            j++;
        }
    }
    cout << "\nMang b chi chua cac gia tri le : ";
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
    mangconle(a,b,n);
    return 0;
}
