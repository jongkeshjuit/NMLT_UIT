//Bài 28: Cho số nguyên dương n. Tính tổng các ước số nhỏ hơn chính nó
#include <iostream>

using namespace std;
int TongCacUoc(int n);
int main()
{
    int n;
    cout << "Nhap n = " ;
    cin>>n;
    int s= TongCacUoc(n);
}
int TongCacUoc(int n)
{
    int s=0;
    if(n>0)
    {
         for(int i=1;i<=n-1;++i)
         {
              if(n%i==0)
                 s=s+i;
         }
          cout<<"--->TongCacUoc: "<<s;
    }
    else cout<<"Nhap so tu nhien.";
    return s;
}
