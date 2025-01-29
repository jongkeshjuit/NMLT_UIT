//Bài 264: Cho mảng một chiều các số nguyên a. Hãy tạo mảng b từ mảng a, sao cho mảng b chỉ chứa các số nguyên tố trong mảng a.

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmanga(int a[] , int &n);
void Xuatmanga(int a[] , int n);
int KiemTraNguyenTo(int n);
void mangconnguyento(int a[], int b[], int n );

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
int KiemTraNguyenTo( int n )
{
    int count = 0;
    if(n<2) return 0;
    else if(n>2)
    {
        for(int i = 1; i <= n; i++)
        {
            if(n%i==0)
                count ++;
        }
        if(count!=2) return 0;
        else return 1;
    }
}
void mangconnguyento(int a[], int n )
{
    int b[100], nb = 0;
    for(int i = 0; i < n; i++)
    {
        if(KiemTraNguyenTo(a[i]) == 1)
        {
            b[nb] = a[i];
            nb++;
        }
    }
    cout << "\nMang b chi chua so nguyen to : ";
    Xuatmanga(b,nb);
}
int main()
{
    int n;
    cout<<"Nhap so phan tu mang a : ";
    cin>>n;
    int a[n];
    Nhapmanga(a,n);
    cout<<"Phan tu mang a la : ";
    Xuatmanga(a,n);
    mangconnguyento(a,n);
    return 0;
}
