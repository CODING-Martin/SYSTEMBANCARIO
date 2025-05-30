#include <windows.h>
#pragma once
#include <map>
#include <string>
#include <vector>
using namespace std;

class UserManager {
private:
    map<string, string> users;
public:
    UserManager(); // Constructor para inicializar algunos usuarios
    bool createUser(const string& username, const string& password);
    bool validateUser(const string& username, const string& password);
    void modifyUser(const string& username, const string& newPassword);
    bool deleteUser(const string& username);
    vector<string> listUsers();
};