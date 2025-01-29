//Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2
#include <iostream>

using namespace std;
int Tinhtong(int n);
int main()
{	int n;
	cout<<"Nhap n = ";
	cin>>n;
	int s= Tinhtong(n);
	cout<<"Tong la: "<<s;
	return 0;
}
int Tinhtong(int n)
{
	int s=0;
	for(int i=1;i<=n;i++)
		s=s+i*i;
	return s;
}
