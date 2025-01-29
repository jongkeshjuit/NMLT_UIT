//Bài 31: Cho số nguyên dương n. Kiểm tra xem n có phải là số nguyên tố hay không

#include <iostream>
using namespace std;
int ktnt(int n);
int main()
{
    int n;
    cout<<"Nhap n = ";
    cin>>n;
    ktnt(n);
    return 0;
}
int ktnt(int n)
{
    int dem =0;
    if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
                dem++;
        }
        if(dem==2)
            cout<<n<<" la so nguyen to";
        else cout<<n<<" khong la so nguyen to";
    }
    else cout<<"Nhap lai so tu nhien";
}
