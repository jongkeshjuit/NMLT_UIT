//Bài 139: Hãy liệt kê các vị trí mà giá trị tại đó là giá trị lớn nhất trong mảng một chiều các số thực (lietkevitrilonnhat).

#include <iostream>

using namespace std;

void Nhapmang1chieu(float a[] , int &n);
float TimMax(float a[], int n);
void  lietkevitrilonnhat(float a[] , int n );
void Nhapmang1chieu(float a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
float TimMax(float a[], int n)
{
    float max = a[0];
    for(int i = 0; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
void lietkevitrilonnhat(float a[] , int n )
{
    float max = TimMax(a, n);
    for(int i = 0; i < n; i++)
    {
        if(a[i] == max)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    float a[100];
    Nhapmang1chieu(a,n);
    cout<<endl<<"Cac vi tri lon nhat trong mang la: ";
    lietkevitrilonnhat(a,n);
    return 0;
}
