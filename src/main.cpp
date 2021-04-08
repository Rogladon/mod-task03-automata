#include "Automata.h"

int main(int argv, char** argc)
{
    /*std::vector<std::string> product_names{ "Late","Cappuccino","Expresso","Snikers" };
    std::vector<unsigned long> product_prices{ 80,60,35,30 };*/
    std::vector<std::pair<std::string, unsigned int>> products{ {"Tea",10},{"Cofe", 20},{"Milk",15} };
    /*for (int i = 0; i < product_names.size(); i++) {
        products.push_back(std::pair<std::string, int>(product_names[i], product_prices[i]));
    }*/
    Automata automata(products);
    automata.on();
    automata.coin(10);
    automata.choice(2);
    automata.coin(5);
    automata.choice(3);
    int oddMoney = automata.finish();
}