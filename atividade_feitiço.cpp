#include <iostream>
#include <string>

using namespace std;

struct feitico{
	string nome;
	int dificuldade;
	int dano_base;
	float custo_mana;
	
};

int main(){
	feitico f;
	f.nome = "relampago em cadeia";
	f.dificuldade = 4;
	f.dano_base = 75;
	
	float multiplicador;
	
	if (f.dificuldade == 1 || f.dificuldade == 2)  {
    multiplicador = 1.0;
	}
	else if (f.dificuldade == 3 || f.dificuldade == 4) {
		multiplicador = 1.5;
	}
	else if (f.dificuldade == 5) {
		multiplicador = 2;
	}
	
	f.custo_mana = f.dano_base * multiplicador;
	
	
	cout << "nome: " << f.nome << endl;
	cout << "Dificuldade: " << f.dificuldade << endl;
    cout << "Dano Base: " << f.dano_base << endl;
    cout << "Custo de Mana Final: " << f.custo_mana << endl;
	 
	
	
	
	
	
	
	return 0;
}
