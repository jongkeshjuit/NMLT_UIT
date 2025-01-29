//Bài 75: Kiểm tra số nguyên 4 byte có dạng 2^k hay không

#include <iostream>

using namespace std;

int check(int n);
int main()
{
    long max ;
    cout<<"Nhap Max: ";
    cin>>max;
    cout<<"Cac so co dang 2^k trong khoang [0,"<<max<<"]:\n";
    for(int i = 0; i < max; i++)
    {
         if(check(i))
        cout<<i<<"\t";
    }
    return 0;
}
int check(int n)
{
    int flag = 1;
    n = n < 0 ? -n : n;
    if(n < 2)
        return 1;
    while(n > 1)
    {
        int du = n % 2;
        if(du != 0)
            flag = 0;// bao sai
        n /= 2;
    }
    if(flag==1)
      return 1;
    else
      return 0;
}
