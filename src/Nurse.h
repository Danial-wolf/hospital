#ifndef NURSE_H
#define NURSE_H
#include <string>
#include "Person.h"

using namespace std;

class Nurse : public Person
{
private:
    int experiance;
    int nurseId;

    static int totalNurse;
    
public:
    Nurse(string name , int age, string gender, int experiance );
    ~Nurse();
    void  displayNurseInformation();
};




#endif