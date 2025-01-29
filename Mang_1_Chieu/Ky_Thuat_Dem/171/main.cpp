//Bài 171: Đếm số lượng giá trị dương chia hết cho 7 trong mảng một chiều các số nguyên (demchiahetbay).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
int demchiahetbay(int a[] , int n);

void Nhapmang1chieu(int a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}

int demchiahetbay(int a[] , int n)
{
    int count = 0;
    for(int i =0 ; i < n ; i++)
    {
        if(a[i] > 0 && a[i] % 7 == 0)
            count++;
    }
    return count;
}

int main()
{
    int n;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    int a[100];
    Nhapmang1chieu(a,n);
    cout<<endl<<"Dem so phan tu chia het cho 7 trong mang la: "<<demchiahetbay(a,n);
    return 0;
}
