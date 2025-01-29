
//Bài 4: Tính S(n) = ½ + ¼ + … + 1/2n
#include <iostream>
using namespace std;
float Tinhtong(int n);
int main(){
	int n;
	cout<<"nhap n";
	cin>>n;
	float s= Tinhtong(n);
	cout<<s;

	return 0;
}
float Tinhtong(int n){
	float s=0;
	for(int i=1;i<=n;i++)
		s=s+1.0/(2*i);
		return s;
}
