//Bài 90: Viết hàm tìm “giá trị lớn nhất” trong mảng một chiều số thực (lonnhat).

#include <iostream>

using namespace std;

void Nhapmang1chieu(float a[] , int &n);
float lonnhat(float a[] , int n );
void Nhapmang1chieu(float a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
float lonnhat(float a[] , int n )
{
    float lc = a[0];
    for( int i = 0; i < n; i++)
    {
        if(a[i]>lc)
        {
            lc = a[i];
        }
    }
    return lc;
}
int main()
{
    int n;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    float a[100];
    cout<<endl;
    Nhapmang1chieu(a,n);
    cout<<endl<<"So lon nhat trong mang la: "<<lonnhat(a,n);
    return 0;
}
