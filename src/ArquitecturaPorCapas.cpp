#include <iostream>
#include "UserService.h"

using namespace std;

int main()
{
	// Capa de Aplicaci�n. Controlador que coordina las solicitudes
	ifstream is("users.csv");
	UserService userService(&is);

	list<string> users = userService.fetchAllUsers();

	// Capa de Presentaci�n. En este caso, la consola act�a como interfaz:
	for(string item : users)
	{
		cout << item << endl;
	}
	return 0;
}
