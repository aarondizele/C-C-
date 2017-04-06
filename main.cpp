#include <iostream>
#include <cstdio>
using namespace std;

int Factorial(int n)
{
	cout<<"I'm computing F("<<n<<")\n";
	if(n==0){
		return 1;
	}

	int F = n*Factorial(n-1);
	cout<<"Done! F("<<n<<") = "<<F<<"\n";
	return F;
}

int main(){
	
	int n;
	cout<<"Give me an n: ";cin>>n;
	
	int result = Factorial(n);
	cout<<result;
}
