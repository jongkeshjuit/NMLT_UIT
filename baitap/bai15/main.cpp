//Bài 15: Tính S(n) = 1 + 1/1 + 2 + 1/ 1 + 2 + 3 + ….. + 1/ 1 + 2 + 3 + …. + N
#include <iostream>
using namespace std;
float TinhThuong(int n);

int main(){
    int n;
    cout<<"Nhap n = ";
    cin>>n;
    float s=TinhThuong(n);
    cout<<"TinhThuong: "<<s;
}
float TinhThuong(int n)
{   float s=0;
    int p=0;
    for(int i=1;i<=n;++i)
    {
        p=p+i;
        s=s+1.0/p;
    }
    return s;
}
