//Bài 248: Liệt kê tất cả các mảng con có độ dài lớn hơn 2 trong mảng một chiều các số nguyên (conlonhonhai).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
void conlonhonhai(int a[], int n);
void xuat(int a[] , int n);

void Nhapmang1chieu(int a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
void xuat(int a[] , int n)
{
    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void conlonhonhai(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (j - i + 1 > 2) {
                for (int k = i; k <= j; k++)
                {
                    cout << a[k] << " ";
                }
                cout << endl;
            }
        }
    }
}
int main()
{
    int n,k;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    int a[n];
    Nhapmang1chieu(a,n);
    cout<<endl<<"Cac phan tu trong mang a la: ";
    xuat(a,n);
    cout<<"\nCac phan tu trong mang con lon hon 2 cua a la : \n";
    conlonhonhai(a,n);
    return 0;
}
