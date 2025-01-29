//Bài 14: Tính S(n) = x + x^3 + x^5 + … + x^2n + 1
#include <iostream>
using namespace std;
float TinhTongLuyThuaLe(float x, int n);

int main(){
    float x;
    int n;
    cout<<"Nhap x = ";
    cin>>x;
    cout<<"Nhap n = ";
    cin>>n;
    float t=TinhTongLuyThuaLe(x,n);
    cout<<"TinhTongLuyThuaLe: "<<t;
}
float TinhTongLuyThuaLe(float x, int n)
{
    float s=1;
    float p=1;
    float t;
    for(int i=1;i<=n-1;++i)
    {
        p=p*x*x;
        s=s+p;
        t=s*x;
    }
    return t;
}
