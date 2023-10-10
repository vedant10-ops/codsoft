#include <bits/stdc++.h>
using namespace std;

class Task {
public:
    string description;
    bool isCompleted;

    Task(string desc) : description(desc), isCompleted(false) {}
};

class TodoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string &desc) {
        tasks.push_back(Task(desc));
    }

    void viewTasks() const {
        int index = 1;
        for (const Task &task : tasks) {
            cout << index << ". " << task.description 
                 << (task.isCompleted ? " [Completed]" : " [Pending]") << endl;
            index++;
        }
    }

    void markAsCompleted(int index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks[index - 1].isCompleted = true;
        } else {
            cout << "Invalid task number!" << endl;
        }
    }

    void removeTask(int index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks.erase(tasks.begin() + index - 1);
        } else {
            cout << "Invalid task number!" << endl;
        }
    }
};

int main() {
    TodoList todoList;
    int choice;

    while (true) {
        cout << "\nTodo List Manager:\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                {
                    string desc;
                    cout << "Enter task description: ";
                    getline(cin, desc);
                    todoList.addTask(desc);
                }
                break;

            case 2:
                todoList.viewTasks();
                break;

            case 3:
                {
                    int index;
                    cout << "Enter task number to mark as completed: ";
                    cin >> index;
                    todoList.markAsCompleted(index);
                }
                break;

            case 4:
                {
                    int index;
                    cout << "Enter task number to remove: ";
                    cin >> index;
                    todoList.removeTask(index);
                }
                break;

            case 5:
                return 0;

            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}

