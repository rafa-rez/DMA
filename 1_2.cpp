#include <iostream>
#include <fstream>

using namespace std;

struct Carro{

    string marca;
    int ano;
    float distancia_percorrida;
    float consumo_gasolina;

};

float km_por_litro (Carro prata){

    float rodagem = prata.distancia_percorrida/prata.consumo_gasolina;

    return rodagem;
}

int main (){

    Carro *vermelhinha = new Carro;

    ifstream arquivo("entrada.txt");
    arquivo >> vermelhinha -> marca;
    arquivo >> vermelhinha -> ano;
    arquivo >> vermelhinha -> distancia_percorrida;
    arquivo >> vermelhinha -> consumo_gasolina;

    float resultado_func = km_por_litro(*vermelhinha);

    ofstream saida("saida.txt");

    saida << vermelhinha -> marca << endl;
    saida << vermelhinha -> ano << endl;
    saida << vermelhinha -> consumo_gasolina << endl;
    saida << resultado_func;

    delete vermelhinha;
}