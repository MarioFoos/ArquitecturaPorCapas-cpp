#include "UserDao.h"

UserDao::UserDao(ifstream* is)
{
	this->is = is;
}
void UserDao::parseLine(string line, string data[])
{
	int i = 0;

	size_t pos = line.find(";");
	while(pos != string::npos && i < 2)
	{
		data[i] = line.substr(0, pos);
		line = line.substr(pos + 1, string::npos);
		pos = line.find(";");
		++i;
	}
	data[i] = line;
}
list<string> UserDao::getAllUsers()
{
	string line;
	list<string> cars;
	string data[3];

	while(getline(*is, line))
	{
		parseLine(line, data);
		cars.push_back(data[1]);
	}
	return cars;
}
