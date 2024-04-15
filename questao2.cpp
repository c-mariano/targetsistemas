#include <iostream>
#include <locale>

using namespace std;

void fibonacci (int termos) {
	int n, n0 = 0, n1 = 1;
	
	cout<<n0<<" "<<n1<<" ";

	for (int i=3; i<=termos; i++) {
		n = n0 + n1;
		cout<<n<<" ";
		n0 = n1;
		n1 = n;
	}
	cout<<endl;
}
void numFibonacci (int num_pedido, int termos) {
	int n, n0 = 0, n1 = 1;
	
	
		for (int i = 3; i<=termos; i++) {
		n = n0 + n1;
		n0 = n1;
		n1 = n;
		
	if (n1 == num_pedido) {
		cout<<"\nO n�mero "<<num_pedido<<" est� na Sequ�ncia de Fibonacci"<<endl;
		return;
		}
	}
		cout<<"\nO n�mero "<<num_pedido<<" n�o est� na Sequ�ncia de Fibonacci"<<endl;
}

int main () {
	setlocale (LC_ALL, "portuguese");
	int termos, num_pedido;
	cout<<"Calcular a Sequ�ncia de Fibonacci at� o termo: ";
	cin>>termos;
	fibonacci(termos);
	cout<<"Informe um n�mero e veremos se ele est� na Sequ�ncia: ";
	cin>>num_pedido;
    numFibonacci(num_pedido, termos);

	return 0;
}

