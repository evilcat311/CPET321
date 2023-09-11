#include <iostream>
#include <iomanip>
#include <fstream>			
#include <cstdlib>			
#include <string>
#include <sstream>
#include "Header1.h"

using namespace std;

bool check_validity(int checksum) {
    bool valid;
    if (checksum % 10 == 0) {
        valid = true;
    }
    else {
        valid = false;
    }
    //std::cout << valid;
    return valid;
}