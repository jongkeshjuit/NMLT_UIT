//Bài 63: Cho 2 số nguyên dương a và b. Hãy tìm bội chung nhỏ nhất của 2 số này
#include <iostream>
using namespace std;
int BCNN(int a, int b);
int main()
{
    int a;
    int b;
    do
    {

        cout<<"\nNhap a: ";
        cin>>a;
    }while(a<0 && cout<<"Nhap lai a." );
    do
    {
        cout<<"\nNhap b: ";
        cin>>b;
    }while(b<0 && cout<<"Nhap lai b." );
    BCNN(a,b);
}
int BCNN(int a, int b)
{
    int Max = a > b ? a : b;
    int Min = a < b ? a : b;
    if(a == b)
        cout<<"\nBoi Chung Nho Nhat la: "<<a;
    else
    {
        for(int i = Max; i < a * b; ++i)
            {
                if(i % a == 0 && i % b == 0)
                {
                    cout<<"\nBoi Chung Nho Nhat la: "<<i;
                    break;
                }
            }
    }
}
