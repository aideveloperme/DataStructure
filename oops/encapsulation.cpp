#include<iostream>
using namespace std;
class BankAccount{
	private:
		double balance;
	public:
		BankAccount(double initialBalance){
			balance = initialBalance;
		}
		void deposit(double amount){
			if(amount>0) {
				balance += amount;
				cout<<"Deposited: "<<amount<<"New balance"<<balance<<endl;
			}
		}
		void withdraw(double amount){
			if(amount>0 && amount<=balance){
				balance -= amount;
				cout<<"Withdrawn: "<<amount<<",New balance : "<<balance<<endl;
			}
			else{
				cout<<"Insufficent funds or invalid amount "<<endl;
			}
		}
		double getBalance(){
			return balance;
		}
};
//balance is private, only accessed or modifed thourgh the public method.this encapsulation ensures that no extenal code can modify the balance directly,
int main()
{
	BankAccount BankAccountObj(200.48);
	BankAccountObj.deposit(250);
	BankAccountObj.withdraw(50.18);
	cout<<" Balance amount"<<BankAccountObj.getBalance()<<endl;
return 0;
}
