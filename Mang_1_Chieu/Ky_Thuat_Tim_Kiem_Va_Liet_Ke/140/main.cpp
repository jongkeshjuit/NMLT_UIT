//Bài 140: Hãy liệt kê các vị trí mà giá trị tại đó là số nguyên tố trong mảng một chiều các số nguyên (lkvitringuyento).

#include <iostream>

using namespace std;

void Nhapmang1chieu(float a[] , int &n);
bool KiemTraNguyenTo( int b );
void lkvitringuyento(float a[] , int n );
void Nhapmang1chieu(float a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
bool KiemTraNguyenTo( int b )
{
    int count = 0;
    if(b<2) return false;
    else if(b>2)
    {
        for(int i = 1; i < b; i++)
        {
            if(b%i==0)
                count ++;
        }
        if(count!=2) return false;
        else return true;
    }
}
void lkvitringuyento(float a[] , int n )
{
    int flag = 0;
    for(int i = 0; i < n; i++)
    {
        if(KiemTraNguyenTo(a[i]) == true)
        {
            flag = 1;
            cout<<i<<" ";
        }
    }
    if(flag == 0)
    {
        cout<<"\nKhong co so nguyen to";
    }
}
int main()
{
    int n;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    float a[100];
    Nhapmang1chieu(a,n);
    cout<<endl<<"Cac so nguyen to trong mang la: ";
    lkvitringuyento(a,n);
    return 0;
}
