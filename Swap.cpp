#include <iostream.h>
using namespace std;

int main()//main function
{
	int a, b;
	cout<<"Enter two numbers : ";//accepting values
	cin>>a>>b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout<<"Now the first number is "<<a<<" and second number is "<<b<<" .\n";
}
