// Lab_5_3
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double p(const double& x) {
	if (abs(x) >= 1)
		return (pow(cos(x), 2) - sin(x)) / exp(sin(x));

	double sum = 1;
	for (int j = 0; j <= 4; j++)
		sum *= -x / (j + 1.);
	return 1 / cos(x) * sum;
}

void main()
{
	double g, gk, dg, z;
	int n;
	cout.setf(ios::left);
	cout << fixed;

	cout << "gp = "; cin >> g;
	cout << "gk = "; cin >> gk;
	cout << "n = "; cin >> n;
	cout << "Results: " << endl;
	cout << "--------------------------------------------------" << endl; // 50
	cout << "| " << setw(22) << "g" << "| "
		<< setw(22) << "result" << " |"
		<< endl;
	cout << "--------------------------------------------------" << endl; // 50
	
	dg = (gk - g) / n;

	for (; g <= gk; g+= dg)
	{
		z = p(1 - 2 * g) + pow(p(1 - p(1) + pow(p(2 * g), 2)), 2);
		cout << "| " << setw(22) << setprecision(18) << g << "| "
			<< setw(22) << setprecision(18) << z << " |"
			<< endl;
	}
	
	cout << "--------------------------------------------------" << endl;
}
