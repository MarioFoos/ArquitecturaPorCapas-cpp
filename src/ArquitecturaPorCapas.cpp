#include <iostream>
#include "UserService.h"

using namespace std;

int main()
{
	// Capa de Aplicación. Controlador que coordina las solicitudes
	ifstream is("users.csv");
	UserService userService(&is);

	list<string> users = userService.fetchAllUsers();

	// Capa de Presentación. En este caso, la consola actúa como interfaz:
	for(string item : users)
	{
		cout << item << endl;
	}
	return 0;
}
