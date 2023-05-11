#ifndef CLASSES_H
#define CLASSES_H

#include "student.h"

class Classes 
{
    private:
    Student* students;
    double** grades;
    int numGrades = 0;
    int numStudents = 0;
    bool check();
    
    public:
    Classes();
    ~Classes();
    
    Classes(Student* s, double** g, int ns, int ng);
    
    Student* getStudents();
    double** getGrades();
    int getNumG();
    int getNumS();
    
    void setStudents(Student* s);
    void setGrades(double** g);
    void setNumS(int ns);
    void setNumG(int ng);
    
    void display();
    double minGrade(int indx);
    double maxGrade(int indx);
    double average(int indx);
    bool operator==(Student &s);
};

#endif