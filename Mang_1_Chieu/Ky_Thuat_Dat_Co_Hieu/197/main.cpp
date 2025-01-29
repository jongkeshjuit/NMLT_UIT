//Bài 197: Hãy kiểm tra mảng số nguyên có tồn tại số nguyên tố hay không? Nếu có trả về 1, nếu không trả về 0 (tontainguyento).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
int KiemTraNguyenTo( int b );
int tontainguyento(int a[] , int n);

void Nhapmang1chieu(int a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
int KiemTraNguyenTo( int b )
{
    int count = 0;
    if(b<2) return 0;
    else if(b>2)
    {
        for(int i = 1; i <= b; i++)
        {
            if(b%i==0)
                count ++;
        }
        if(count!=2) return 0;
        else return 1;
    }
}
int tontainguyento(int a[] , int n)
{
    bool flag  = false;
    for(int i =0 ; i < n ; i++)
    {
        if(KiemTraNguyenTo(a[i]) == 1)
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
    cout<<endl<<"Ton tai nguyen to trong mang la: "<<tontainguyento(a,n);
    return 0;
}
