#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int n;
    int rezultatas=0;

    ifstream duomenuFailas;
    ofstream rezultatuFailas;
    duomenuFailas.open("input.txt");
    duomenuFailas >> n;
    duomenuFailas.close();

for(int i=0; i<=4; i++) {
    rezultatas=rezultatas+n;
}

    rezultatuFailas.open("output.txt");
    rezultatuFailas<<rezultatas;
    rezultatuFailas.close();

    return 0;
}
