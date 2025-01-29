//Bài 249: Liệt kê các dãy con tăng trong mảng (lietkecontang).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
void lietkecontang(int a[], int n);
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
void lietkecontang(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        int j = i;
        while (j < n - 1 && a[j] < a[j + 1]) {
            j++;
        }
        if (j > i) {
            for (int k = i; k <= j; k++) {
                cout << a[k] << " ";
            }
            cout << endl;
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
    cout<<"\nCac phan tu trong mang con tang dan cua a la : \n";
    lietkecontang(a,n);
    return 0;
}
