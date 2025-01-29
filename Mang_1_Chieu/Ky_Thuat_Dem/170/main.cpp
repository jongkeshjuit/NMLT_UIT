//Bài 170: Đếm số lượng số chẵn có trong mảng một chiều các số nguyên (demchan).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
int demchan(int a[] , int n);

void Nhapmang1chieu(int a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}

int demchan(int a[] , int n)
{
    int count = 0;
    for(int i =0 ; i < n ; i++)
    {
        if(a[i] % 2 == 0)
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
    cout<<endl<<"Dem so phan tu chan trong mang la: "<<demchan(a,n);
    return 0;
}
