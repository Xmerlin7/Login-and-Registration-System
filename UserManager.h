#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <iostream>
#include <vector>
#include "User.h" // Include header for the User class

class UserManager {
private:
    std::vector<User> users;

public:
    void registerUser();
    bool loginUser(std::string name, std::string pass);
    void showUser();
    void searchUser(std::string username);
    void deleteUser(std::string username);
};

#endif // USERMANAGER_H
