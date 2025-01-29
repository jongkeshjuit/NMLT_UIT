//Bài 132: Hãy liệt kê các số âm trong mảng một chiều các số thực (lietkeam).

#include <iostream>

using namespace std;

void Nhapmang1chieu(float a[] , int &n);
void  lietkeam(float a[] , int n );
void Nhapmang1chieu(float a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
void lietkeam(float a[] , int n )
{
    for(int i = 0; i < n; i++)
    {
        if(a[i]<0)
            cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    float a[100];
    Nhapmang1chieu(a,n);
    cout<<endl<<"Cac so am trong mang la: ";
    lietkeam(a,n);
    return 0;
}
