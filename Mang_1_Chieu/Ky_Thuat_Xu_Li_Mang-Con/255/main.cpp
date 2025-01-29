//Bài 255: Cho hai mảng a và b. Hãy cho biết mảng a có phải là mảng con trong mảng b hay không? (kiemtracon).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmanga(float a[] , int &n);
void Xuatmanga(float a[] , int n);
void Nhapmangb(float b[] , int &m);
void Xuatmangb(float b[] , int m);
bool kiemtracon(float a[], float b[], int n, int m);

void Nhapmanga(float a[] , int &n)
{
    for(int i = 0; i < n; i++ )
        cin>>a[i];
}
void Xuatmanga(float a[] , int n)
{
     for(int i = 0; i < n; i++ )
        cout<<a[i]<<" ";
}
void Nhapmangb(float b[] , int &m)
{
     for(int i = 0; i < m; i++ )
        cin>>b[i];
}
void Xuatmangb(float b[] , int m)
{
     for(int i = 0; i < m; i++ )
        cout<<b[i]<<" ";
}
bool kiemtracon(float a[], float b[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            i++;
            j++;
            if (j == m)
            {
                return true;
            }
        }
        else
        {
            i++;
            j = 0;
        }
    }
    return false;
}
int main()
{
    int n;
    cout<<"Nhap so phan tu mang a : ";
    cin>>n;
    float a[n];
    Nhapmanga(a,n);
    int m;
    cout<<"Nhap so phan tu mang b : ";
    cin>>m;
    float b[m];
    Nhapmangb(b,m);
    cout<<"Phan tu mang a la : ";
    Xuatmanga(a,n);
    cout<<"\nPhan tu mang b la : ";
    Xuatmangb(b,m);
    if (kiemtracon(a, b, n, m)==1)
    {
        cout << "\n--->Mang a la con cua mang b" << endl;
    }
    else
    {
        cout << "\n--->Mang a khong la con cua mang b" << endl;
    }
    return 0;
}
