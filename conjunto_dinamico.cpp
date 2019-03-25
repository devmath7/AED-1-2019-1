#include <iostream>

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

void atrib(Disciplina &x, Disciplina y){
	x.nome = y.nome;
	x.codigo = y.codigo;
	x.carga_horaria = y.carga_horaria;
}

int main()
{
	Disciplina disciplina;
	Disciplina *ptrDisc = &disciplina;
	ptrDisc->nome = "Matematica Discreta";
	ptrDisc->codigo = "ESTCP022";
	ptrDisc->carga_horaria = 90;

	Disciplina x;
	atrib(x, disciplina);
	print(x);

	return 0;
}