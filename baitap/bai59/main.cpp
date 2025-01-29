//Bài 59: Hãy kiểm tra số nguyên dương n có phải là số đối xứng hay không
#include <iostream>
using namespace std;
int KiemTraDoiXung(int n);
int main()
{
    int n;
    do
    {
        cout<<"\nNhap n: ";
        cin>>n;
    }while(n<0 && cout<<"Nhap lai n." );
    int check=KiemTraDoiXung(n);
}
int KiemTraDoiXung(int n)
{
    int m=n;
    int s=0;
    int du;
        while(n!=0)
        {
            du=n%10;
            s=s*10+du;
            n=n/10;
        }
        if(m==s) cout<<"Dung!!!";
        else cout<<"Sai!!";
}
