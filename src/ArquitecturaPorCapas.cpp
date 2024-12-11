#include <iostream>
#include "UserService.h"

using namespace std;

int main()
{
	ifstream is("users.csv");
	UserService userService(&is);

	list<string> users = userService.fetchAllUsers();

	for(string item : users)
	{
		cout << item << endl;
	}

	return 0;
}
