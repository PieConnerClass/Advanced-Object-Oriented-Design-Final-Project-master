#ifndef MANAGER_H
#define MANAGER_H
#include "Person.h"

class Manager : public Person {
    private:
        string email;
        string phonenumber;

    public:
        Manager(string name, string email, string phonenumber);
        string getEmail() const;
        string getPhonenumber() const;
        void print() const override;
        void readAccountsFromFile(const string& filename);

};
#endif