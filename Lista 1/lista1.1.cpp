#include <iostream>
#include <string>
#include <cmath>

using std::cout;
using std::endl;

float index(float fMass, float fHeight) {
    float fIndex = (fMass / pow(fHeight, 2));
    return fIndex;
}

void categorize(float fIndex) {
    if (fIndex < 17) {cout << "Muito abaixo do peso" << endl;} 
    else if (fIndex < 18.5) {cout << "Abaixo do peso" << endl;}
    else if (fIndex < 25) {cout << "Peso normal" << endl;}
    else if (fIndex < 30) {cout << "Acima do peso" << endl;} 
    else if (fIndex < 35) {cout << "Obesidade" << endl;}
    else if (fIndex < 40) {cout << "Obesidade severa" << endl;}
    else if (fIndex >= 40) {cout << "Obesidade morbida" << endl;}
}

int main(int argc, char* argv[]) {
    
    if (argc < 3)   {
      cout << "Usage: executable MASS(kg) HEIGHT(m)" << endl;
      return 1;
    }

    float fMass = atof(argv[1]);
    float fHeight = atof(argv[2]);

    float fIndex = index(fMass, fHeight);

    categorize(fIndex);

    return 0;
}