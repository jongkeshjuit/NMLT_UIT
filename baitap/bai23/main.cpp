//Bài 23: Đếm số lượng “ước số” của số nguyên dương n

#include <iostream>

using namespace std;
int DemUoc(int n);
int main()
{
    int n;
    cout << "Nhap n = " ;
    cin>>n;
    int s= DemUoc(n);
}
int DemUoc(int n)
{
    int s=0;
    if(n>0)
    {
         for(int i=1;i<=n;++i)
         {
              if(n%i==0)
                s=s+1;
         }
         cout<<"SoUoc: "<<s;
    }
    else cout<<"Nhap so tu nhien.";
    return s;
}
