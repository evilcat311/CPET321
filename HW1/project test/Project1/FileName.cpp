#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream myfile1;
	ofstream myfile2, myfile3;
	char ch1, ch2;
	myfile1.open("1.txt", ios::in);
	myfile2.open("2.txt", ios::out);
	myfile3.open("3.txt", ios::out);
	while (myfile1.get(ch1)) {
		myfile2.put(ch1);
		myfile1.get(ch1);
		myfile3.put(ch1);
	}

	myfile1.close();
	myfile2.close();
	myfile3.close();


		return 0;
	

}