#include<iostream>
#include<string>

using namespace std;

int main() {
	string tab;
	getline(cin, tab);
	int klucz;
	cin >> klucz;

	while (klucz < 0 || klucz>26) {
		if (klucz < 0) klucz += 26;
		if (klucz > 26) klucz -= 26;	
	}

	for (int i = 0; i < tab.length(); i++) {
		if (tab[i] != ' ') {
			tab[i] += klucz;
		}
	}
	cout << tab;
}
