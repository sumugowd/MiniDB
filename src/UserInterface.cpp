#include "../include/UserInterface.h"
#include <iostream>

using namespace std;
void UserInterface::start(){
    int choice;
    
    while(true){
        cout << "\n===== Mini Database System =====\n";
        cout << "1. Add Record\n";
        cout << "2. Delete Record\n";
        cout << "3. Update Record\n";
        cout << "4. Search Record\n";
        cout << "5. Display All Records\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        
        if(!(cin >> choice)){
            cout << "Invalid input. Please eneter a number.\n";

            cin.clear();
            cin.ignore(10000,'\n');

            continue;
        }

        switch(choice){
            case 1: 
                db.addRecord(); 
                break;
            case 2: 
                db.deleteRecord(); 
                break;
            case 3: 
                db.updateRecord(); 
                break;
            case 4: 
                db.searchRecord(); 
                break;
            case 5: 
                db.displayAll(); 
                break;
            case 6: 
                cout << "Exiting..\n"; 
                return;
            default: 
                cout << "Invalid choice\n";
        }
    }
}