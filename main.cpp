#include <iostream>
using namespace std;

string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double n, i, ind;
    cout << "Quanti studenti ci sono in classe?" << endl;
    cin >> n;
    string nomi[n];
    double voti[n];
    int v;
    i = 0;
    while (i < n) {
        cout << "Qual è il tuo nome?" << endl;
        cin >> nomi[i];
        cout << "Qual è il tuo voto?" << endl;
        cin >> voti[i];
        if (1 == 0) {
            v = (int) voti[i];
        } else {
            if (v < voti[i]) {
                v = (int) voti[i];
            }
        }
        i = i + 1;
    }
    cout << "I dati della classe sono: " << endl;
    i = 0;
    while (i < n) {
        cout << "Nome: " << nomi[i] << " voto: " << voti[i] << endl;
        i = i + 1;
    }
    i = 0;
    while (i < n) {
        if (voti[i] == v) {
            ind = i;
        }
        i = i + 1;
    }
    if (ind >= 0) {
        cout << "Nome: " << nomi[ind] << " voto: " << voti[ind] << endl;
    }
    return 0;
}

