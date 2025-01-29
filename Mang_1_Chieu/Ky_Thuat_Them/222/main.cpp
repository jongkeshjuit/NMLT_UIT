//Bài 222: Hãy tạo mảng b từ mảng a các giá trị 0, 1 để mảng có tính “tính chẵn lẻ” (taomangchanle).


#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
void Xuat(int a[] , int n);

void Nhapmang1chieu(int a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
void Xuat(int a[] , int n)
{
     for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void taomangchanle(int a[], int n, int b[]) {
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            b[i] = 0;
        } else {
            b[i] = 1;
        }
    }
}

int main()
{
    int n;
    cout<<"Nhap so phan tu mang a : ";
    cin>>n;
    int a[100],b[100];
    Nhapmang1chieu(a,n);
    cout<<endl;
    cout<<"Cac phan tu trong mang a la : ";
    Xuat(a,n);
    cout<<"Cac phan tu trong mang b la : ";
    taomangchanle(a,n,b);
    Xuat(b,n);
    return 0;
}
