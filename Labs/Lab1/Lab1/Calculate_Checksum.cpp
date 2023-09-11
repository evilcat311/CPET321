#include <iostream>
#include <iomanip>
#include <fstream>			
#include <cstdlib>			
#include <string>
#include <sstream>
#include "Header1.h"

using namespace std;

int calculate_checksum(int card[]) {
    int tester = 0;
    bool checksum;
    for (int j = 0; j <= 9; j++) {
        j++; //additional +1 for every other element
        double value = card[j];
        value = value * 2;
        if (value >= 10) {
            value = value - 9;
            card[j] = value;
        }
        else {
            card[j] = value;
        }
    }
    for (int i = 9; i >= 0; i--) {
        tester = tester + card[i];
    }
    //std::cout << tester << std::endl;

    return tester;
}