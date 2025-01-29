//Bài 54: Hãy đếm số lượng chữ số nhỏ nhất của số nguyên dương n
#include <iostream>
using namespace std;
int SoNhoNhat(int n);
int DemSoNhoNhat(int n);
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
    cout<<"So Nho Nhat la: "<<min<<endl;
    int dem=DemSoNhoNhat(n);
    cout<<"So luong chu so nho nhat la: "<<dem;
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
int DemSoNhoNhat(int n)
{
   int x=n,y;
   int min=9;
   int dem=1;
   if(x == 0)
        dem = 1;
   if(x>0)
   {
       while(x /= 10)
       {
            y = x % 10;
            if(y == min)
                dem++;
            if(y <min)
                min = y;
       }
   }
    return dem;
}

