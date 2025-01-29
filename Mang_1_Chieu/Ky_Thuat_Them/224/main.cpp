//Bài 224: Viết chương trình thực hiện các yêu cầu sau:
//         Nhập mảng n số nguyên từ bàn phím sao cho khi nhập xong các phần tử trong mảng được sắp theo thứ tự tăng dần (nhapbaotoan).


#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
void HoanVi(int &a, int &b);
void nhapbaotoan(int a[], int n);
void Nhapmang1chieu(int a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
void HoanVi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void nhapbaotoan(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(a[i] > a[j])
                HoanVi(a[i],a[j]);
        }
    }
}
void xuat(int a[], int n)
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
    int a[100];
    Nhapmang1chieu(a,n);
    cout<<endl<<"Sap xep tang trong mang la: ";
    nhapbaotoan(a,n);
    xuat(a,n);
    return 0;
}
