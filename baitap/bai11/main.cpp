//Bài 11: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N
#include <iostream>
using namespace std;
long TinhTongTich(int n);

int main(){
    int n;
    cout<<"Nhap n = ";
    cin>>n;
    long s=TinhTongTich(n);
    cout<<"TinhTongTich: "<<s;
}
long TinhTongTich(int n)
{   long s=0;
    int p=1;
    for(int i=1;i<=n;++i)
    {
        p=p*i;
        s=s+p;
    }
    return s;
}
