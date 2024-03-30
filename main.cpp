#include "UserManager.h"
using namespace std;
int main()
{
    UserManager usermanage;

    int op;
    char choice;
    do
    {
        system("cls");
        cout << "\n\n\t\t1. Register User " << endl;
        cout << "\t\t2.Login " << endl;
        cout << "\t\t3. Show User List " << endl;
        cout << "\t\t4. Search User " << endl;
        cout << "\t\t5. Delete User" << endl;
        cout << "\t\t6. Exit" << endl;
        cout << "\t\tEnter Your Choice : ";
        cin >> op;
        switch (op)
        {
        case 1:
        {
            usermanage.registerUser();
            break;
        }
        case 2:
        {
            string username, password;
            cout << "\t\tEnter User :";
            cin >> username;
            cout << "\t\tEnter Password :";
            cin >> password;
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
            string username;
            cout << "\t\tEnter User Name :";
            cin >> username;
            usermanage.searchUser(username);
            break;
        }
        case 5:
        {
            string username;
            cout << "\t\tEnter User Name :";
            cin >> username;
            usermanage.deleteUser(username);
            break;
        }
        case 6:
            exit(1);
        }
        cout << "\t\tDo You Want to Continue [Yes/ No] ? :";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
}