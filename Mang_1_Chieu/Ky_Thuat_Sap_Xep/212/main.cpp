//Bài 212: Hãy sắp xếp các số nguyên tố trong mảng các số nguyên tăng dần các giá trị khác giữ nguyên giá trị và vị trí (nguyentotang).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
bool KiemTraNguyenTo( int b );
void HoanVi(int &a, int &b);
void nguyentotang(int a[], int n);
void Nhapmang1chieu(int a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
bool KiemTraNguyenTo( int b )
{
    int count = 0;
    if(b<2) return false;
    else if(b>2)
    {
        for(int i = 1; i <= b; i++)
        {
            if(b%i==0)
                count ++;
        }
        if(count!=2) return false;
        else return true;
    }
}
void HoanVi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void nguyentotang(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(KiemTraNguyenTo(a[i]) && KiemTraNguyenTo(a[j]))
            {
                if(a[i] > a[j])
                HoanVi(a[i],a[j]);
            }
        }
    }
}
void xuat(int a[], int n)
{
     for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
int main()
{
    int n;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    int a[100];
    Nhapmang1chieu(a,n);
    cout<<endl<<"Sap xep tang nguyen to trong mang la: ";
    nguyentotang(a,n);
    xuat(a,n);
    return 0;
}
