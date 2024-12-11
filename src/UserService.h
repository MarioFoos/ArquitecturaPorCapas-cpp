#ifndef USERSERVICE_H_
#define USERSERVICE_H_

#include "UserDao.h"

class UserService
{
	private:
		UserDao *userDao;
	public:
		UserService(ifstream* is);
		virtual ~UserService(){};

		list<string> fetchAllUsers();
};

#endif /* USERSERVICE_H_ */
