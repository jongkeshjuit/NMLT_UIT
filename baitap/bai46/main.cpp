//Bài 46: Hãy đếm số lượng chữ số lẻ của số nguyên dương n
#include <iostream>
using namespace std;
int DemLe(int n);
int main()
{
    int n;
    do
    {
        cout<<"\nNhap n: ";
        cin>>n;
    }
    while(n<0 && cout<<"Nhap lai n." );
    int s=DemLe(n);
    cout<<"So so le la: "<<s;
    return 0;
}
int DemLe(int n)
{
    int dem;
    int x=n;
    if(n>0)
    {
        while(x!=0)
        {
            if(x%2==1)
                dem++;
            x/=10;
        }
    }
    else cout<<"Nhap lai n.";
    return dem;
}
