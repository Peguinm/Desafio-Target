#include <iostream>

int main(int argc, char* argv[]){

    int indice = 13;
    int soma = 0;
    int k = 0;

    while(k < indice){
        k += 1;
        soma += k;
    }

    std::cout << soma;

    return 0;
}