//Bài 43: Hãy đếm số lượng chữ số của số nguyên dương n
#include <iostream>
#include<cmath>
using namespace std;
int Dem(int n);
int main()
{
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    int sochuso=Dem(n);
    cout<<"So chu so cua "<<n<<" la: "<<sochuso;
    return 0;
}
int Dem(int n)
{
    int sochuso,x=n;
    if(n>0)
    {
        while(x!=0)
        {
            sochuso++;
            x/=10;//int sochuso = n == 0 ? 1 : (int)log10((float)n) + 1;
        }
    }
    else cout<<"Nhap lai n.";
    return sochuso;
}
