#include <iostream>

using namespace std;

/*void soma(int x, int y, int *v){
	int resultado = x + y;
	*v = resultado;
}
*/
void troca(int &x, int &y){
	x = x+y;
	y = y-x;
	x = x+y;
	y = y * (-1);
}

int main(){

	/*int valor = 0;
	soma(3, 4, &valor);

	cout << valor << endl;*/

	int a = 2, b = 3;
	troca(a, b);
	cout << a << ", " << b << "\n";

}