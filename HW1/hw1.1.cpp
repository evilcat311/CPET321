#include <iostream>
#include <fstream>
using namespace std;

bool OpenInput (const char* file1, const char* file2) {
  ofstream myfile;
  myfile1.open (file1, ios::in);
  myfile2.open (file2, ios::in);
  bool compare;
while(myfile1.get(ch1)){
	if(ch1 == myfile2.get(ch2){
	compare << true;
	}
	else{
		myfile1.close();
        myfile2.close();
		return false;
	}
}
  
  myfile1.close();
  myfile2.close();
 
if(compare == true){
	return true;
}

}