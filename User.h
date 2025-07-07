#pragma once
#include "loginScreen.h"
#include <string>
#include <iostream>
class User
{
	std::string login;
	std::string password;
	bool isAdmin;
public:
	User(std::string new_log, std::string new_pass) : login(new_log), password(new_pass) {};
	~User() {
		std::cout << "User deleted";
}
	std::string getLogin() {
		return this->login;
	}
	std::string getPassword() {
		return this->password;
	}
	bool getAdmin() {
		return this->isAdmin;
	}
	void File_SaveUser();
};

