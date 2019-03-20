#include <iostream>
#define TAM 10

using namespace std;

int imprimeNatural(int n){
	if (n == 1){
		cout << n << "\n";
		return 1;
	}else{
		cout << n << "\n";
		return imprimeNatural(n-1)+1;
	}
}

int main()
{
	int n, imprime;

	cin >> n; 

	imprime = imprimeNatural(n);
}