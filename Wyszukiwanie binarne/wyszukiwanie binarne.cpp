#include <iostream>
using namespace std;

int main()
{
	int l = 0;
	int p = 15;
	int sr;
	int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	int s;
	cout << "Krtóra liczbe chcesz znaleść: ";
	cin >> s;

	sr = (l + p) / 2;

	while (l <= p) {
		if (tab[sr] == s) {
			cout << "Liczba " << s << " wystepuje w komorce o indeksie " << sr << endl;
		}
		if (tab[sr] > s) {
			p = sr - 1;
		}
		else {
			l = sr + 1;
		}
		sr = (l + p) / 2;
	}

}