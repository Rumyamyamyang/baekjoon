#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	double A, B;
	cin >> A >> B;
	
	double divided = A / B;
	
	cout << fixed;
	cout.precision(9);
	cout << divided << endl;

	cin.get();
}