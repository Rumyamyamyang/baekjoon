#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int A, B, C, D, E;
	int CheckNumber;

	cin >> A >> B >> C >> D >> E;

	CheckNumber = (A * A + B * B + C * C + D * D + E * E) % 10;	// 모든 자리 수 제곱후 10 modulus

	cout << CheckNumber << endl;



	cin.get();
}