//Bài 94: Tìm “vị trí của giá trị chẵn đầu tiên” trong mảng một chiều các số nguyên (vitrichandau).
//        Nếu mảng không có giá trị chẵn thì hàm sẽ trả về giá trị là – 1

#include <iostream>

using namespace std;

void Nhapmang1chieu(int a[] , int &n);
int vitrichandau(int a[] , int n );

void Nhapmang1chieu(int a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
int vitrichandau(int a[] , int n )
{
    for(int i = 0; i <= n; i++)
    {
        if(a[i] % 2 == 0)
        {
            return i;
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
    cout<<endl<<"Vi tri chan dau trong mang la: "<<vitrichandau(a,n);
    return 0;
}
