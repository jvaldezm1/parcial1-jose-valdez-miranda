#include <iostream>
#include <fstream>
using namespace std;
string texto;



void Leertexto(string directorio) {
    ifstream archivo;
    archivo.open(directorio);
    if (archivo.is_open()) {
        while (getline(archivo, texto)) {
            cout << "su nombre y carnet es : 0909-21-8874 ," << texto << endl;
        }

        {
            archivo.close();
        }

    }
}



