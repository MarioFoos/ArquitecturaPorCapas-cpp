#include "UserService.h"

UserService::UserService(ifstream* is)
{
	this->userDao = new UserDao(is);
}
list<string> UserService::fetchAllUsers()
{
	return userDao->getAllUsers();
}
UserService::~UserService()
{
	delete userDao;
}
