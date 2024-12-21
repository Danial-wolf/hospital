#include "Nurse.h"
#include <string>

using namespace std;


Nurse::Nurse(string name , int age, string gender, int experiance ):Person(name,age,gender),experiance(experiance )
{
    totalNurse++;
    this->nurseId=totalNurse;
}

Nurse::~Nurse()
{
}
void Nurse::displayNurseInformation()
{
    cout<<"Name of Nurse is "<<name<<endl;
    cout<<"Age of Nurse  is "<<age<<endl;
    cout<<"Gender of Nurse is "<<gender<<endl;
    cout<<"Experiance of Nurse is "<<experiance<<endl;
    cout<<"The id of Nurse is "<<nurseId<<endl;
}

int Nurse::totalNurse=0;
