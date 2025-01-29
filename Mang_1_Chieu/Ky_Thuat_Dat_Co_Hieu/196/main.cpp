//Bài 196: Hãy kiểm tra mảng số nguyên có tồn tại giá trị chẵn hay không?
//         Nếu không tồn tại giá trị chẵn trả về giá trị 0, hay ngược lại trả về 1(tontaichan).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
int tontaichan(int a[] , int n);

void Nhapmang1chieu(int a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
int tontaichan(int a[] , int n)
{
    bool flag  = false;
    for(int i =0 ; i < n ; i++)
    {
        if(a[i]%2==0)
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
    cout<<endl<<"Ton tai nguyen to chan trong mang la: "<<tontaichan(a,n);
    return 0;
}
