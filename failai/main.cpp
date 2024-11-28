#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

   char sk[10];
    char rez[10];
    int rezult=0;

    ifstream duomenuFailas;
    ofstream rezultatuFailas;
    duomenuFailas.open("input.txt");
    duomenuFailas >> sk;
    duomenuFailas.close();

for(int i=1; i<=4; i++) {

    rezult=rez[i]+sk[i];

}

    rezultatuFailas.open("output.txt");
    rezultatuFailas<<rezult;
    rezultatuFailas.close();

    return 0;
}
