//Bài 178: Hãy đếm số lượng “số hoàn thiện” có trong mảng một chiều các số thực (demhoanthien).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(float a[] , int &n);
bool KiemTraHoanThien( int b );
float demhoanthien(float a[] , int n);

void Nhapmang1chieu(float a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
bool KiemTraHoanThien( int b )
{
    int s = 0;
    for( int i = 1; i < b; i++ )
    {
        if(b % i == 0)
            s = s + i;
    }
    if(s == b)
        return 1;
    return 0;
}
float demhoanthien(float a[] , int n)
{
    float count = 0;
    for(int i =0 ; i < n ; i++)
    {
        if(KiemTraHoanThien(a[i]) == 1)
            count++;
    }
    return count;
}

int main()
{
    int n;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    float a[100];
    Nhapmang1chieu(a,n);
    cout<<endl<<"Dem so hoan thien trong mang la: "<<demhoanthien(a,n);
    return 0;
}
