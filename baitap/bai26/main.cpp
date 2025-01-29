//Bài 26: Tính tích tất cả các “ước số lẻ” của số nguyên dương n

#include <iostream>

using namespace std;
int TichUocLe(int n);
int main()
{
    int n;
    cout << "Nhap n = " ;
    cin>>n;
    int s=TichUocLe(n);
    return 0;
}
int TichUocLe(int n)
{
    int s=1;
    if(n>0)
    {
           for(int i=1;i<=n;++i)
           {
                if(n%i==0)
                {
                     if(i%2==1)
                        s=s*i;
                }
           }
            cout<<"TichUocLe: "<<s;
    }
    else cout<<"Nhap so tu nhien.";
    return s;
}
