#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void generateWish()
{
    const int count = 5;
    const string wishes[count] =
            {
            "May this year bring you lots of joy and happiness!",
            "Wishing you success and prosperity in the coming year!",
            "Let all your dreams come true in this wonderful new year!",
            "May the warmth of the holidays surround you all year long!",
            "Here’s to health, wealth, and endless happiness in the New Year!"
    };

    int randomIndex = rand() % count;
    cout << wishes[randomIndex] << endl;
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    char choice;
    do
    {
        cout << "Here is your New Year's wish:" << endl;
        generateWish();
        cout << "Do you want another one? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Happy New Year! Goodbye!" << endl;
    return 0;
}