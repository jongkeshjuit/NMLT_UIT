//Bài 194: Hãy kiểm tra mảng số nguyên có tồn tại giá trị không hay không?
//         Nếu không tồn tại giá trị không trả về giá trị 0, ngược lại trả về 1 (tontaikhong).


#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
int tontaikhong(int a[] , int n);

void Nhapmang1chieu(int a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
int tontaikhong(int a[] , int n)
{
    bool flag  = false;
    for(int i =0 ; i < n ; i++)
    {
        if(a[i] == 0)
        {
            flag = true;
            return flag;
        }
    }
    return flag;
}

int main()
{
    int n;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    int a[100];
    Nhapmang1chieu(a,n);
    cout<<endl<<"Ton tai khong trong mang la: "<<tontaikhong(a,n);
    return 0;
}
