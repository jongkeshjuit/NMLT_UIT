//Bài 27: Đếm số lượng “ước số chẵn” của số nguyên dương n
#include <iostream>

using namespace std;
int DemUocChan(int n);
int main()
{
    int n;
    cout << "Nhap n = " ;
    cin>>n;
    int s= DemUocChan(n);
}
int DemUocChan(int n)
{
    int s=0;
    if(n>0)
    {
        for(int i=1;i<=n;++i)
        {
            if(n%i==0)
            {
                if(i%2==0)
                     s=s+1;
            }
        }
        cout<<"--->DemUocChan: "<<s;
    }
    else cout<<"Nhap so tu nhien.";
    return s;
}
