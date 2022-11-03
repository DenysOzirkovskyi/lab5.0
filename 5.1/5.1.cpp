// 5.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
double g(const double x, const double y); // прототип
int main()
{
	double t, s;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double c = (g(1, s) + (1 + g(t, 1) * g(t, 1)) * (1 + g(t, 1) * g(t, 1)) / (1 + g(s + t, 1 * g(s + t, 1) * g(s + t, 1))));
	cout << "c = " << c << endl;
	return 0;
}
double g(const double x, const double y) // визначення
{
	return (x * x + x * y + y * y);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
