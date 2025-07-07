#include "User.h"
#include <iostream>
#include <fstream>
#include <stdexcept>
void User::File_SaveUser() {
	std::ofstream file;
	file.open("Users.txt", std::ios::out | std::ios::app);
	if (file.is_open()) {
		std::cout << "yes";
		file << this->login << ':' << this->password << '\n';
	}
	else {
		std::cout << "no";
		//throw std::runtime_error("An error has occured while opening Users.txt file, please, check this file or create it yourself in the Resources directory.");
	}
	file.close();
}

int main() {
	User user{ "login", "pass" };
	user.File_SaveUser();

	return 0;
}
