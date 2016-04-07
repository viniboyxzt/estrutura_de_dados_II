#include <iostream>
#include <string>


using namespace std;



class Pessoa{

    protected:
      string nome;
      int nasc;
      Pessoa *dir, *esq;

    public:

      Pessoa()  {
        nome = "";
        nasc = 0;
        dir = NULL;
        esq = NULL;

      };


      Pessoa(string no,int nas,Pessoa di, Pessoa es){
        nome = no;
        nasc = nas;
        *dir = di;
        *esq = es;
      };


      ~Pessoa()
          {

            cout << "deletado" << endl;
          };

        string getNome()
        {
        return nome;
        };

        int getNasc(){
          return nasc;

        };

      void setNome(string Nnome){
        nome = Nnome;
      };

      void setNasc(int Nnasc){
        nasc=Nnasc;

      };


      void incere (Pessoa *novo){
        //
        // novo = new Pessoa;
        //int idade;
        // string name;
        //
        // cout << "escreva o nome do no" <<endl;
        // cin >> nome;
        // cout << "idade" <<endl;
        // cin >> idade;
        //
        // novo->nome=name;
        // novo->idade=idade;
          if (this->nasc<=novo->nasc){
              if(this->esq =  NULL){
              this->esq = novo;
              }else{
              this->incere(novo);
              }
          }else{
            if(this->dir = NULL){
            this->dir = novo;
            }else{
            this->dir = novo;
            }
          }


      };

};



//=============================================================================
      // class Fisica:public Pessoa{
      //   int cpf;
      //
      // public:
      //
      //   Fisica(){
      //
      //
      //   };
      //
      //   Fisica(string no,int nas, int cp){
      //     nome = no;
      //     nasc = nas;
      //     cpf = cp;
      //   };
      //
      //   ~Fisica(){
      //
      //     cout << "deletado" << endl;
      //   };
      //
      //   int getCpf(){
      //     return cpf;
      //   };
      //
      //   void setCpf(int cpf){
      //     cpf = Ncpf;
      //   };


// };

//======================================================================================


        // class Juridica:public Pessoa{
        //   int cnpj;
        //
        // public:
        //
        //   Juridica(){
        //
        //
        //   };
        //
        // Juridica(string no,int nas, int cnp){
        //   nome = no;
        //   nasc = nas;
        //   cnpj = cnp;
        // };
        //
        // int getCpf(){
        //   return cnpj;
        // };
        //
        // void setCpf(int cnpj){
        //   cnpj = Ncnpj;
        // };
        //
        // ~Juridica(){
        //
        //   cout << "deletado" << endl;
        // };

//============================================================================
