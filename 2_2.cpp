#include <iostream>

using namespace std;

struct pais{

    int ouro;
    int prata;
    int bronze;

};

int main (){

    pais *medalhas = new pais;
    int *valor_ouro = new int;
    int *valor_prata = new int;
    int *valor_bronze = new int;

    // recebendo valores das medalhas e colocando eles no heap por derreferencia
    cin >> *valor_ouro;
    cin >> *valor_prata;
    cin >> *valor_bronze;
    
    // recebo as quantidades de medalhas ganhas, e aloco em seus devidos locais do strcut que esta no heap e por isso usa " -> "
    cin >> medalhas -> ouro;
    cin >> medalhas -> prata;
    cin >> medalhas -> bronze;


    int pontuation = (medalhas -> ouro * *valor_ouro) + (medalhas -> prata * *valor_prata) + (medalhas -> bronze * *valor_bronze);
    cout << pontuation; 

    delete medalhas;
    delete valor_bronze;
    delete valor_ouro;
    delete valor_prata;
}
