//Bài 101: Tìm “số hoàn thiện đầu tiên” trong mảng một chiều các số nguyên (hoanthiendau). Nếu mảng không có số hoàn thiện thì trả về giá trị -1.

#include <iostream>
#include<cmath>
using namespace std;

void Nhapmang(int a[] , int &n);
void Xuatmang(int a[] , int n);
bool KiemTraHoanThien( int b );
int hoanthiendau(int a[] , int n);

void Nhapmang(int a[] , int &n)
{
    for(int i = 0; i < n ;i++)
    {
        cin>>a[i];
    }
}
void Xuatmang(int a[] , int n)
{
    for(int i = 0; i < n ;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
bool KiemTraHoanThien( int b )
{
    int s = 0;
    for( int i = 1; i < b; i++ )
    {
        if(b % i == 0)
            s = s + i;
    }
    if(s == b)
        return 1;
    return 0;
}
int hoanthiendau(int a[] , int n)
{
    for(int i = 0; i <= n; i++)
    {
        if(KiemTraHoanThien(a[i])== 1)
        {
            return a[i];
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Nhap so phan tu cua mang : ";
    cin>>n;
    int a[100];
    Nhapmang(a,n);
    cout<<"Cac phan tu trong mang la : ";
    Xuatmang(a,n);
    cout<<"\nSo hoan thien dau tien trong mang la : "<<hoanthiendau(a,n);
    return 0;
}
