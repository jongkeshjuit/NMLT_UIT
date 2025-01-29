//Bài 213: Hãy sắp xếp các số hoàn thiện trong mảng giảm dần các giá trị khác giữ nguyên giá trị và vị trí (nguyentotang).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
bool KiemTraHoanThien( int b );
void HoanVi(int &a, int &b);
void hoanthiengiam(int a[], int n);
void Nhapmang1chieu(int a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
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
void HoanVi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void hoanthiengiam(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(KiemTraHoanThien(a[i]) && KiemTraHoanThien(a[j]))
            {
                if(a[i] < a[j])
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
    cout<<endl<<"Sap xep hoan thien giam trong mang la: ";
    hoanthiengiam(a,n);
    xuat(a,n);
    return 0;
}
