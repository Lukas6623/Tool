#include <iostream>
#include <string>
#include "registration.h"
using namespace std;


void User::SaveUser(const string& n, const string& p) {
	password = p;
	name = n;
}

void User::registration() {

	string inputName;
	string inputPassword;
	
	cout << "Enter name: ";
	getline(cin, inputName);

	cout << "Password: ";
	getline(cin, inputPassword);

	SaveUser(inputName, inputPassword);
}



