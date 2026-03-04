#include <iostream>
#include <string>

int main() {
	std::string login;
	std::string password;
	std::string password_check;
	std::string auth_login;
	std::string auth_password;

	std::cout << "REGISTRATION \n";

	std::cout << "Enter login: \n";
	std::cin >> login;

	std::cout << "Enter password: \n";
	std::cin >> password;

	while(password_check != password){
		std::cout << "Repeat password: \n";
		std::cin >> password_check;
	}

	std::cout << "AUTHORIZATION \n";

	while (auth_login != login && auth_password != password) {
		std::cout << "Enter login: \n";
		std::cin >> auth_login;


		std::cout << "Enter password: \n";
		std::cin >> auth_password;
	}



	return 0;
}