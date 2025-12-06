#include "Manager.h"


Manager::Manager(string name, string email, string phonenumber)
    : Person(name), email(email), phonenumber(phonenumber) {}

string Manager::getEmail() const {
    return email;
}
string Manager::getPhonenumber() const {
    return phonenumber;
}
void Manager::print() const {
    cout << "Manager Name: " << getName() << ", Email: " << email << ", Phone Number: " << phonenumber << endl;
}

void Manager::readAccountsFromFile(const string& filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Unable to open file " << filename << endl;
        return;
    }

    string line;
    while (getline(inFile, line)) {
        cout << line << endl; // For demonstration, just print the line
    }

    inFile.close();
}
