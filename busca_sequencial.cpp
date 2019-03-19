#include <iostream>
#define NIL -1

using namespace std;

struct Disciplina{
	string nome, codigo;
	int carga_horaria;
};

void print(Disciplina disciplina){
	cout << disciplina.nome << "\n";
	cout << disciplina.codigo << "\n";
	cout << disciplina.carga_horaria << "\n";
}

void printVetor(Disciplina disciplina[], const int TAM){
	for (int i = 0; i < TAM; ++i){
		Disciplina x;
		x = disciplina[i];
		print(x);
	}
	cout << "\n";
}

int buscaChave(string k, Disciplina disciplina[], const int TAM){
	for (int i = 0; i < TAM; ++i){
		if (k == disciplina[i].codigo){
			return i;
		}
	}
	return NIL;
}

int main()
{
	const int TAM = 4;
	Disciplina disciplina[] = {{"AED1", "ESTCMP022", 90},
					{"AED2", "ESTCMP023", 90},
					{"TG", "ESTCMP055", 93},
					{"Tecnicas Jedi", "ESTCMP099", 120}};
	printVetor(disciplina, TAM);
	string chave = "ESTCMP055";
	int pos = buscaChave(chave, disciplina, TAM);
	if (pos == NIL){
		cout << "Item nao encontrado!\n";
	}else{
		print(disciplina[pos]);
	}

	return 0;
}