#include <iostream>
#include <string>
#include "utilities.h"
using namespace std;

class task
{
private:
    string name;
    bool status;
    unsigned int id;

public:
    task(const string &name_var)
    { // the task should not be modified hence we are using const and using reference to save memory .
        this->name = name_var;
        this->status = false;
        id = task_id++;
    }
    void setName(const string &name_var)
    {
        this->name = name_var;
    }
    void setStatus(const bool &status_var)
    {
        this->status = status_var;
    }
    string getName()
    {
        return name;
    }
    bool getStatus()
    {
        return status;
    }
    unsigned int getTaskId()
    {
        return id;
    }
    ~task()
    {
    }
};
