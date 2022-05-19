#include <iostream>
#include <string>

using namespace std;
class Account{

public:
    string holder;
    // constructors
    Account(string name,double revenue) : holder(name), amount(revenue){};
    Account() : Account("Nobody yet",0.0){};
    Account(double revenue) : Account("Nobody yet",revenue){};
    // getters 
    string getBankName() const{return bankName;}
    double getInterest() const{return interestRate;}
    double getAmount() const{return amount;}
    // setters
    Account& setInterestRate(double new_interest);
    Account& doBankTransfer(string new_bank);
private:
    static string bankName;
    static double interestRate ;
    double amount;
};
// static elements must be defined outside the class afterwards AND before the main
string Account::bankName = "HSBC";
double Account::interestRate = 6.5 ;


Account& Account::setInterestRate(double new_interest){
    interestRate = new_interest;
    return *this;
};
Account& Account::doBankTransfer(string new_bank){
    bankName = new_bank;
    return *this;
};

int main(int argc, char const *argv[])
{
    Account hess("Frank",1000.0);
    Account racks("Aurelie",1000000.0);
    cout << hess.getBankName() <<" " << hess.getInterest() << endl;
    racks.doBankTransfer("DEXIA");
    cout << hess.getBankName() <<" " << hess.getInterest() << endl;
    cout << "Are they at the same bank now ? :  " << (hess.getBankName() == racks.getBankName() ? "True" : "False" ) << endl;
    return 0;
}
