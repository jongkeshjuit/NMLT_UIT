//Bài 24: Liệt kê tất cả các “ước số lẻ” của số nguyên dương n
#include <iostream>

using namespace std;
int LietKeUocSoLe(int n);
int main()
{
    int n;
    cout << "Nhap n = " ;
    cin>>n;
    int i=LietKeUocSoLe(n);
    return 0;
}
int LietKeUocSoLe(int n)
{
    if(n>0)
    {
        for(int i=1;i<=n;++i)
        {
            if(n%i==0)
            {
                if(i%2==1)
                    cout<<" "<<i;
            }
        }
    }
    else cout<<"Nhap so tu nhien.";
}
