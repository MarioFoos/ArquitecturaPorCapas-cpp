#ifndef USERDAO_H_
#define USERDAO_H_

#include <fstream>
#include <iostream>
#include <list>

using namespace std;

// Capa de persistencia que conecta con la capa de datos
class UserDao
{
	private:
		ifstream* is;

		void parseLine(string line, string data[]);
	public:
		UserDao(ifstream* is);
		virtual ~UserDao(){};

		list<string> getAllUsers();
};

#endif /* USERDAO_H_ */
