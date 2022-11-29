#include <iostream>
using namespace std;
class Bank
{
public:
    char name[100], y;
    char add[100];
    int balance;
    void openaccount();
    void depositmoney();
    void withdrawmoney();
    void displayaccount();
};
void Bank::openaccount()
{
    std::cout<<"\n .......W E L C O M E.......";
    std::cout << "\n Enter your name-> ";
    //gets(name);
    cin.ignore();
    cin.getline(name, 100);
    std::cout << "\n Enter your address-> ";
    gets(add);
    //cin.ignore();
    //cin.getline(add, 100);
    std::cout << "\n What type of account you want to open saving(s) or current(c)-> ";
    std::cin >> y;
    std::cout << "\n Enter amount to deposit-> ";
    std::cin >> balance;
    std::cout << "\n ..Your account is created successfully..";
}
void Bank::depositmoney()
{
    int a;
    std::cout << "\n Enter amount you want to deposit-> ";
    std::cin >> a;
    balance = balance + a;
    std::cout << "\n Your total balance is= " << balance;
}
void Bank::withdrawmoney()
{
    int amount;
    std::cout << "\n Enter amount you want to withdraw-> ";
    std::cin >> amount;
    if (amount < balance)
    {
        balance = balance - amount;
        std::cout << "\n Balance after withdrawl is-> " << balance;
    }
    else
    {
        std::cout << "\n Insufficient balance !!";
    }
}
void Bank::displayaccount()
{
    std::cout << "\n Your Name is=" << name ;
    std::cout << "\n Your Address is=" << add;
    std::cout << "\n Type of Account is=" << y;
    std::cout << "\n Total Balance is=" << balance;
}

int main()
{
    Bank obj;
    int ch,x;
    do
    {
        std::cout << "1-> Open Account \n";
        std::cout << "2-> Deposit Money \n";
        std::cout << "3-> Withdraw Money\n";
        std::cout << "4-> Display Details \n";
        std::cout << "5-> Exit \n";
        std::cout << "Select option from the above given options. \n";
        std::cin >> ch;
        switch (ch)
        {
        case 1:
            obj.openaccount();
            break;
        case 2:
            obj.depositmoney();
            break;
        case 3:
            obj.withdrawmoney();
            break;
        case 4:
            obj.displayaccount();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "\n Enter valid option from the above";
        }
        std::cout << "\n If you want to continue then press 6 \n";
        std::cin>>x;
    }while (x==6);
 return 0;
}