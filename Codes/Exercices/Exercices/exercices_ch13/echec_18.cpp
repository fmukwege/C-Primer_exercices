#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;

class Person{

public:
    typedef int id_number;
    string surname;
    string nickname;
    float bankAccount;
    string name;
    static id_number p_id;

    Person() =default;
    Person(float amount, string str1, string str2, string str3)
    : bankAccount(amount), name(str1), surname(str2), nickname(str3){};

    Person(float amount, string str1, string str2)
    : bankAccount(amount), name(str1), surname(str2){};
    void who() const; 
};
void Person::who() const
    {
        cout << "My name is " << name << endl;
        cout << "My surname is " << surname << endl;
        cout << "My bank account balance is around " << bankAccount << endl;
        if (nickname != "")
        {
            cout << "People often call me " << nickname << endl;
        }
    };

class Employee : public Person{
public:
    string company;
    id_number ID;

    Employee(): ID(++p_id){};
    Employee(string comp) : company(comp), ID(++p_id){};
};
Employee::id_number Employee::p_id = 0;
int main(int argc, char const *argv[])
{
    Employee rookie;
    return 0;
}
