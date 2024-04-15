#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main () {
	setlocale (LC_ALL, "portuguese");
	string palavra;
	cout<<"Digite a palavra que deseja inverter: ";
	getline(cin, palavra);
	cout<<"\n";
	for (int i = palavra.size()-1; i>=0; i--) {
		cout<<palavra[i];
	}
	return 0;
}
