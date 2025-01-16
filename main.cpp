#include <iostream>
#include <string>

using namespace std;

const int MAX_TASKS = 100;

void displayMenu()
{
    cout << "\n New Year's To-Do List" << endl;
    cout << "1. Add a task" << endl;
    cout << "2. Show all tasks" << endl;
    cout << "3. Exit" << endl;
    cout << "Choose an option: ";
}

void addTask(string tasks[], int &taskCount)
{
    if (taskCount >= MAX_TASKS)
    {
        cout << "The list is full! Remove something to add a new task." << endl;
        return;
    }

    cout << "Enter a new task: ";
    cin.ignore();
    getline(cin, tasks[taskCount]);
    taskCount++;
    cout << "Task added!" << endl;
}

void showTasks(const string tasks[], int taskCount)
{
    if (taskCount == 0)
    {
        cout << "The list is empty! Start adding tasks." << endl;
        return;
    }

    cout << "\nYour to-do list:" << endl;

    for (int i = 0; i < taskCount; ++i)
    {
        cout << i + 1 << ". " << tasks[i] << endl;
    }
}

int main()
{
    string tasks[MAX_TASKS];
    int taskCount = 0;
    int choice;

    do
    {
        displayMenu();
        cin >> choice;

        switch (choice)
        {
            case 1:
                addTask(tasks, taskCount);
                break;
            case 2:
                showTasks(tasks, taskCount);
                break;
            case 3:
                cout << "Happy New Year! See you soon!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
