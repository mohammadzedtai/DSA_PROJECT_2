#include <iostream>
#include <vector>
using namespace std;

class student
{
public:
    int id;
    string name;

    student(int i, string n)
    {
        id = i;
        name = n;
    }

    void display()
    {
        cout << "ID: " << id << " Name: " << name << endl;
    }
};

void addstudent(vector<student>&students)
{
    int id;
    string name;

    cout << " Enter Student ID: ";
    cin >> id;

    cout << " Enter Student Name : ";
    cin >> name;

    students.push_back(student(id, name));
    cout << "Student Added SuccesFully! " << endl;
}

void displayStudent(vector<student> &students)
{
    if (students.empty())
    {
        cout << "Student Not Found!";
    }

    for (int i = 0 ; i < students.size(); i++)
    {
        students[i].display();
    }
}

void searchStudent(vector<student> &students)
{

    int id;
    cout << "Enter ID to Search : ";
    cin >> id;

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].id == id)
        {
            cout << "Studetn Found: ";
            students[i].display();
            return;
        }
    }


    cout << "Student Not Found!" << endl;
}



   

void deleteStudent(vector<student> &students)
{
    int id;
    cout << "Enter Student ID to Remove: ";
    cin >> id;

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].id == id)
        {
            students.erase(students.begin() + i);
            cout << "Student Remove Succesfully!" << endl;
            return;
        }
    }


    cout << "Student Not Found." << endl;
}

int main()
{

    vector<student> students;
    int choice;


    do{
        cout <<endl 
         << "====== Student Manegement System ======" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Remove Student by ID" << endl;
        cout << "4. Search Student by ID" << endl;
        cout << "5. Exit" << endl;
     



        cout << "Enter your choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addstudent(students);
            break;
        case 2:
            displayStudent(students);
            break;
        case 3:
            deleteStudent(students);
            break;
        case 4:
            searchStudent(students);
            break;
        default:
        break;
        }
    }while (choice != 5);
    



    return 0;
}
