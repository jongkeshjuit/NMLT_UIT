//Bài 235: Hãy đưa các số chẵn trong mảng về đầu mảng, số lẻ về cuối mảng và các phần tử 0 năm ở giữa (chandaulecuoi).

#include <iostream>
#include <cmath>
using namespace std;

void Nhapmang1chieu(int a[] , int &n);
void xuat(int a[], int n);
void DuaChanVeDau(int a[], int ViTriDoi);
void Dua0VaoGiua(int a[], int ViTriDoi, int ViTriChanCuoi);
void chandaulecuoi(int a[], int n);

void Nhapmang1chieu(int a[] , int &n)
{
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
}
void xuat(int a[], int n)
{
     for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
void DuaChanVeDau(int a[], int ViTriDoi)
{
    int temp = a[ViTriDoi];
    for(int i = ViTriDoi; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = temp;
}

void Dua0VaoGiua(int a[], int ViTriDoi, int ViTriChanCuoi)
{
    for(int i = ViTriDoi; i > ViTriChanCuoi; i--)
    {
        a[i] = a[i - 1];
    }
    a[ViTriChanCuoi] = 0;
}

void chandaulecuoi(int a[], int n)
{
    int i, dem;
    int ViTriChanCuoi = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0 && a[i] != 0)
        {
            DuaChanVeDau(a, i);
        }
    }
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
        {
            ViTriChanCuoi = i;
            break;
        }
    }
    for(i; i < n; i++)
    {
        if(a[i] == 0)
        {
            Dua0VaoGiua(a, i, ViTriChanCuoi);
        }
    }
}
int main()
{
    int n=10,k;
    //cout<<"Nhap so phan tu mang : ";
    //cin>>n;
    int a[n]={0,1,2,3,4,5,6,7,8,9};
    //Nhapmang1chieu(a,n);
    cout<<endl<<"Cac phan tu trong mang a truoc khi xoa la: ";
    xuat(a,n);
    cout<<"\nCac phan tu trong mang a sau khi xoa : ";
    chandaulecuoi(a,n);
    xuat(a,n);
    return 0;
}
