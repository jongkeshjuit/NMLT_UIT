//Bài 115: Cho mảng một chiều các số thực hãy tìm giá trị đầu tiên lớn hơn giá trị 2003 (dautien). Nếu mảng không có giá trị thỏa điều kiện
//           trên thì hàm trả về giá trị là 0.

#include <iostream>
#include<cmath>
using namespace std;

void Nhapmang(float a[] , int &n);
void Xuatmang(float a[] , int n);
float dautien(float a[] , int n);

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
float dautien(float a[] , int n)
{
    for(int i = 0; i < n ;i++)
    {
        if(a[i] > 2003)
            return a[i];
    }
    return 0;
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
    cout<<"\n-->Gia tri dau tien lon hon 2003 trong mang la : "<<dautien(a,n);
    return 0;
}
