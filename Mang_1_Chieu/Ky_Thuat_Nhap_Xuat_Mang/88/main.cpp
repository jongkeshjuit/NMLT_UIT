//Bài 88: Viết hàm liệt kê các giá trị chẵn trong mảng một chiều các số nguyên.
#include <iostream>

using namespace std;

void Nhapmang1chieu(int a[] , int &n);
int LietKeSoChan(int a[] , int n);
void Nhapmang1chieu(int a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
int LietKeSoChan(int a[] , int n )
{
    for(int i = 0; i < n; i++)
    {
        if(a[i]%2==0)
            cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    int a[100];
    Nhapmang1chieu(a,n);
    cout<<" Cac so chan co trong mang la: "<<endl;
    LietKeSoChan(a,n);
    return 0;
}
