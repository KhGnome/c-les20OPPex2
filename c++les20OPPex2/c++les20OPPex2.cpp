#include "Card.h"
#include <ctime>
#include <iostream>

int main()
{
    srand(time(0));

    Card* user = nullptr;
    cout << "1 - Create standart card" << endl;
    cout << "2 - Create VIP card" << endl;
    int type = 0;
    cin >> type;

    if (type == 1) {
        user = new Card();
    }
    else if (type == 2) {
        char name[50];
        cout << "Enter your full name: " << endl;
        cin.ignore();
        cin.getline(name, 50);
        user = new Card(name);
    }
    else {
        return 0;
    }
}
