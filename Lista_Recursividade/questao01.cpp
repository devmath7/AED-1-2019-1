#include <iostream>

using namespace std;

int imprimeNatural(int n){
	if (n == 1){
		cout << n << "\n";
		return n;
	}else{
		cout << imprimeNatural(n-1)+1 << endl;
		return n;
	}
}

int main()
{
	int n, imprime;

	cin >> n; 

	imprime = imprimeNatural(n);
}