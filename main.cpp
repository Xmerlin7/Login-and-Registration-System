#include "UserManager.h"
int main()
{
    UserManager usermanage;
    std::cout << "\n\n\t\t1. Register User " << std::endl;
    int op;
    char choice;
    do
    {
        /*if u use linux please replace thi line with `system("clear);` */
        system("cls");
        std::cout << "\n\n\t\t1. Register User " << std::endl;
        std::cout << "\t\t2.Login " << std::endl;
        std::cout << "\t\t3. Show User List " << std::endl;
        std::cout << "\t\t4. Search User " << std::endl;
        std::cout << "\t\t5. Delete User" << std::endl;
        std::cout << "\t\t6. Exit" << std::endl;
        std::cout << "\t\tEnter Your Choice : ";
        std::cin >> op;
        switch (op)
        {
        case 1:
        {
            usermanage.registerUser();
            break;
        }
        case 2:
        {
            std::string username, password;
            std::cout << "\t\tEnter User :";
            std::cin >> username;
            std::cout << "\t\tEnter Password :";
            std::cin >> password;
            usermanage.loginUser(username, password);
            break;
        }
        case 3:
        {
            usermanage.showUser();
            break;
        }
        case 4:
        {
            std::string username;
            std::cout << "\t\tEnter User Name :";
            std::cin >> username;
            usermanage.searchUser(username);
            break;
        }
        case 5:
        {
            std::string username;
            std::cout << "\t\tEnter User Name :";
            std::cin >> username;
            usermanage.deleteUser(username);
            break;
        }
        case 6:
            exit(1);
        }
        std::cout << "\t\tDo You Want to Continue [Yes/ No] ? :";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');
}