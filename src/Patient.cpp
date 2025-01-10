#include "Patient.h"




Patient::Patient(string name, int age, string gender, string disease):Person(name, age, gender ),disease(disease)
{
    totalPatient++;
    this->patientId=totalPatient;
}
Patient::~Patient()
{
}
void Patient::displayPatientInformation()
{
    cout<<"Name of Patient is "<<name<<endl;
    cout<<"Age of patient is "<<age<<endl;
    cout<<"Gender of patient is "<<gender<<endl;
    cout<<"Disease of  patient is "<<disease<<endl;
    cout<<"Patient id is "<<patientId<<endl;
}
int Patient::totalPatient=0;