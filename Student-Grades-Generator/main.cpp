
/******************************************************************************

Testing Student Class

*******************************************************************************/
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include "student.h"
#include "classes.h"

using namespace std;

int main()
{
    Classes cst210;
    int numS,numG;
    ifstream infile;
    infile.open("student.txt");
    srand(time(0));
    cout << "How many Students: ";
    cin >> numS;
    cout <<"How many grades for each student: ";
    cin >> numG;
 
    Student *students;
    string name;
    students = new Student[numS];
    
    double **grades;
    grades = new double*[numS];
    for(int i=0; i<numS; i++)
    {
        grades[i] = new double[numG];
        for(int j=0; j<numG; j++)
            grades[i][j] = (rand()%101 + 100)/2.0;
    }

    for (int i=0; i<numS; i++)
    {
        infile >> name;
        students[i].setFname(name);
        infile >> name;
        students[i].setLname(name);
    }
    
    cst210.setStudents(students);
    cst210.setNumS(numS);
    cst210.setGrades(grades);
    cst210.setNumG(numG);
    cst210.display();
    
    Student s1("Joshua", "Sutton");
    // cout << cst210 == s1 << endl;

    for(int j=0; j< numG ; j++)
            delete [] grades[j];
    delete [] students;
    delete [] grades;
    infile.close();
    return 0;
}
