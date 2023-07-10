#include <iostream>

using namespace std;

struct Hidrocarboneto{

    int C;
    int H;

};

int main(){

    Hidrocarboneto *molecula = new Hidrocarboneto;

    cin >> molecula -> C >> molecula -> H;

    cout << molecula -> C * 12 + molecula -> H * 1;


}