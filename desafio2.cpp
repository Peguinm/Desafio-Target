#include <iostream>
#include <vector>

int main(int argc, char* argv[]){

    int number = 0;
    int index = 0;
    int currentTerm = 0;
    std::vector<int> fibo {};

    std::cout << "Insira o valor que deseja encontrar\n";
    std::cin >> number;

    while(true){    
        if(fibo.size() >= 2){
            currentTerm = fibo[index - 1];
            fibo.push_back(currentTerm + fibo[index - 2]);
        }else{
            fibo.push_back(currentTerm);
            currentTerm++;
        }

        std::cout << fibo[index] << std::endl;

        if(fibo[index] == number){
            std::cout << "O valor informado pertence a Fibonacci!\n";
            break;
        }

        if(fibo[index] > number){
            std::cout << "O valor informado não pertence a Fibonacci...\n";
            break;
        }

        index++;
    }

    return 0;
}