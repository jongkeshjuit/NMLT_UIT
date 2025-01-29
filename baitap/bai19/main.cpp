//Bài 19: Tính S(n) = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)!=x* (1/x+1+x^2/3!+...+x^2/(2n+1)!)
#include <iostream>
#include <cmath>
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
    float S;
    for(int i=1; i<=n; ++i)
    {
        t=pow(x, (2 * i + 1));
        p=i*2+1;
        m=m*p*(p-1);
        s=s+x+t/m;
    }
    return s;
}
