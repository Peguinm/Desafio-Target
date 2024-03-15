#include <iostream>

int main(int argc, char* argv[]){

    std::string text = "";
    std::string reverse = "";

    std::cout << "Insira o texto para ser invertido\n";
    std:: cin >> text;

    int index = text.size();

    while(index >= 0){
        reverse.push_back(text[index--]);
    }

    std::cout << "Texto invertido:\n";
    std::cout << reverse;

    return 0;
}