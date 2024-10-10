#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int operacija = 0;

    while (operacija!=5) {
        cout << "Pasirinkite viena is norimu funkciju" << endl;
        cout << "1. Balses patikrinimas" <<endl;
        cout << "2. Maziausias bendras daliklis" << endl;
        cout << "3. Zaidimas" << endl;
        cout << "4. Fizzbuzz" << endl;
        cout << "5. Iseiti" << endl;
        cout << "Jusu pasirinkimas" << endl;
        cin >> operacija;
        switch (operacija) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                cout << "Jus isejote is funkciju pasirinkimo" << endl;
            break;
            default:
                cout << "Tokio pasirinkimo nera" << endl;
        }
    }
    return 0;
}

int FindLetter() {

    
}
