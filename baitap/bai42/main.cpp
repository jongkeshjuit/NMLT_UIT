//Bài 42: Cho n là số nguyên dương. Hãy tìm giá trị nguyên dương k lớn nhất sao cho S(k)  < n. Trong đó chuỗi k được định nghĩa như sau: S(k) = 1 + 2 + 3 + … + k
#include <iostream>
#include<cmath>
using namespace std;
float TinhTong(int n);
int main()
{
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    float s=TinhTong(n);
    cout<<"Tong la: "<<s;
    return 0;
}
float TinhTong(int n)
{
    float s=0;
    if(n>0)
    {
        for(int i=0;i<=n;++i)
        {
            if((s+i)<n)
                s+=i;
        }
    }
    else cout<<"Nhap lai n.";
    return s;
}
