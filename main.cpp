#include <iostream>
#include <string>
#include "registration.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    User u;
    
    while (true) {
        int a;

        cout << "< ";
        cin >> a;

        switch (a) {
        case 1:
            cout << "Registration" << endl;
            cin.ignore();
            u.registration();
            break;
        case 0:
            return 0;
        }
    }
    return 0;
}
