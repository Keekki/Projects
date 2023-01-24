#include <iostream> 
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <sstream>
#include <fstream>
#include <cstring>
#include <stdio.h>

using namespace std;


const int koko = 25;
void increment_1();
void increment_2(char* argv[], int arc);
void increment_3(char* argv[], int arc);

// main starts
int main(int arc, char* argv[]) {

	cout << endl;

	//depending on the number of arguments the user inputs in the command prompt what increment the program prints out

	// if the user inputs 1 argument, the program prints out the first increment
	if (arc == 1) {

		increment_1();
	}

	// if the user inputs 3 arguments, the program prints out the second increment
	if (arc == 3) {

		increment_2(argv, arc);
	}

	// if the user inputs 4 argument, the program prints out the third increment
	if (arc == 4) {

		increment_3(argv, arc);

	}

}

// the 1st increment is in this function
void increment_1() {

	char search_string[koko];

	char name[koko];
	char fin[koko];

	// the program asks for the longer string from which to search from
	cout << "Give a string from which to search from: ";
	cin.getline(name, koko);

	int bigstr = strlen(name);
	name[bigstr + 1] = '\0';

	//the program asks for the string the user wants to search for
	cout << "Give a search string: ";
	cin.getline(search_string, koko);
	cout << endl;

	int str = strlen(search_string);
	search_string[str + 1] = '\0';

	fin[0] = '\0';

	int x = 0;
	int counter = 0;
	int z = 0;
	int pos_counter = 0;

	//loop for the counter
	for (int i = 0; i < koko; i++) {
		name[i];
		search_string[z];

		if (name[i] == search_string[z]) {

			fin[x] = name[i];

			counter++;

			if (z == str - 1) {
				break;
			}
			x++;
			z++;
		}

		else {
			fin[0] = '\0';

			x = 0;
			counter = 0;
			z = 0;
			pos_counter++;
		}
	}

	fin[str] = '\0';

	cout << endl;

	//if a string is found, this prints out
	if (counter > 0) {
		cout << '"' << search_string << '"' << " Found in " << '"' << name << '"' << " in position " << pos_counter;
	}

	//if a string is not found, this prints out
	else if (counter == 0) {
		cout << '"' << search_string << '"' << " NOT found in " << '"' << name << '"';
	}
	cout << endl; // end of the 1st increment
}

// the 2nd increment is in this function
void increment_2(char* argv[], int arc) {

	string line;
	string word;
	fstream file;

	word = argv[1];

	// the program opens the file
	file.open(argv[2], ios::in);

	// a loop to execute the search
	while (getline(file, line)) {

		size_t pos = line.find(word);

		if (pos != string::npos)
			cout << line << endl;
	}

	cout << endl; // end of the 2nd increment

}

// the 3rd increment is in this function
void increment_3(char* argv[], int arc) {


	fstream file;
	string word;
	int line_counter = 1;
	int occur_counter = 0;
	string compare;
	string line;

	compare = argv[1];

	string olo = "-olo";
	string ol = "-ol";
	string oo = "-oo";

	word = argv[2];

	// program opens the file
	file.open(argv[3], ios::in);

	// loop for the counter
	while (getline(file, line)) {
		line_counter++;
		size_t pos = line.find(word);

		//printing the line number
		if (compare == olo || compare == ol) {

			if (pos != string::npos) {
				cout << line_counter << ": \t" << line << endl;
				occur_counter++;
			}
		}
		//printing all the lines shown
		if (compare == oo) {

			if (pos != string::npos) {
				cout << line << endl;
				occur_counter++;
			}
		}
	}
	//printing all the lines shown and the line number
	if (compare == olo || compare == oo) {

		cout << endl;
		cout << "Occurences of lines containing \"" << word << "\": " << occur_counter;

	}
	cout << endl; // end of the 3rd increment
}


