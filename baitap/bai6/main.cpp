//Bài 6: Tính S(n) = 1/1×2 + 1/2×3 +…+ 1/n x (n + 1)
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
	for(int i=1;i<=n;i++)
		s=s+1.0/(i*(i+1));
	return s;
}
