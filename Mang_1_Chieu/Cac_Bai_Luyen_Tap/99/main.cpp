//Bai 99: Viết hàm tìm “số chẵn đầu tiên” trong mảng các số nguyên (chandau). Nếu mảng không có giá trị chẵn thì hàm sẽ trả về giá trị không chẵn là -1.

#include <iostream>

using namespace std;

void Nhapmang(int a[] , int &n);
void Xuatmang(int a[] , int n);
int chandau(int a[] , int n);

void Nhapmang(int a[] , int &n)
{
    for(int i = 0; i < n ;i++)
    {
        cin>>a[i];
    }
}
void Xuatmang(int a[] , int n)
{
    for(int i = 0; i < n ;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int chandau(int a[] , int n)
{
    for(int i = 0; i <= n; i++)
    {
        if(a[i] % 2 == 0)
        {
            return a[i];
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Nhap so phan tu cua mang : ";
    cin>>n;
    int a[100];
    Nhapmang(a,n);
    cout<<"Cac phan tu trong mang la : ";
    Xuatmang(a,n);
    cout<<"\nGia tri chan dau tien trong mang la : "<<chandau(a,n);
    return 0;
}
