//Bài 25: Tính tổng tất cả các “ước số chẵn” của số nguyên dương n
#include <iostream>

using namespace std;
int TongUocChan(int n);
int main()
{
    int n;
    cout << "Nhap n = " ;
    cin>>n;
    int s=TongUocChan(n);
    cout<<"TongUocChan: "<<s;
    return 0;
}
int TongUocChan(int n)
{
    int s=0;
    if(n>0)
    {
          for(int i=1;i<=n;++i)
          {
              if(n%i==0)
              {
                  if(i%2==0)
                  {
                      s=s+i;
                  }
              }
          }
    }
    else cout<<"Nhap so tu nhien.";
    return s;
}
