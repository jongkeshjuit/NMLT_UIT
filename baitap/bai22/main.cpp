//Bài 22:Tính tích tất cả các “ước số” của số nguyên dương n

#include <iostream>

using namespace std;
int TichUoc(int n);
int main()
{
    int n;
    cout << " Nhap n = " ;
    cin>>n;
    int p= TichUoc(n);
}
int TichUoc(int n)
{
    int p=1;
     if(n>0)
     {
         for(int i=1;i<=n;++i)
         {
             if(n%i==0)
             {
                 p=p*i;
             }
         }
         cout<<" TichUoc: "<<p;
     }
     else cout<<"Nhap so tu nhien.";
    return p;
}
