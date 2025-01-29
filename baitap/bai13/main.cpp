//Bài 13: Tính S(n) = x^2 + x^4 + … + x^2n
#include <iostream>
using namespace std;
float TinhTongLuyThuaChan(float x, int n);

int main(){
    float x;
    int n;
    cout<<"Nhap x = ";
    cin>>x;
    cout<<"Nhap n = ";
    cin>>n;
    float s=TinhTongLuyThuaChan(x,n);
    cout<<"TinhTongLuyThuaChan: "<<s;
}
float TinhTongLuyThuaChan(float x, int n)
{
    float s=0;
    float p=1;
    for(int i=1;i<=n;++i)
    {
        p=p*x*x;
        s=s+p;
    }
    return s;
}
