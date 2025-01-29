//Bài 221: Hãy viết hàm nhập mảng một chiều các số thực sao cho khi mảng nhập xong các giá trị trong mảng được sắp giảm dần (không sắp xếp sau khi nhập).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(float a[] , int &n);
void HoanVi(float &a, int &b);
void sapxepgiam(float a[], int n);

void Nhapmang1chieu(float a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
void HoanVi(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
}
void sapxepgiam(float a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(a[i] < a[j])
                HoanVi(a[i],a[j]);
        }
    }
}
void xuat(float a[], int n)
{
     for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
int main()
{
    int n;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    float a[100];
    Nhapmang1chieu(a,n);
    cout<<endl<<"Sap xep giam trong mang la: ";
    sapxepgiam(a,n);
    xuat(a,n);
    return 0;
}

