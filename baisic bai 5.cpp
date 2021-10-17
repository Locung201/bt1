#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, y;
	cout << "Enter a numer: ";
	cin >> x;
	y= pow(x,3) - 5*pow(x,2) + 6;
	cout << "y= " << y;
	
	return 0; 
}
