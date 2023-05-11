#include "student.h"

Student::Student()
{
}

Student::~Student()
{
}

bool Student::operator==(Student &s) {
    return (s.getFname() == fName && s.getLname() == lName);
}

Student::Student(string first, string last)
{
    fName = first;
    lName = last;
}
    
string Student::getFname()
{
    return fName;
}

string Student::getLname()
{
    return lName;
}


void Student::setLname(string lN)
{
    lName = lN;
}

void Student::setFname(string fN)
{
    fName = fN;
}