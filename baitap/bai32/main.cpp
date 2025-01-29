//Bài 32: Cho số nguyên dương n. Kiểm tra xem n có phải là số chính phương hay không
#include <iostream>
#include <cmath>
using namespace std;
int  ktcp(int n);
int main()
{
    int n;
    cout<<"Nhap n = ";
    cin>>n;
    ktcp(n);
    return 0;
}
int ktcp(int n)
{
    if(n>0)
    {
        if(sqrt((float) n) == (int)sqrt((float)n))
            cout<<n<<" la so chinh phuong";
        else cout<<n<<" khong la so chinh phuong";
    }
    else cout<<"Nhap lai so tu nhien";
}
