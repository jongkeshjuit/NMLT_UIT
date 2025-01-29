//Bài 143: Hãy liệt kê các vị trí mà giá trị tại các vị trí đó bằng giá trị dương nhỏ nhất trong mảng một chiều các số thực

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(float a[] , int &n);
float timduongdautien(float a[] , int n);
float timgiatriduongnhonhat(float a[] , int n);
void LietKeViTriGiaTriDuongMin(float a[] , int n);

void Nhapmang1chieu(float a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
float timduongdautien(float a[] , int n)
{
    for (int i = 0; i < n; i++)
    {
         if (a[i] > 0)
         {
             return a[i];
         }
    }
    return -1;
}
float timgiatriduongnhonhat(float a[], int n)
{
    float duongnhonhat = timduongdautien(a, n);
    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0 && a[i] < duongnhonhat)
        {
            duongnhonhat = a[i];
        }
    }
    return duongnhonhat;
}

void LietKeViTriGiaTriDuongMin(float a[], int n)
{
    float DuongMin = timgiatriduongnhonhat(a, n);
    for(int i = 0; i < n; i++)
    {
        if(a[i] == DuongMin)
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
    cout<<endl<<"Vi tri gia tri duong Min trong mang la: ";
    LietKeViTriGiaTriDuongMin(a,n);
    return 0;
}
