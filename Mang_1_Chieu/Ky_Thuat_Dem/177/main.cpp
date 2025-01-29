//Bài 177: Hãy đếm số lượng “số nguyên tố” có trong mảng một chiều các số nguyên (demnguyento).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
bool KiemTraNguyenTo( int b );
int demnguyento(int a[] , int n);

void Nhapmang1chieu(int a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
bool KiemTraNguyenTo( int b )
{
    int count = 0;
    if(b<2) return false;
    else if(b>2)
    {
        for(int i = 1; i <= b; i++)
        {
            if(b%i==0)
                count ++;
        }
        if(count!=2) return false;
        else return true;
    }
}
int demnguyento(int a[] , int n)
{
    int count = 0;
    for(int i =0 ; i < n ; i++)
    {
        if(KiemTraNguyenTo(a[i]) == 1)
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
    cout<<endl<<"Dem so nguyen to trong mang la: "<<demnguyento(a,n);
    return 0;
}
