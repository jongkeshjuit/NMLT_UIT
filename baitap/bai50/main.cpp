//Bài 50: Hãy tìm số đảo ngược của số nguyên dương n
#include <iostream>
using namespace std;
int SoNghichDao(int n);
int main()
{
    int n;
    do
    {
        cout<<"\nNhap n: ";
        cin>>n;
    }
    while(n<0 && cout<<"Nhap lai n." );
    int songhichdao=SoNghichDao(n);
    cout<<"So Nghich Dao la: "<<songhichdao;
    return 0;
}
int SoNghichDao(int n)
{
    int songhichdao=0;
    int x=n;
    if(n>0)
    {
        while(x!=0)
        {
            songhichdao=songhichdao*10+x%10;
            x/=10;
        }
    }
    else cout<<"Nhap lai n.\n";
    return songhichdao;
}
