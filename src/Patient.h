#ifndef PATIENT_H
#define PATIENT_H
#include<string>
#include "Person.h"
using namespace std;

class Patient:public Person
{
protected:
    string disease;
    int patientId;
    static int totalPatient;
public:
    Patient(string name, int age, string gender, string disease);
    ~Patient();
    void displayPatientInformation();
};




#endif