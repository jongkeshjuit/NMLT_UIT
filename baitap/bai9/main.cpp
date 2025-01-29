//Bài 9: Tính T(n) = 1 x 2 x 3…x N
#include <iostream>
#include <iomanip>

using namespace std;
long TinhTich(int n);
int main()
{	int n;
	cout<<"Nhap n = ";
	cin>>n;
	long s= TinhTich(n);
	cout<<"Giai thua la: "<<fixed<<setprecision(4)<<s;
	return 0;
}
long TinhTich(int n)
{
	long s=1;
	for(int i=1;i<=n;i++)
		s=(long)s*i;
	return s;
}
