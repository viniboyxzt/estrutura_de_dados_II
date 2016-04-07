#include "pessoa.hpp"


using namespace std;


int idade;
string  name;
Pessoa *no = NULL;
Pessoa *novo ;

int main(int argc, char **argv) {
  novo = new Pessoa;
cout << "escreva o nome do no" <<endl;
cin >> name;
cout << "idade" <<endl;
cin >> idade;

no->nome=name;
no->idade=idade;

if (no==NULL) {
    no = novo;
}else{
  novo->incere(no,novo);
}









}
