#include <iostream>
#include <iomanip>
#include <fstream>			
#include <cstdlib>			
#include <string>
#include <sstream>
#include "Header1.h"


using namespace std;

int main() {
    

    while (1) {
        int card_number = read_card_number();
        int count = 0;
        int card[10];
        int test = card_number;


        while (test) {
            card[count++] = test % 10;
            test /= 10;
        }
        int checksum = calculate_checksum(card);
        if (check_validity(checksum) == 1) {
            std::cout << "card is valid" << std::endl;
            break;
        }
    }
   return 0;

}

