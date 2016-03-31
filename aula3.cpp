#include "veiculo.hpp"


using namespace std;


int main(int argc, char **argv) {

string texto;
int numero,i;
float valor;
/*
Carro *carro;
carro = new Carro("fiat","uno",20800,2,5);


cout << " dados do veiculo" << endl;
cout << carro->getMarca() << endl;
cout << carro->getmodelo() << endl;
cout << carro->getPreco()<< endl;
cout << carro->getTipoCambio()<< endl;
cout << carro->getNumeroAssentos()<< endl;
delete carro;
*/



Carro *carroVet;
carroVet = new Carro[10];
for (i = 0; i < 10; i++) {
  cout << "informe a marca do veiculo" << endl;
  cin >> texto;
  carroVet[i].setMarca(texto);

  cout << "informe a o valor" << endl;
  cin >> valor;
  carroVet[i].setPreco(valor);

  cout << "informe o modelo do veiculo" << endl;
  cin >> texto;
  carroVet[i].setModelo(texto);

  cout << "informe o numero de assentos" << endl;
  cin >> numero;
  carroVet[i].setNumeroAssentos(numero);

  cout << "informe o numero de cambio" << endl;
  cin >> numero;
  carroVet[i].setTipoCambio(numero);

  carroVet[i].mostra();

}




delete [] carroVet;
};
