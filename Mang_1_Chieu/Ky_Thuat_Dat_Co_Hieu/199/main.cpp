//Bài 199: Hãy cho biết mảng các số nguyên có toàn số chẵn hay không?
//         Nếu có tồn tại giá trị lẻ trả về giá trị 0, ngược lại trả về 1 (kttoanchan).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
int kttoanchan(int a[] , int n);

void Nhapmang1chieu(int a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
int kttoanchan(int a[] , int n)
{
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    int a[100];
    Nhapmang1chieu(a,n);
    cout<<endl<<"Kiem tra toan chan trong mang la: "<<kttoanchan(a,n);
    return 0;
}
