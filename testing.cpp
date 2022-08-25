// input details using necessary member functions  display but calling friend function, using concept of array of
// objects to initialize and display

#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    string name;
    int roll, age, sub[4];

public:
    student();
    student(int i){};
    friend void display(student s1);
    friend student higher(student s[], int n);
};

static int count = 1;

student::student()
{
    cout << endl
         << "***"
         << "Enter details of student " << count << "***" << endl;
    count++;
    cout << "Enter name : ";
    getchar();
    getline(cin, name);
    cout << "Enter roll : ";
    cin >> roll;
    cout << "Enter age : ";
    cin >> age;
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the marks in subject " << i + 1 << " : ";
        cin >> sub[i];
    }
}

void display(student s1)
{
    cout << endl
         << "************" << endl;
    cout << "Name : " << s1.name << endl;
    cout << "Roll : " << s1.roll << endl;
    cout << "Age : " << s1.age << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "Marks of subject " << i + 1 << " : " << s1.sub[i] << endl;
    }
}

student higher(student s[], int n)
{
    int max = INT32_MIN, avg;
    student dummy(1);
    for (int i = 0; i < n; i++)
    {
        avg = (s[i].sub[1] + s[i].sub[2] + s[i].sub[3] + s[i].sub[4]) / 4;
        if (avg > max)
        {
            max = avg;
            dummy = s[i];
        }
    }
    return dummy;
}

int main()
{
    int n;
    cout << "Enter number of students : ";
    cin >> n;
    student *s, max(1);
    s = new student[n];
    for (int i = 0; i < n; i++)
    {
        display(s[i]);
    }
    cout << "*** The details of student with higher average ***";
    max = higher(s, n);
    display(max);
    return 0;
}

// return the details of that students to another who is having higher average mark