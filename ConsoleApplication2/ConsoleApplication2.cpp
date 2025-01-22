
#include <iostream>
using namespace std;

int main() {
    string pokemonName, trainerName;
    int menuChoice, Level, targetLevel, currLevel;

       double levelCost = 5.25, payment, productChoice, totalRevenue = 0, totalCost = 0;
       
        cout << "Welcome to Pokemon!\n"
            "Enter your name:";
        cin >> trainerName;

       
        system("cls");
        do {
            cout << "Hi! " << trainerName << ", input pokemon and level\n"
                << "Pokemon: "; cin >> pokemonName;
            cout << "Current Level: ";
            cin >> currLevel;
            cout << "Target Level: ";
            cin >> targetLevel;

            
            for (int Level = currLevel + 1; Level <= targetLevel; ++Level)
                totalCost += Level * levelCost;
            

            do {
                cout << "Hi! " << trainerName << " your total cost is " << totalCost << ": ";
                cin >> payment;

                if (totalCost > payment) {
                    cout << "Insufficient Payment\n";
                    
                    system("pause");
                    system("cls");
                }
                else {
                    if (totalCost < payment) {
                        cout << "Change: " << (payment - totalCost) << "\n";
                        system("pause");
                        system("cls");
                    }
                    totalRevenue += totalCost;
                    totalCost = 0;
                }
            } while (totalCost > payment);


            system("cls");

            cout << "Level up more pokemon? (1)=yes (0)=0:";
            cin >> menuChoice;

            system("cls");
        } while (menuChoice != 0);

        cout << "Receipt:\n"
           <<"Trainer Name:" << trainerName << endl;      
           cout << "Total Revenue: " << totalRevenue << endl;
        system("pause");
        return 0;

    }