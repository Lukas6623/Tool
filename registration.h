#include <string>
using namespace std;

class User {
public:
	string name;
	string password;

	void registration();
	void SaveUser(const string &n, const string& p);
};