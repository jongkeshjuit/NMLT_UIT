//Bài 155: Tính tổng các giá trị dương trong mảng một chiều các số thực (tongduong).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(float a[] , int &n);
float tongduong(float a[] , int n);

void Nhapmang1chieu(float a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
float tongduong(float a[] , int n)
{
    int s = 0;
    for( int i = 0; i < n; i++)
    {
        if(a[i]>0)
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
    cout<<endl<<"Tong gia tri duong phan tu trong mang la: "<<tongduong(a,n);
    return 0;
}
