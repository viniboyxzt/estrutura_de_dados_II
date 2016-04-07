#include <iostream>
#include <string>


using namespace std;



class veiculo{

    protected:
      string marca;
      string modelo;
      float preco;


    private:
      int teste;


    public:

      veiculo()  {
        marca = "";
        modelo = "";
        preco = 0.0;

      };


      veiculo(string mc,string md, float pr){

      marca = mc;
      modelo = md;
      preco = pr;

      }


      ~veiculo(){

        cout << "deletado" << endl;
      };


      string getMarca(){
        return marca;
      };

      string getmodelo(){
        return modelo;
      };

      float getPreco(){
        return preco;
      };



      void setMarca(string Nmarca){
        marca = Nmarca;
      };

      void setModelo(string Nmodelo){
        modelo = Nmodelo;

      };
      void setPreco(float Npreco){
        preco = Npreco;

      };




};


class Carro:public veiculo{
  int tipoCambio, numeroAssentos;

public:

  Carro(){
  };



  Carro(string mc,string md, float pr,int tc, int na){
    tipoCambio = tc;
    numeroAssentos = na;
    marca = mc;
    modelo = md;
    preco = pr;

  };

  int getNumeroAssentos(){
    return numeroAssentos;
  };
  void setNumeroAssentos(int Nassentos){
    numeroAssentos = Nassentos;
  };



  int getTipoCambio(){
    return tipoCambio;
  };
  void setTipoCambio(int Ncambio){
    tipoCambio = Ncambio;
  };




  ~Carro(){

    cout << "deletado" << endl;
  };


  void mostra(){
    cout << endl << endl << " dados do veiculo" << endl;
    cout << marca << endl;
    cout << preco<< endl;
    cout << modelo<< endl;
    cout << numeroAssentos<<  endl;
    cout << tipoCambio << endl << endl;

  }





};
//---------------------------------------------------------------------------------------------------------------

class Moto:public veiculo{
  int cilindrada;

public:

  Moto(){


  };

  Moto(string mc,string md, float pr, int cil){

    marca = mc;
    modelo = md;
    preco = pr;
    cilindrada = cil;
  };

  int getCilindrada(){
    return cilindrada;
  };
  void setCilindrada(int Ncilindrada){
    cilindrada= Ncilindrada;
  };





  ~Moto(){

    cout << "deletado" << endl;
  };

//------------------------------------------------------------------------------------------------------------------







};
