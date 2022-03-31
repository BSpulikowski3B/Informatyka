#include <iostream>
using namespace std;


int main()
{
	int a, b, nww, il;

	cout << "Podaj dwie liczby: ";
	cin >> a >> b;


	il = a * b;

	while (a != b)
		if (a < b)
			b = b - a;
		else
			a = a - b;


	

	cout << "NWD = " << a << endl;
	nww = il / a;
	cout << "NWW = " << nww << endl;
	return 0;
}
