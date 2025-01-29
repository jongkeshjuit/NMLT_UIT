//Bài 30: Cho số nguyên dương n. Kiểm tra xem n có phải là số hoàn thiện hay không
#include <iostream>
using namespace std;
int SoHoanThien(int n);
int main()
{
    int n;
    cout<<"Nhap n = ";
    cin>>n;
    int s=SoHoanThien(n);
}
int SoHoanThien(int n)
{
    int s=0;
    if(n>0)
    {
        for(int i=1;i<n;i++)
        {
             if(n % i == 0)
             {
                 s=s+i;
             }
        }
        if(s==n)
        {
            cout<<"La SoHoanThien ";
        }
        else cout<<"Khong la SoHoanThien ";
    }
    else cout<<"Nhap so tu nhien.";
    return s;
}
