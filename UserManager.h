#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <iostream>
#include <vector>
#include "User.h" // Include header for the User class

class UserManager {
private:
    std::vector<User> users;

public:
    void RegisterUser();
    bool LoginUser(std::string name, std::string pass);
    void ShowUser();
    void SearchUser(std::string username);
    void DeleteUser(std::string username);
};

#endif // USERMANAGER_H
