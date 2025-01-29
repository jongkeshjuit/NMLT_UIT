//Bài 12: Tính S(n) = x + x^2 + x^3 + … + x^n
#include <iostream>
using namespace std;
float TinhTongLuyThua(float x, int n);

int main(){
    float x;
    int n;
    cout<<"Nhap x = ";
    cin>>x;
    cout<<"Nhap n = ";
    cin>>n;
    float s=TinhTongLuyThua(x,n);
    cout<<"TinhTongLuyThua_tangdan: "<<s;
}
float TinhTongLuyThua(float x, int n)
{
    float s=0;
    float p=1;
    for(int i=1;i<=n;++i)
    {
        p=p*x;
        s=s+p;
    }
    return s;
}
