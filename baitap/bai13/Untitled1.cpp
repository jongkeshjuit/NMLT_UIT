#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n>0)
	{
		int s=0;
		for(int i=1;i<n;++i)
		{
			if(n%i==0 && (float)sqrt(i)==(int)sqrt(i))
			{
				s=s+i;	
			}	
		}
		cout<<s;
	}
	return 0;
}
