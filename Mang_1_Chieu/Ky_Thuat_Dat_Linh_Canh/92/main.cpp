//Bài 92: Tìm “số chẵn cuối cùng” trong mảng một chiều các số nguyên (chancuoi). Nếu mảng không có giá trị chẵn thì trả về giá trị -1.

#include <iostream>

using namespace std;

void Nhapmang1chieu(int a[] , int &n);
int chancuoi(int a[] , int n );
void Nhapmang1chieu(int a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
int chancuoi(int a[] , int n )
{
    for(int i = n - 1; i >= 0; i--)
    {
        if(a[i] % 2 == 0)
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
    int a[100];
    cout<<endl;
    Nhapmang1chieu(a,n);
    cout<<endl<<"So chan cuoi cung trong mang la: "<<chancuoi(a,n);
    return 0;
}
