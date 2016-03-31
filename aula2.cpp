#include "veiculo.hpp"


using namespace std;


int main(int argc, char **argv) {

string texto;
int numero;
float valor;

Carro *carro;
carro = new Carro();


cout << "informe a marca do veiculo" << endl;
cin >> texto;
carro->setMarca(texto);

cout << "informe a o valor" << endl;
cin >> valor;
carro->setPreco(valor);

cout << "informe o modelo do veiculo" << endl;
cin >> texto;
carro->setModelo(texto);

cout << "informe o numero de assentos" << endl;
cin >> numero;
carro->setNumeroAssentos(numero);

cout << "informe o numero de cambio" << endl;
cin >> numero;
carro->setTipoCambio(numero);

cout << " dados do veiculo" << endl;
cout << carro->getMarca() << endl;
cout << carro->getmodelo() << endl;
cout << carro->getPreco()<< endl;
cout << carro->getTipoCambio()<< endl;
cout << carro->getNumeroAssentos()<< endl;
delete carro;


}
