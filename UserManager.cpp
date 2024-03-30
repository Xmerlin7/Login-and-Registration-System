#include "UserManager.h"

void UserManager::RegisterUser()
{
    bool flag;
    std::string username, password;
    std::cout << "Please enter your username: ";
    std::cin >> username;
    std::cout << "Please enter your password: ";
    std::cin >> password;
    for (int i = 0; i < users.size(); i++)
    {
        if ((users[i].getUsername() == username) && (users[i].getUserPass() == password))
            flag = false;
    }
    flag = true;
    /*check that is not alread registerd*/
    if (flag)
    {
        // Create a new User object using the entered username and password
        User newUser(username, password);

        // Add the new user to the vector of users
        users.push_back(newUser);

        std::cout << "User registered successfully.\n";
    }
    else
    {
        std::cout << "User already registered try to log in.\n";
    }
}

bool UserManager::LoginUser(std::string name, std::string pass)
{
    for (int i = 0; i < users.size(); i++)
    {
        if ((users[i].getUsername() == name) && (users[i].getUserPass() == pass))
            return true;
    }
    return false;
}

void UserManager::ShowUser()
{
    if (users.size())
    {
        for (int i = 0; i < users.size(); i++)
            std::cout << users[i].getUsername() << "\n";
    }
    else
        std::cout << "There is no Users Registerd yet \n";
}

void UserManager::SearchUser(std::string username)
{
    for (int i = 0; i < users.size(); i++)
    {
        if ((users[i].getUsername() == username))
            std::cout << "User found\n";
        else
            std::cout << "User not found\n";
    }
}

void UserManager::DeleteUser(std::string username)
{
        for (int i = 0; i < users.size(); i++)
    {
        if ((users[i].getUsername() == username))
        {
            users.erase(users.begin() + i);
            std::cout << "User found\n";
        }
        else
            std::cout << "User not found\n";
    }
}
