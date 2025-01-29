//Bài 154: Tính tổng các phần tử trong mảng (tonggiatri).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(float a[] , int &n);
float tonggiatri(float a[] , int n);

void Nhapmang1chieu(float a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
float tonggiatri(float a[] , int n)
{
    int s = 0;
    for( int i = 0; i < n; i++)
    {
        s = s + a[i];
    }
    return s;
}

int main()
{
    int n;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    float a[100];
    Nhapmang1chieu(a,n);
    cout<<endl<<"Tong gia tri phan tu trong mang la: "<<tonggiatri(a,n);
    return 0;
}
