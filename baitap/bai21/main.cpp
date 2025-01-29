//Bài 21: Tính tổng tất cả các “ ước số” của số nguyên dương n

#include <iostream>

using namespace std;
int TongUoc(int n);
int main()
{
    int n;
    cout << "Nhap n = " ;
    cin>>n;
    int s= TongUoc(n);
}
int TongUoc(int n)
{
    int s=0;
    if(n>0){
        for(int i=1;i<=n;i++)
        {   if(n%i==0)
                s=s+i;
        }
        cout<<"TongUoc: "<<s;
    }
    else cout<<"Nhap so tu nhien.";
    return s;
}
