//Bài 100: Tìm “số nguyên tố đầu tiên” trong mảng một chiều các số nguyên (nguyentodau). Nếu mảng không có số nguyên tố thì trả về giá trị -1.

#include <iostream>
#include<cmath>
using namespace std;

void Nhapmang(int a[] , int &n);
void Xuatmang(int a[] , int n);
bool KiemTraNguyenTo( int n );
int nguyentodau(int a[] , int n);

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
bool KiemTraNguyenTo( int n )
{
    if (n < 2)
    {
        return false;
    }
    else if (n > 2)
    {
        if (n % 2 == 0)
        {
            return false;
        }
        for (int i = 3; i <= sqrt((float)n); i += 2)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}
int nguyentodau(int a[] , int n)
{
    for(int i = 0; i <= n; i++)
    {
        if(KiemTraNguyenTo(a[i])== 1)
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
    cout<<"\nSo nguyen to dau tien trong mang la : "<<nguyentodau(a,n);
    return 0;
}
