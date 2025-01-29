//Bài 85: Viết hàm nhập mảng một chiều các số nguyên.

#include <iostream>

using namespace std;

void Nhapmang1chieu(int a[] , int &n);
void Nhapmang1chieu(int a[] , int &n)
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
    int a[100];
    Nhapmang1chieu(a,n);
    return 0;
}
