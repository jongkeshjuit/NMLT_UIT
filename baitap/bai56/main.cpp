//Bài 56: Hãy kiểm tra số nguyên dương n có toàn chữ số lẻ hay không
#include <iostream>
using namespace std;
int KiemTraToanLe(int n);
int main()
{
    int n;
    do
    {
        cout<<"\nNhap n: ";
        cin>>n;
    }while(n<0 && cout<<"Nhap lai n." );
    int check=KiemTraToanLe(n);
}
int KiemTraToanLe(int n)
{
        bool check;
        while(n=n/10)
        {
            if((n%10)%2==1)
                check=true;
            else
                check=false;
        }
        if(check==true) cout<<"Dung!!!";
        if(check==false) cout<<"Sai!!";
        return check;
}
