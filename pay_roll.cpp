/**************************************************************/
/*** pay_roll.cpp											***/
/**************************************************************/
#include <iostream>
#include <iomanip>
#include <fstream>			// needed for file I/O
#include <cstdlib>			// needed for exit()
#include <string>

using namespace std;

int main(void) {

	ifstream inFile;
	ofstream outFile;
	string infilename = "pay_in.txt";
	string outfilename = "pay_out.txt";

	string initial, name, id;
	double rate, hours, pay;

	inFile.open(infilename.c_str());
	if (!inFile.is_open()) {
		cout << infilename << " DID NOT OPEN" << endl; 	exit(1);
	}
	outFile.open(outfilename.c_str());

	outFile << left << setprecision(2) << fixed;

	while (inFile.good()) {
		inFile >> initial >> name >> id >> rate >> hours;
		if (hours > 40) {
			pay = (40.0 * rate) + ((hours - 40.0) * rate * 1.5);
		}
		else {
			pay = hours * rate;
		}
		outFile << setw(12) << name << "$ " << setw(7) << pay << endl;
	}

	inFile.close(); outFile.close();

	return(0);
}
/**************************************************************/
