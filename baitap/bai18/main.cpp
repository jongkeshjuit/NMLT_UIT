//Bài 18: Tính S(n) = 1 + x^2/2! + x^4/4! + … + x^2n/(2n)!
#include <iostream>
using namespace std;
float TinhTong(float x, int n);
int main()
{
    float x;
    cout<<"Nhap x = ";
    cin>>x;
    int n;
    cout<<"Nhap n = ";
    cin>>n;
    float s=TinhTong( x, n);
    cout<<"Tinhtong: "<<s;
    return 0;
}
float TinhTong(float x, int n)
{
    float s=1;
    float t=1;
    float p=1;
    float m=1;
    for(int i=1; i<=n; ++i)
    {
        t=t*x*x;
        p=i*2;
        m=m*p*(p-1);
        s=s+t/m;
    }
    return s;
}
