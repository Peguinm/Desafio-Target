#include <iostream>

int main(int argc, char* argv[]){

    std::cout << "Eu acendeira duas lâmapdas e aguardaria um certo tempo.\n"
              << "Após isso apagaria somente uma das lâmpadas e, então, iria até umas das salas.\n"
              << "Se a sala estivesse com a luz apagada eu encostaria na lâmpada para ver se ela está quente.\n" 
              << "Caso ela esteja quente, o interruptor que controla ela é o que acabei de apagar.\n"
              << "Caso ela esteja gelada, o interruptor que controla ela é o que não mexi.\n"
              << "Caso esteja acesa, o interruptor que controla ela é o que deixei ativado.\n"
              << "Dessa forma, ao visitar duas salas consigo saber qual interruptor controla cada lâmpada.\n";

    return 0;
}