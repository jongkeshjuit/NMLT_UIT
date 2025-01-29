//Bài 16: Tính S(n) = x + x^2/1 + 2 + x^3/1 + 2 + 3 + … + x^n/1 + 2 + 3 + …. + N
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
    float s=0;
    float t=1;
    float m=0;
    for(int i=1; i<=n; ++i)
    {
        t=t*x;
        m=m+i;
        s=s+t/m;
    }
    return s;
}
