#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    const int eilutes = 5;
    const int stulpeliai = 3;
    int masyvas[eilutes][stulpeliai];

    //Ivedimas 5x3 dydzio masyva

    cout << "Iveskite 5 eiluciu ir 3 stulpeliu masyvo elementus" << endl;
for (int i = 0; i < eilutes; i++) {
    for (int j=0; j < stulpeliai; j++) {
        cout << "Masyvo [" << i+1 << "][" << j+1 << "] elementas" << endl;
        cin >> masyvas[i][j];
    }
}

    cout << "Masyvo spauzdinimas ir eilutes elementu suma" << endl;
    for(int i = 0; i < eilutes; i++) {
        int eilutes_suma = 0;
        for (int j=0; j < stulpeliai; j++) {
            cout << setw(5) << masyvas[i][j] << " ";
            eilutes_suma += masyvas[i][j];
        }
        cout << setw(5) << eilutes_suma;
        cout << endl;
    }

    cout << "Masyvo spauzdinimas ir stulpelio elementu suma" << endl;
    for(int j=0; j<stulpeliai; j++) {
        int stulpelio_suma = 0;
        for(int i=0; i <eilutes; i++) {
            cout << setw(5) << masyvas[i][j] << " ";
            stulpelio_suma += masyvas[i][j];
        }
        cout << endl;
        cout << setw(5) << "Stulpelio elementu suma " << stulpelio_suma << " " << endl;
    }

    return 0;
}
