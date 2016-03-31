#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

int main(int argc, char **argv){
    int idade;

    cout << "minha idade e: "<< idade  << endl;
    std::cout << typeid(idade).name() << std::endl;

    return 0;
}
