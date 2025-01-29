//Bài 251: Tính tổng từng mảng con tăng (tongcontang) trong mảng một chiều các số thực

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(float a[] , int &n);
void lietkecontang(float a[], int n);
void xuat(float a[] , int n);

void Nhapmang1chieu(float a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
void xuat(float a[] , int n)
{
    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void lietkecontang(float a[], int n)
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
int tongcontang(float a[], int n)
{
    double sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            double temp_sum = a[i];
            while (a[i] < a[i + 1] && i < n - 1)
            {
                temp_sum += a[i + 1];
                i++;
            }
            sum += temp_sum;
        }
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    float a[n];
    Nhapmang1chieu(a,n);
    cout<<endl<<"Cac phan tu trong mang a la: ";
    xuat(a,n);
    cout<<"\nCac phan tu trong mang con tang dan cua a la : \n";
    lietkecontang(a,n);
    cout<<"\nTong tung mang con cua a la : "<<tongcontang(a,n);
    return 0;
}
