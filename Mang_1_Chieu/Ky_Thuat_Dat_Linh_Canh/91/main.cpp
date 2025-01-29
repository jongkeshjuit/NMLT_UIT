//Bài 91: Tìm “giá trị dương đầu tiên” trong mảng một chiều các số thực (duongdau). Nếu mảng không có giá trị dương thì trả về giá trị -1.

#include <iostream>

using namespace std;

void Nhapmang1chieu(float a[] , int &n);
float duongdau(float a[] , int n );
void Nhapmang1chieu(float a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
float duongdau(float a[] , int n )
{
    for (int i = 0; i < n; i++)
    {
         if (a[i]>0)
         {
             return a[i];
         }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    float a[100];
    cout<<endl;
    Nhapmang1chieu(a,n);
    cout<<endl<<"So duong dau tien trong mang la: "<<duongdau(a,n);
    return 0;
}
