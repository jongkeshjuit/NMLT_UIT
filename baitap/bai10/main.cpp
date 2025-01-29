//Bài 10: Tính T(x, n) = x^n
#include <iostream>
using namespace std;
float TinhLuyThua(float x, int n);
int main(){
    float x,a;
    int n;
    cout<<"Nhap x= ";
    cin>>x;
    cout<<"Nhap n = ";
    cin>>n;
    float s=TinhLuyThua(x,n);
    cout<<"TinhLuyThua x^n: "<<s;
}
float TinhLuyThua(float x, int n){
    float s=1;
    for(int i=1;i<=n;++i)
        s=s*x;
    return s;
}
