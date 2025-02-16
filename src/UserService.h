#ifndef USERSERVICE_H_
#define USERSERVICE_H_

#include "UserDao.h"

// Capa de Negocio. Servicio que usa el DAO
class UserService
{
	private:
		UserDao *userDao;
	public:
		UserService(ifstream* is);
		virtual ~UserService();

		list<string> fetchAllUsers();
};

#endif /* USERSERVICE_H_ */
