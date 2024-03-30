#ifndef LOG_H
#define LOG_H

#pragma once
#include <string>
class User
{
private:
	std::string userName, userPassword;

public:
	User(std::string userName, std::string userPassword);
	std::string getUsername();
	std::string getUserPass();
};

#endif //LOG_H