//Bài 20: Liệt kê tất cả các “ước số” của số nguyên dương n
#include <iostream>

using namespace std;
int LietKeUocSo(int n);
int main()
{
    int n;
    cout << "Nhap n = " ;
    cin>>n;
    if(n<=0) cout<<"Nhap so tu nhien.";
    int i= LietKeUocSo(n);
}
int LietKeUocSo(int n)
{
    for(int i=1;i<=n;++i)
    {
        if(n%i==0) cout<<" "<<i<<" " ;
    }
}
