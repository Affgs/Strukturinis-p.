#include <iostream>
#include <string>
#include <cstring>

using namespace std;

const char ABECELE[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
//Si funkcija uzkoduoja vartotojo ivesta zodi.
//Raktas yra labai svarbus nes jis nurodo kokia raide reikes naudoti sifruojant zodi
string encode(const char *text, char *key) {

    char encoded[50];
    int textIndex[50];
    int keyIndex[50];
    int tekstoTlgis, rezultatoIndeksas, k=0, m=0;

    tekstoTlgis = strlen(text);
    for (int i = 0; i < tekstoTlgis; i++){
        for(int j=0; j<sizeof(ABECELE); j++) {
            if(tolower(text[i]) == ABECELE[j]) {
                textIndex[k] = j ;
                //encoded[k] = ABECELE[rezultatoIndeksas];
                k++;
            }
        }
        for(int l=0; l<sizeof(ABECELE); l++) {
            if(tolower(key[i%strlen(key)]) == ABECELE[l]) {
                textIndex[m] = l ;
                //encoded[k] = ABECELE[rezultatoIndeksas];
                m++;
            }
        }
        cout << text[i] << '\n';
        //cout << int(text[i]) << '\n';
        //cout << char(95)<< '\n';
        cout << key[i%strlen(key)] << '\n';
    }
    for(int i = 0; i < tekstoTlgis; i++) {
        cout<<textIndex[i]<< " ";
    }
    cout<<endl;
    for(int i = 0; i < tekstoTlgis; i++) {
        cout<<keyIndex[i]<< " ";
    }
    cout<<endl;
    return encoded; // grazina gauta zodi i main dali, kurioje yra isvedamas rezultatas
}

/*
//Si funkcija desifruoja vartotojo ivesta uzsifruota zodi su raktu
string decod(string encode, string key) {

    char decoded[50];

    for (int i = 0; i < encode.length(); i++) {
        int low = tolower(encode[i]);
        int index = low - 97;
        int shift = index - key;
        // cia panasiai kaip if salyga tik vienoje eiluteje kur pliusas yra true kur procentas yra false
        //si salyga reikalinga tam, kad skaiciai eitu is kitos puses
        (shift < 0) ? shift = shift + 26 : shift = shift % 26;
        decoded.push_back(ABECELE[shift]); // cia ivyksta kaip grandine nes kiekviena zodi ikelia ir susidaro pilnas desifruotas zodis
    }
    return decoded; // grazina gauta zodi i main dali, kurioje yra isvedamas rezultatas
}
*/

int main() {
   int op=0;
    int pas=0;

    while (op!=3) {
        cout << "Pasirinkite norima funkcija" << '\n';
        cout << "1. Paprastas sifravimas desifravimas" << '\n';
        cout << "2. ASCII sifravimas desifravimas" << '\n';
        cout << "3. Iseiti" << '\n';
        cin >> op;

        switch (op) {
            case 1:
                cout << "Sifravimas ir desifravimas su abecele" << '\n';
            cout << "1. Sifravimas" << '\n';
            cout << "2. Desifravimas" << '\n';
            cin >> pas;
            if (pas == 1) {
                cout << "Iveskite norima zodi, kuri norite uzkoduoti: " << '\n';
                char text[50];
                cin >> text;
                cout << "Iveskie rakta: " << '\n';
                char key[50];
                cin >> key;

                string encoded = encode(text, key);
                cout << encoded << '\n';
            }
                else if (pas == 2) {
                    cout << "Iveskite uzsifruota teksta: " << '\n';
                  //  string encode = "";
                 //   cin >> encode;
                  //  cout << "Iveskie rakta: " << '\n';
                   // string key = "";
                  //  cin >> key;

                 //   string decoded = decod(encode, key);
                  //  cout << decoded << '\n';
                }
            else {
                cout << "Tokio pasirinkimo nera. Bandykite dar karta" << '\n';
            }
            break;
            case 2:
                cout << "ASCII koduote" << '\n';
                break;
            case 3:
                cout << "Jus isejote is programos" << '\n';
            break;
            default:
                cout << "Tokio pasirinkimo nera. Bandykite dar karta" << '\n';
            break;
        }
    }

    return 0;
}