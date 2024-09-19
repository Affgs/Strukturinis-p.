#include <iostream>

using namespace std;

int main() {

    int choice=0;
    int number1;
    int number2;
    int number3;
    int sum;
    int i=0;

    while(choice != 4){
        cout << "Paprastas meniu pasirinkimas" << endl;
        cout << "1 Pirma opcija" << endl;
        cout << "2 Pirma opcija" << endl;
        cout << "3 Pirma opcija" << endl;
        cout << "4 Iseiti" << endl;
        cout << "Jusu pasirinkimas" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Jus pasirinkote pirmaja opcija" << endl;
            cout << "Iverskite pirma skaiciu" << endl;
            cin >> number1;
            cout << "Iveskite antra skaiciu" << endl;
            cin >> number2;
            sum = number1 = number2;
            cout << "Iveskite dvieju skaiciu suma " << sum << endl;
            break;
            case 2:
                cout << "Jus pasirinkote antraja opcija" << endl;
            while (i<=20){
                if (1%2==1) {
                    cout << "Skaitmuo nelyginis " << i << endl;
                }
            //cout << "Skaitmuo" << i << endl;
            i++;
            }
            break;
            case 3:
                cout << "Jus pasirinkote treciaja opcija" << endl;
            for(int j=0; i<20; j++) {
                cout << "Skaitmuo " << j << endl;
            }
            break;
            case 4:
                cout << "Jus isejote is programos" << endl;
            break;
            default:
                cout << "Tokio pasirinkimo nera bandykite dar karta" << endl;

    }


    }
    return 0;
}
