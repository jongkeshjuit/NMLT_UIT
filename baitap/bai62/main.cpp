//Bài 62: Cho 2 số nguyên dương a và b. Hãy tìm ước chung lớn nhất của 2 số này.
#include <iostream>
using namespace std;
int UCLNC1(int a, int b);
int UCLNC2(int a, int b);
int UCLNC3(int a, int b);
int main()
{
    int a;
    int b;
    do
    {

        cout<<"\nNhap a: ";
        cin>>a;
    }while(a<0 && cout<<"Nhap lai a." );
    do
    {
        cout<<"\nNhap b: ";
        cin>>b;
    }while(b<0 && cout<<"Nhap lai b." );
    UCLNC1(a,b);
    UCLNC2(a,b);
    UCLNC3(a,b);
}
int UCLNC1(int a, int b)
{
    //C1:Tu Min, bien lui ve 1, so sanh so du
    int Max = a > b ? a : b;
    int Min = a < b ? a : b;

    for(int i = Min; i >= 1; i--)  // ước chung lớn nhất luôn là ước của min
    {
        if(Max % i == 0 && Min % i == 0)
        {
            cout<<"\nUoc Chung Lon Nhat Cach 1 la: "<<i;
            break;
        }
    }
}
int UCLNC2(int a, int b)
{
    //C2:So sanh hai so, khoang dung, nhu cach 1
    int Max = a > b ? a : b;
    int Min = a < b ? a : b;
     if (Max % Min == 0)
    {
        cout<<"\nUoc Chung Lon Nhat Cach 2 la: "<<Min;
    }
    else
    {
        for (int i = Min / 2; i >= 1; i--)
        {
            if (Min % i == 0 && Max % i == 0)
            {
                cout<<"\nUoc Chung Lon Nhat Cach 2 la: "<<i;
                break;
            }
        }
    }
}
int UCLNC3(int a, int b)
{
    //C3: dung dinh li...
    while(a != b)
    {
        if(a > b)
            a = a - b;
        else
            b = b - a;
    }
    cout<<"\nUoc Chung Lon Nhat Cach 3 la: "<<a; // hay in ra b cũng được vì  lúc này a == b
    return 0;
}
