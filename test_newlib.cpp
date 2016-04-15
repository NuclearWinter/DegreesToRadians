#include <libndls.h>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string followUp;
string degreeMsg = "Converting from Degrees to Radians, please input the degree\n"; //These do not take up more space after compilation
string radianMsg = "Converting from Radians to Degrees, please input the fraction without pi\n";

char convertType;
char runAgain;

void convertProcess() {
		convertType   = ' ';
		followUp      = "Assignment Error\n";

		cout << "Input d to convert from Degrees or r to convert from Radians\n";
		cin >> convertType;

		if (convertType == 'd') {
			float degree;
			cout << degreeMsg;
			cin >> degree;
			cout << "Converting " << degree << " to radians\n";
			cout << degree << "pi\n-----\n 180\n";
		} else if (convertType == 'r') {
			float numerator;
			float denominator;
			cout << radianMsg;
			cout << "Numerator: ";
			cin >> numerator;
			cout << "Denominator: ";
			cin >> denominator;
			cout << (numerator * 180)/denominator << "\nDone\n";
		}

		cout << "Process complete, enter r to run again or anything else to exit\n";
		cin >> runAgain;

		if (runAgain == 'r') {
			cout <<'\n';
			convertProcess();
		}
}
////END convertProcess()////

int main(int, char **) {
	cout << "Starting app...\n";
	convertProcess();

	return 0;
}
////END main()////

