//Bài 238: Hãy đảo ngược thứ tự các số chẵn có trong mảng (daochan).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
void xuat(int a[], int n);
void DoiCho(int a[], int n, int ViTriDoi);
void daochan(int a[], int n);

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
void HoanVi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void daochan(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] % 2 == 0 && a[i] % 2 == 0)
            {
                HoanVi(a[i], a[j]);
            }
        }
    }
}
int main()
{
    int n=6,k;
    //cout<<"Nhap so phan tu mang : ";
    //cin>>n;
    int a[n]={0,2,4,6,8,10};
    //Nhapmang1chieu(a,n);
    cout<<endl<<"Cac phan tu trong mang a truoc khi xoa la: ";
    xuat(a,n);
    cout<<"\nCac phan tu trong mang a sau khi xoa : ";
    daochan(a,n);
    xuat(a,n);
    return 0;
}
