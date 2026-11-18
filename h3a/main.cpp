#include <iostream>
#include "chef.h"
#include "italianchef.h"

int main(){
    Chef kokki("Gordon Ramsay");
    kokki.makeSalad();
    kokki.makeSoup();

    ItalianChef italialainen("Anthony Bourdain");
    italialainen.makeSalad();
    italialainen.makeSoup();
    italialainen.makePasta();
    std::cout << "Nimi: " << italialainen.getName() << std::endl;

    return 0;
}