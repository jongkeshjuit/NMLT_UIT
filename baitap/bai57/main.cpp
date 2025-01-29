//Bài 57: Hãy kiểm tra số nguyên dương n có toàn chữ số chẵn hay không
#include <iostream>
using namespace std;
int KiemTraToanChan(int n);
int main()
{
    int n;
    do
    {
        cout<<"\nNhap n: ";
        cin>>n;
    }while(n<0 && cout<<"Nhap lai n." );
    int check=KiemTraToanChan(n);
}
int KiemTraToanChan(int n)
{
        bool check;
        while(n=n/10)
        {
            if((n%10)%2==0)
                check=true;
            else
                check=false;
        }
        if(check==true) cout<<"Dung!!!";
        if(check==false) cout<<"Sai!!";
        return check;
}
