#include <iostream>
#include <vector>
#include <memory>
#include "task.h"
using namespace std;
class task;
class TaskManager
{
private:
    vector<shared_ptr<task>> myTasks;

public:
    void addTask()
    {
        cout << "\n I'm in addTask()";
        string task_name;
        cout << "\nEnter task name :";
        cin.ignore(); // skips character in input buffer
        getline(cin, task_name);
        myTasks.push_back(make_shared<task>(task_name));
    }
    void displayAllTasks()
    {
        cout << "\n In display tasks()";
        for (auto ref = myTasks.begin(); ref != myTasks.end(); ref++)
        {
            cout << endl
                 << " "
                 << (*ref)->getTaskId() << "," << (*ref)->getName() << ",";

            if ((*ref)->getStatus() == false)
            {
                cout << "Not Completed";
            }
            else
            {
                cout << "Completed";
            }
        }
        cout << endl
             << endl;
    }
    void deleteTask()
    {
        cout << "\n I'm in deleteTask()";
        unsigned int id;
        cout << "\n Enter task id";
        cin >> id;

        for (auto ref = myTasks.begin(); ref != myTasks.end(); ref++)
        {
            if ((*ref)->getTaskId() == id)
            {
                cout << "\n Task id found..";
                myTasks.erase(ref);
                break;
            }
        }
    }
    void updateTask()
    {
        cout << "\n I'm in updateTask()";
        unsigned int id;
        cout << "\n Enter Task id ";
        cin >> id;
        for (auto ref = myTasks.begin(); ref != myTasks.end(); ref++)
        {
            if ((*ref)->getTaskId() == id)
            {
                cout << "\n Task id found.. ";
                int choice;
                cout << "Enter 1 to complete the task";
                cout << "\n 0 to incomplete it \n";
                cin >> choice;
                if (choice == 1)
                {
                    (*ref)->setStatus(true);
                }
                else
                {
                    (*ref)->setStatus(false);
                }
                break;
            }
        }
    }
};