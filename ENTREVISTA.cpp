#include <iostream>
#include <locale>

using namespace std;

int main () {
	setlocale (LC_ALL, "portuguese");
	int indice, soma, k;
	
	indice = 13;
	soma = 0;
	k = 0;
	
	 do {
		k = k+1;
		soma = soma + k;
	} 	while (k < indice);
	
	cout << soma;
	
	return 0;
}
