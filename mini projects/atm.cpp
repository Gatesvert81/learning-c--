#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

/* Mini Project ATM
    -> Check Balance
    -> Cash Withdraw
    -> User Balance
    -> Update Mobile No.
*/

class atm
{
private:
    long int account_No;
    string name;
    int amount;
    int pin;
    string mobile_No;

public:
    atm(long int account_No_a = 1234567, string name_a = "Amanda", int amount_a = 32904, int pin_a = 0000, string mobile_no_a = "0201020300")
    {
        account_No = account_No_a;
        name = name_a;
        amount = amount_a;
        pin = pin_a;
        mobile_No = mobile_no_a;
    }

    void getBalance()
    {
        cout << "Account Balance: " << amount << endl;
    }

    void withdraw()
    {
        int amountToWithdraw, pin_a;
        cout << "Input Amount to withdraw: ";
        cin >> amountToWithdraw;
        cout << "Input pin: ";
        cin >> pin_a;
        if (pin_a == pin)
        {
            if ((amountToWithdraw > 0) && (amountToWithdraw < amount))
            {
                int amount_left = amount - amountToWithdraw;
                getBalance();
            }
            else
            {
                cout << "Invalid Amount." << endl;
            }
        }
        else
        {
            cout << "Incorrect pin" << endl;
        }
    }

    void showDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Account No: " << account_No << endl;
        cout << "Account Balance: " << amount << endl;
        cout << "Mobile Number: " << mobile_No << endl;
    }

    void updateMobileNo()
    {
        string newMobileNo, oldMobileNo;
        cout << "Please Input Old Mobile Number: ";
        cin >> oldMobileNo;
        cout << "Please Input New Mobile Number: ";
        cin >> newMobileNo;
        if (oldMobileNo == mobile_No)
        {
            mobile_No = newMobileNo;
            cout << "Mobile Number Has been updated to :" << mobile_No << endl;
        }
        else
        {
            cout << "Incorrect Old Mobile Number." << endl;
        }
    }

    void exit(){
        cout << "Thanks for using ATM :)" ;
        
    }
};


int main(){
    atm account1;
    int option;
     
     do
     {
        system("cls");
        cout << "**** Welcome to ATM ****" << endl;

        cout << " Select Options " << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Cash Withdraw" << endl;
        cout << "3. Show Details" << endl;
        cout << "4. Update Mobile Number" << endl;
        cout << "5. Exit" << endl;

        cout << "Input Option: " << endl;

        cin >> option;
        switch (option)
        {
        case 1:
            account1.getBalance();
            _getwch();
            break;
        case 2: 
            account1.withdraw();
            _getwch();
            break;
        case 3:
            account1.showDetails();
            _getwch();
            break;
        case 4:
            account1.updateMobileNo();
            _getwch();
            break;
        case 5:
            account1.exit();
            exit(0);
        default:
            cout << "Invalid Input" << endl;
            break;
        }

     } while (1);
     
}