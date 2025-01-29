//Bài 8: Tính S(n) = 1/2 + 3/4 + 5/6 + … + 2n + 1/ 2n + 2
#include <iostream>
#include <iomanip>

using namespace std;
float Tinhtong(int n);
int main()
{	int n;
	cout<<"Nhap n = ";
	cin>>n;
	float s= Tinhtong(n);
	cout<<"Tong la: "<<fixed<<setprecision(4)<<s;
	return 0;
}
float Tinhtong(int n)
{
	float s=0;
	for(int i=0;i<=n;i++)
		s=s+(float)(2*i+1)/(2*i+2);
	return s;
}
