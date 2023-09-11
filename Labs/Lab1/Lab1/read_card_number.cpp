#include <iostream>
#include <iomanip>
#include <fstream>			
#include <cstdlib>			
#include <string>
#include <sstream>
#include "Header1.h"

using namespace std;

int read_card_number(void) {

    std::string line;
    int card_number;
    string counter;
    std::cout << "enter card number: ";
    while (std::getline(std::cin, line))
    {
        std::stringstream ss(line);
        if (ss >> card_number)
        {
            if (ss.eof() && line.length() == 10)
            {
                break;
            }
        }
        std::cout << "Error! Enter valid card number: " << std::endl;
    }
    std::cout << "card number: " << card_number << std::endl;
    counter = line;
    return card_number;

}