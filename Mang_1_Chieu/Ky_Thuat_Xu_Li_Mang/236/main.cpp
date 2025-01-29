//Bài 236: Hãy đưa các số chia hết cho 3 về đầu mảng (chiahetchoba).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
void xuat(int a[], int n);
void DoiCho(int a[], int n, int ViTriDoi);
void chiahetchoba(int a[], int n);

void Nhapmang1chieu(int a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
void xuat(int a[], int n)
{
     for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
void DoiCho(int a[], int n, int ViTriDoi)
{
    int temp = a[ViTriDoi];
    for(int i = ViTriDoi; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = temp;
}

void chiahetchoba(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 3 == 0)
        {
            DoiCho(a, n, i);
        }
    }
}
int main()
{
    int n=10,k;
    //cout<<"Nhap so phan tu mang : ";
    //cin>>n;
    int a[n]={0,1,2,3,4,5,6,7,8,9};
    //Nhapmang1chieu(a,n);
    cout<<endl<<"Cac phan tu trong mang a truoc khi xoa la: ";
    xuat(a,n);
    cout<<"\nCac phan tu trong mang a sau khi xoa : ";
    chiahetchoba(a,n);
    xuat(a,n);
    return 0;
}
