#include "UserManager.h"

#include <iostream>

/// @brief 
void UserManager::RegisterUser() {
    std::string username, password;
    std::cout << "Please enter your username: ";
    std::cin >> username;
    std::cout << "Please enter your password: ";
    std::cin >> password;
    
    // Create a new User object using the entered username and password
    User newUser(username, password);
    
    // Add the new user to the vector of users
    users.push_back(newUser);
    
    std::cout << "User registered successfully.\n";
}

bool UserManager::LoginUser(std::string name, std::string pass) {
    // Implementation
}

void UserManager::ShowUser() {
    // Implementation
}

void UserManager::SearchUser(std::string username) {
    // Implementation
}

void UserManager::DeleteUser(std::string username) {
    // Implementation
}
