#include<iostream> 
using namespace std;

/*
Q-6.2. Create a class BankAccount with data members like balance and member functions 
like deposit and withdraw. Implement encapsulation by keeping the data members private.
*/

class BankAccount 
{
    private:
        int balance; 

    public:
       
        BankAccount() : balance(2000) {}

        
        void deposit(int amount) 
        {
            if (amount > 0) 
            {
                balance = balance + amount;
                cout << "amount deposited: ₹" << amount << endl;
                cout << "current balance: ₹" << balance << endl;
            } 
            else 
            {
                cout << "please enter a positive deposit amount." << endl;
            }
        }

       
        void withdraw(int amount) 
        {
            if (amount > 0 && amount <= balance) 
            {
                balance = balance - amount;
                cout << "amount withdrawn: ₹" << amount << endl;
                cout << "current balance: ₹" << balance << endl;
            } 
            else if (amount > balance) 
            {
                cout << "insufficient balance! cannot withdraw ₹" << amount << endl;
            } 
            else 
            {
                cout << "please enter a positive withdrawal amount." << endl;
            }
        }

        // get current balance
        int getBalance() const 
        {
            return balance;
        }
};

int main() 
{
    BankAccount account; 
    int depositAmount, withdrawAmount;
    int choice;

   
    cout << "welcome! your account has been created." << endl;
    cout << "initial balance: ₹2000" << endl;

    while (true) 
    {
        // user options
        cout << "\nwhat would you like to do?" << endl;
        cout << "1. deposit money" << endl;
        cout << "2. withdraw money" << endl;
        cout << "3. exit" << endl;

        cout << "enter your choice (1/2/3): ";
        cin >> choice;

        switch (choice) 
        {
            case 1:
                cout << "enter amount to deposit: ₹";
                cin >> depositAmount;
                account.deposit(depositAmount);
                break;

            case 2:
                cout << "enter amount to withdraw: ₹";
                cin >> withdrawAmount;
                account.withdraw(withdrawAmount);
                break;

            case 3:
                cout << "thank you for using our bank service!" << endl;
                return 0;

            default:
                cout << "invalid choice. please try again." << endl;
        }
    }
}
