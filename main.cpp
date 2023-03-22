#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <stdlib.h>
using namespace std;

void switchStatementsCalculations (int &slot1, int &slot2, int &slot3, string cherries, string
                                   oranges, string plums, string bells, string melons, string bars);

void calculateAmountEarnedByPlaying (double &money, int slot1, int slot2, int slot3,
                                     double &total);

int main()
{
    int slot1;
    int slot2;
    int slot3;

    double money;
    double total=0;
    double amountOfMoneyEnterd=0;
    int count;

    string cherries = "cherries";
    string oranges = "oranges";
    string plums = "plums";
    string bells = "bells";
    string melons = "melons";
    string bars = "bars";
    string doAgain;

    do
    {

        cout << "We are going to be playing a slot machine game today." << endl;
        cout << "Please enter the amount of money you'd like to insert into the slot machine. We will pull the lever for you." << endl;
        cin >> money;
        cout << "You put in $" << money << endl;


        srand(time(0));

        slot1=rand()%6+1;
        slot2=rand()%6+1;
        slot3=rand()%6+1;

        switchStatementsCalculations(slot1, slot2, slot3, cherries, oranges, plums, bells, melons, bars);

        calculateAmountEarnedByPlaying(money, slot1, slot2, slot3, total);

        amountOfMoneyEnterd=(amountOfMoneyEnterd+money);





        cout << "Would you like to play again? Please type yes if so." << endl;
        cin >> doAgain;
        if(doAgain!= "yes")
        {
            cout << "The total amount of money you put in the slot machine is " << amountOfMoneyEnterd << endl;
            cout << "The total amount of money you won is $" << total << endl;
        }

    }
    while(doAgain=="yes");


    system("Pause");
    return 0;
}

void switchStatementsCalculations(int &slot1, int &slot2, int &slot3, string cherries, string
                                  oranges, string plums, string bells, string melons, string bars)
{
    switch (slot1)
    {
    case 1:
        cout << "You got " << cherries << endl;
    case 2:
        cout << "You got " << oranges << endl;
        break;
    case 3:
        cout << "You got " << plums << endl;
        break;
    case 4:
        cout << "You got " << bells << endl;
        break;
    case 5:
        cout << "You got " << melons << endl;
        break;
    case 6:
        cout << "You got " << bars << endl;
    }

    switch (slot2)
    {
    case 1:
        cout << "You got " << cherries << endl;
        break;
    case 2:
        cout << "You got " << oranges << endl;
        break;
    case 3:
        cout << "You got " << plums << endl;
        break;
    case 4:
        cout << "You got " << bells << endl;
        break;
    case 5:
        cout << "You got " << melons << endl;
        break;
    case 6:
        cout << "You got " << bars << endl;

    }

    switch (slot3)
    {
    case 1:
        cout << "You got " << cherries << endl;
        break;
    case 2:
        cout << "You got " << oranges << endl;
        break;
    case 3:
        cout << "You got " << plums << endl;
        break;
    case 4:
        cout << "You got " << bells << endl;
        break;
    case 5:
        cout << "You got " << melons << endl;
        break;
    case 6:
        cout << "You got " << bars << endl;

    }
}

void calculateAmountEarnedByPlaying(double &money, int slot1, int slot2, int slot3, double &total)

{
    double won;

    if(slot1==slot2 || slot1==slot3 || slot2==slot3)
    {
        cout << "Congratulations! You won." << endl;
        won=(money * 2);
        cout << "You won " << won << endl;
    }


    else if ((slot1==slot2 && slot1==slot3) || (slot2==slot1 && slot2==slot3) || (slot3==slot1 && slot3==slot2))
    {
        cout << "Congratulations! You won." << endl;
        won=(money*3);
        cout << "You won " << won << endl;
    }
    else
    {
        cout << "You didn't earn any money." << endl;
    }

    total=(total+won);
}