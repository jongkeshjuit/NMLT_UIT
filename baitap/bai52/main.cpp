//Bài 52: Tìm chữ số nhỏ nhất của số nguyên dương n
#include <iostream>
using namespace std;
int SoNhoNhat(int n);
int main()
{
    int n;
    do
    {
        cout<<"\nNhap n: ";
        cin>>n;
    }
    while(n<0 && cout<<"Nhap lai n." );
    int min=SoNhoNhat(n);
    cout<<"So Nho Nhat la: "<<min;

}
int SoNhoNhat(int n)
{
   int x=n,y;
   int min=n%10;
   int s;
   if(n==0) min =0;
   if(n>0 )
   {
     while(x/=10)
     {
        y = x % 10;
        if(y<min)
            min=y;
     }
   }
    return min;
}
