#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void registerUser() {
    string username, password;
    cout << "Choose a username: ";
    cin >> username;
    cout << "Choose a password: ";
    cin >> password;

    ofstream file("users.txt", ios::app);
    file << username << " " << password << endl;
    file.close();
    cout << "Registration successful!\n";
}

void loginUser() {
    string username, password, u, p;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    ifstream file("users.txt");
    bool found = false;

    while (file >> u >> p) {
        if (u == username && p == password) {
            found = true;
            break;
        }
    }
    file.close();

    if (found)
        cout << "Login successful!\n";
    else
        cout << "Invalid username or password ❌\n";
}

int main() {
    int choice;
    cout << "1. Register\n2. Login\nChoose option: ";
    cin >> choice;

    if (choice == 1)
        registerUser();
    else
        loginUser();

    return 0;
}
