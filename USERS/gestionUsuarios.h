
#pragma once
#include <map>
#include <string>
#include <vector>
#include "login.h"
using namespace std;

class UserManager {
private:
    map<string, string> users;
public:
    int getUserCount() const;
    UserManager(); // Constructor para inicializar algunos usuarios
    bool createUser(const string& username, const string& password);
    bool validateUser(const string& username, const string& password);
    void modifyUser(const string& username, const string& newPassword);
    bool deleteUser(const string& username);
    bool updateSaldo(const string& username, double amount);
    vector<string> listUsers();
};