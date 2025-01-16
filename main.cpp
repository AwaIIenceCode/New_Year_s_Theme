#include <iostream>
#include <ctime>

using namespace std;

void countdownToNewYear()
{
    time_t now = time(0);
    tm* currentTime = localtime(&now);

    tm newYearTime = *currentTime;
    newYearTime.tm_year += 1;
    newYearTime.tm_mon = 0;
    newYearTime.tm_mday = 1;
    newYearTime.tm_hour = 0;
    newYearTime.tm_min = 0;
    newYearTime.tm_sec = 0;

    double secondsLeft = difftime(mktime(&newYearTime), now);

    int days = secondsLeft / (60 * 60 * 24);
    int hours = (secondsLeft / (60 * 60)) - (days * 24);
    int minutes = (secondsLeft / 60) - (days * 24 * 60) - (hours * 60);
    int seconds = secondsLeft - (days * 24 * 60 * 60) - (hours * 60 * 60) - (minutes * 60);

    cout << "Time left until New Year:" << endl;
    cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << endl;
}

int main()
{
    cout << "Welcome to the New Year Countdown!" << endl;

    countdownToNewYear();

    cout << "Happy New Year in advance!" << endl;

    return 0;
}
