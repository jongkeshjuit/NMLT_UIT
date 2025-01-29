//Bài 179: Hãy đếm số lượng các giá trị lớn nhất có trong mảng một chiều các số thực (demlonnhat).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(float a[] , int &n);
float demlonnhat(float a[] , int n);

void Nhapmang1chieu(float a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
float demlonnhat(float a[] , int n)
{
    float count = 0;
    float max = a[0];
    for(int i = 0; i < n; i++)
    {
        if(max == a[i])
        {
            count++;
        }
        else if(a[i] > max)
        {
            max = a[i];
            count = 1;
        }
    }
    return count;
}
int main()
{
    int n;
    cout<<"Nhap so phan tu mang : ";
    cin>>n;
    float a[100];
    Nhapmang1chieu(a,n);
    cout<<endl<<"Dem cac so lon nhat giong nhau trong mang la: "<<demlonnhat(a,n);
    return 0;
}
