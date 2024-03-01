#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
    
    if (argc < 2)   {
      cout << "Usage: executable YEAR" << endl;
      return 1;
    }

    int year = atoi(argv[1]);

    if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
        cout << "Leap year!";
    }
    else {
        cout << "Not leap year.";
    }

    return 0;
}