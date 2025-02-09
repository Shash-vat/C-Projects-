#include <iostream>
#include "../inc/taskmanager.h"
using namespace std;
int main()
{
    TaskManager taskManager;

    unsigned char choice = 1;
    while (choice != '0')
    {
        cout << "\n1.Add new Task";
        cout << "\n2.Update Existing Task";
        cout << "\n3.Delete Task";
        cout << "\n4.Display all task";
        cout << "\n0.Exit";
        cout << "\n\n Enter your choice:";
        cin >> choice;
        switch (choice)
        {
        case '1':
            taskManager.addTask();
            break;
        case '2':
            taskManager.updateTask();
            break;
        case '3':
            taskManager.deleteTask();
            break;
        case '4':
            taskManager.displayAllTasks();
            break;
        case '0':
            cout << "\nExiting the application..\n ";
            break;
        default:
            cout << "\n\nInvalid Choice..\n";
        }
    }
    return 0;
}
