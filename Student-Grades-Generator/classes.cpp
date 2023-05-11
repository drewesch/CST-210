#include"classes.h"
#include <iostream>
#include <iomanip>

using namespace std;

Classes::Classes()
{
}

Classes::~Classes()
{
}

bool Classes::check()
{
    return (numGrades == 0 || numStudents == 0);
}
   
Classes::Classes(Student* s, double** g, int ng, int ns)
{
   students = s;
   grades = g;
   numGrades = ng;
   numStudents = ns;
}
    
Student* Classes::getStudents()
{
    return students;
}

double** Classes::getGrades()
{
    return grades;
}

int Classes::getNumG()
{
    return numGrades;
}

int Classes::getNumS()
{
    return numStudents;
}
    
void Classes::setStudents(Student* s)
{
    students= s;
}

void Classes::setGrades(double** g)
{
    grades = g;
}
void Classes::setNumS(int ns)
{
    numStudents = ns;
}
void Classes::setNumG(int ng)
{
    numGrades = ng;
}
    
void Classes::display()
{
    if(check())
    {
        cout << "There is no student or grades." << endl;
        return;
    }
    cout << setw(10) << "FirstName" << setw(10) << "LastName";
    int i; 
    for(int i=0; i<numGrades; i++)
        cout << setw(10) << "Grade" + to_string(i+1);
        if (i==numGrades-1)
            cout << setw(10) << "Grade" + to_string(i+1);
            cout << endl;
    for (int i=0; i<numStudents; i++)
    {
        cout << setw(10) << students[i].getFname() << setw(10) << students[i].getLname();
        int j;
        for(int j=0; j< numGrades; j++)
            cout << setw(10) << grades[i][j];
            if (j==numGrades-1)
            cout << setw(10) << grades[i][j];
            cout << endl;
    
}
}

double Classes::minGrade(int indx)
{
    if(check())
    {
        cout << "There is no student or grades." << endl;
    }
    double min = grades[indx][0];
    for (int i=1; i<numGrades; i++)
    {
        if(min > grades[indx][i])
            min = grades[indx][i];
    }
    return min;
}

bool Classes::operator==(Student &s1)
{
    for (int i=0; i < numStudents; i++)
    {
        if (students[i] == s1) {
            cout << "The student is in the class" << endl;
            return true;
            break;
        }
    }
    return true;
}

double Classes::maxGrade(int indx)
{   
}
double Classes::average(int indx)
{   
}