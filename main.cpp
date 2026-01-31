#include <iostream>
#include <string>
#include "registration.h"
#include <cstdlib>
#include "help.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    User u;

    while (true) {
        string cmd;

        cout << "guest < ";

        getline(cin, cmd);

        if (cmd == "- reg") {
            cout << "Registration" << endl;
            u.registration();
        }
        else if (cmd == "- os") {
            system("systeminfo | findstr /B /C:\"OS Name\" /C:\"OS Version\"");
        }
        else if (cmd == "- help")
        {
            help();
        }
        else if (cmd == "exit") {
            break;
        }

    }
}
