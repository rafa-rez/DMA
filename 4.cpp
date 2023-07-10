#include <iostream>

using namespace std;

struct corrida_100{

    float tempo;

};

int main(){

    corrida_100 *atletas = new corrida_100[8];
    float menor = 99999;

    for(int i = 0; i < 8; i++){

        cin >> atletas[i].tempo;

        if (atletas[i].tempo < menor){

            menor = atletas[i].tempo;
        }
    }
  for(int i = 0; i < 8; i++){

        if(atletas[i].tempo ==  menor){
            cout << atletas[i].tempo << endl;
        }
         if(atletas[i].tempo > menor){
            cout << atletas[i].tempo - menor << endl;
        }

    }
    }