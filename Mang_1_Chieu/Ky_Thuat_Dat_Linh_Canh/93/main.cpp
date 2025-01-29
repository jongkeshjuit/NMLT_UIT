//Bài 93: Tìm “một vị trí mà giá trị tại vị trí đó là giá trị nhỏ nhất” trong mảng một chiều các số thực (vitrinhonhat).

#include <iostream>

using namespace std;

void Nhapmang1chieu(float a[] , int &n);
float vitrinhonhat(float a[] , int n );
void Nhapmang1chieu(float a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
float vitrinhonhat(float a[] , int n )
{
   int vtnn = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] < a[vtnn])
        {
            vtnn = i;
        }
    }
    return vtnn;
}
int main()
{
    int n;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    float a[100];
    cout<<endl;
    Nhapmang1chieu(a,n);
    cout<<endl<<"Vi tri nho nhat trong mang la: "<<vitrinhonhat(a,n);
    return 0;
}
