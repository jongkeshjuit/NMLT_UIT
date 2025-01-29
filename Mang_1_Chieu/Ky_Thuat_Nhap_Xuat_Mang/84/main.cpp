//Bài 84:  Viết hàm nhập mảng một chiều các số thực.

#include <iostream>

using namespace std;

void Nhapmang1chieu(float a[] , int &n);
void Nhapmang1chieu(float a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
int main()
{
    int n;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    float a[100];
    Nhapmang1chieu(a,n);
    return 0;
}
