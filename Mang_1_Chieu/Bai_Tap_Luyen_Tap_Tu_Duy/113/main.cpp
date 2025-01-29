//Bài 113: Cho mảng một chiều các sô thực, hãy tìm đoạn [a,b] sao cho đoạn này chứa tất cả các giá trị trong mảng (timdoan).

#include <iostream>
#include<cmath>
using namespace std;

void Nhapmang(float a[] , int &n);
void Xuatmang(float a[] , int n);
float timdoan(float a[] , int n);

void Nhapmang(float a[] , int &n)
{
    for(int i = 0; i < n ;i++)
    {
        cin>>a[i];
    }
}
void Xuatmang(float a[] , int n)
{
    for(int i = 0; i < n ;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
float timdoan(float a[], int n)
{
    float min = a[0], max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
        if (a[i] > max)
            max = a[i];
    }
    cout << "Doan [" << min << ", " << max << "] chua tat ca cac gia tri trong mang." << endl;
}
int main()
{
    int n;
    cout<<"Nhap so phan tu cua mang : ";
    cin>>n;
    float a[100];
    Nhapmang(a,n);
    cout<<"\nCac phan tu trong mang la : ";
    Xuatmang(a,n);
    timdoan(a,n);
    return 0;
}
