#include "User.h"
#include <iostream>
#include <fstream>
#include <stdexcept>
void User::File_SaveUser() {
	std::ofstream Users("Users.txt", std::ios::in | std::ios::app);
	if (Users.is_open()) {
		Users << this->login << ':' << this->password << '\n';
	}
	else {
		throw std::runtime_error("An error has occured while opening Users.txt file, please, check this file or create it yourself in the Resources directory.");
	}
	Users.close();
}

int main() {
	User user{ "login", "pass" };
}
