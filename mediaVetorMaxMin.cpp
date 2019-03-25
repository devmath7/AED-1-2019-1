#include <iostream>

using namespace std;

int achaMax(int v[], const int TAM){
	int max = v[0];

	for (int i = 0; i < TAM; i++){
		if (v[i] > max){
			max = v[i];
		}
	}
	return max;
}

int achaMin(int v[], const int TAM){
	int min = v[0];

	for (int i = 0; i < TAM; i++){
		if (v[i] < min){
			min = v[i];
		}
	}
	return min;
}

bool existeValor(int media, int v[], const int TAM){
	int existe = 0;

	for (int i = 0; i < TAM; i++){
		if (v[i] == media){
			existe++;
		}
	}
	if (existe == 1)
		return true;
	else
		return false;

}

bool existeMediaMaxMin (int v[], const int TAM){
	int max = achaMax(v, TAM);
	int min = achaMin(v, TAM);

	int media = (int) (min + max)/2.0;

	return existeValor(media, v, TAM);
}

int main(){
	const int TAM = 5;

	int vetor[] = {1, 2, 3, 4, 500};
	if (existeMediaMaxMin (vetor, TAM)){
		cout << "Existe!\n";
	}
	else{
		cout << "Nao existe!\n";
	}
	return 0;
}