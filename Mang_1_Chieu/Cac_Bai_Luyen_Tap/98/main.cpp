//Bài 98: Tìm “giá trị nhỏ nhất” trong mảng một chiều số thực (nhonhat).

#include <iostream>

using namespace std;

void Nhapmang(float a[] , int &n);
void Xuatmang(float a[] , int n);
float nhonhat(float a[] , int n);

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
float nhonhat(float a[] , int n)
{
    float min = a[0];
    for(int i = 0; i < n;i++)
    {
        if(a[i]<min)
            min = a[i];
    }
    return min;
}
int main()
{
    int n;
    cout<<"Nhap so phan tu cua mang : ";
    cin>>n;
    float a[100];
    Nhapmang(a,n);
    cout<<"Cac phan tu trong mang la : ";
    Xuatmang(a,n);
    cout<<"\nGia tri nho nhat trong mang la : "<<nhonhat(a,n);
    return 0;
}
