#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;

class Employee{

public:
    Employee() : p_id(++generalID){};
    Employee(float amount, string str1, string str2, string str3)
    : bankAccount(amount), name(str1), surname(str2), nickname(str3),p_id(++generalID){};

    Employee(float amount, string str1, string str2)
    : bankAccount(amount), name(str1), surname(str2),p_id(++generalID){};
    void who() const; 
private:
    typedef int id_number;
    string surname;
    string nickname;
    float bankAccount;
    string name;
    static id_number generalID;
    id_number p_id;
};
Employee::id_number Employee::generalID = 0; // static member must be defined outside of class if not constexpr

void Employee::who() const
    {
        cout << "My name is " << name << endl;
        cout << "My surname is " << surname << endl;
        cout << "My bank account balance is around " << bankAccount << endl;
        cout << "My work ID is " << p_id << endl;
        if (nickname != "")
        {
            cout << "People often call me " << nickname << endl;
        }
    };
class Boss : public Employee{
    
public:
    typedef Employee super;
    void who()  const {
        super::who();
        cout << "I am a BOSS"<<"\n";};
private:
    string nickname = "CEO";
};


int main(int argc, char const *argv[])
{
    Employee rookie(12444.0,"Frank", "Mukwege");
    Employee senior(50000.98,"Gaetan","Mukwege","Gaga");
    Boss papa;
    rookie.who();
    senior.who();
    papa.who();
    return 0;
}
