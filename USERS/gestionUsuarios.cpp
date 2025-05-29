#include "gestionUsuarios.h"
#include <iostream>
using namespace std;
#include <algorithm> 

// Implementación de los métodos
UserManager::UserManager() {
    users["martin"] = "admin";
    users["pedro"] = "admin";
    users["renzo"] = "admin";
    users["jorge"] = "admin";
    
}
string toLower(const string& str) {
    string lower = str;
    transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
    return lower;
}
bool UserManager::createUser(const string& username, const string& password) {
    string uname = toLower(username);
    if (users.find(uname) != users.end()) {
        return false; // Ya existe
    }
    users[uname] = password;
    return true;
}
bool UserManager::validateUser(const string& username, const string& password) {
    string uname = toLower(username);
    auto it = users.find(uname);
    return (it != users.end() && it->second == password);
}
void UserManager::modifyUser(const string& username, const string& newPassword) {
    string uname = toLower(username);
    auto it = users.find(uname);
    if (it != users.end()) {
        it->second = newPassword;
    }
}
bool UserManager::deleteUser(const string& username) {
    string uname = toLower(username);
    return users.erase(uname) > 0;
}
