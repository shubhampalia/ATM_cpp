#include<iostream>

using namespace std;

void showMenu(){
    cout<<endl;
    cout<<"***********MENU***********"<<endl;
    cout<<"1. CHECK BALANCE"<<endl;
    cout<<"2. DEPOSIT MONEY"<<endl;
    cout<<"3. WITHDRAW MONEY"<<endl;
    cout<<"**************************"<<endl;
}

int main(){
    // check balanace , withdraw money , deposit money, exit
    showMenu();
    cout<<"Please enter the option number"<<endl;
    int option;
    cin>>option;
    
    double balance = 500;
    if(option == 1) cout<<balance<<endl;

    do{
        showMenu();
        cin>>option;
        switch(option){
            case 1 : cout<<balance<<endl;
            break;
        

            case 2: {
                cout<<"enter amount to be deposited"<<endl;
                int depositMoney = 0;
                cin>>depositMoney;
                balance += depositMoney;
                cout<<"Money deposited successfully"<<endl;
                break;
            }
            

            case 3 : {
                cout<<"enter amount to be withdrawn"<<endl;
                int withdrawMoney;
                cin>>withdrawMoney;
                if(withdrawMoney <= balance){
                    balance -= withdrawMoney;
                    cout<<"Money withdrawn successfully"<<endl;
                }
                else{
                    cout<<"Not enough balance";
                }
                break;
            }
        }
    }while(option !=4);
    
}
