//Bài 53: Hãy đếm số lượng chữ số lớn nhất của số nguyên dương n
#include <iostream>
using namespace std;
int SoLonNhat(int n);
int DemSoLonNhat(int n);
int main()
{
    int n;
    do
    {
        cout<<"\nNhap n: ";
        cin>>n;
    }
    while(n<0 && cout<<"Nhap lai n." );
    int s=SoLonNhat(n);
        cout<<"So Lon Nhat la: "<<s<<endl;
    int dem=DemSoLonNhat(n);
        cout<<"So luong chu so lon nhat la: "<<dem;
}
int SoLonNhat(int n)
{
    int Max=0,s;
    int x=n;
    if(n>=0)
    {
        while(x/=10)
        {
            s=n%10;
            if(s>Max)
                Max=s;
        }
    }
    else cout<<"Nhap lai n.\n";
    return s;
}
int DemSoLonNhat(int n)
{
   int x=n,y;
   int max=0;
   int dem=1;
   if(x == 0)
        dem = 1;
   if(x>0)
   {
       while(x /= 10)
       {
            y = x % 10;
            if(y > max)
                max = y;
            if(y == max)
                dem++;
       }
   }
    return dem;
}
