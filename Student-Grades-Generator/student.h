#ifndef STUDENT_H
#define STUDENT_H

#include<string>
using namespace std;

class Student 
{
    private:
    string fName;   //First name of a student
    string lName;

    
    public:
    Student();
    ~Student();
    
    Student(string first, string last);

    string getFname();
    string getLname();

    void setLname(string);
    void setFname(string);
    
    bool operator==(Student &s);
};

#endif