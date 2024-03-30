#include "User.h"

User::User(std::string userName, std::string userPassword) {

    this->userName = userName;
    this->userPassword = userPassword;
}
//! another way to intialize a constructor in c++
/*User::User(std::string name, std::string pass) : username(name), userpassword(pass) {}*/

// nameGetter
std::string User::getUsername() {
    return userName;
}
// passGetter
std::string User::getUserPass() {
    return userPassword;
}