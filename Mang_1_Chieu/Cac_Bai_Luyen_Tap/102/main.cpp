//Bài 102: Tìm giá trị âm đầu tiên trong mảng một chiều các sô thực (amdau). Nếu mảng không có giá trị âm thì trả về giá trị không âm là giá trị 1.


#include <iostream>
#include<cmath>
using namespace std;

void Nhapmang(float a[] , int &n);
void Xuatmang(float a[] , int n);
float amdau(float a[] , int n);

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
float amdau(float a[] , int n)
{
    for(int i = 0; i <= n; i++)
    {
        if(a[i] < 0)
        {
            return a[i];
        }
    }
    return -1;
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
    cout<<"\nSo am dau tien trong mang la : "<<amdau(a,n);
    return 0;
}
