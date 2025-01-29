//Bài 29: Tìm ước số lẻ lớn nhất của số nguyên dương n. Ví dụ n = 100 ước lẻ lớn nhất là 25
#include <iostream>

using namespace std;
int UocLeMax(int n);
int main()
{
    int n;
    cout << "Nhap n = " ;
    cin>>n;
    int Max=UocLeMax(n);
}
int UocLeMax(int n)
{   int Max=1;
    if(n>0)
    {
        for(int i=1;i<=n;++i)
        {
            if(n%i==0 && i%2==1)
            {
                if(i>Max)
                {
                    Max=i;
                }
            }
        }
        cout<<"UocLeMax: "<<Max;

    }
    else cout<<"Nhap so tu nhien.";
    return Max;
}
