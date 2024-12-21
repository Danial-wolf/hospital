#include "Doctor.h"
#include <string>

using namespace std;


Doctor::Doctor(string name, int age, string gender, string specialization, int experiance): Person(name,age,gender),specialization(specialization),experiance(experiance) 
{
    totalDoctor++;
    this->doctorId=totalDoctor;
}
void Doctor::display()
{
    cout<<"Doctor Name is "<< name <<endl;
    cout<<"Doctor Age is "<< age <<endl;
    cout<<"Gender is "<< gender <<endl;
    cout<<"Specialization in "<< specialization <<endl;
    cout<<"Year of experiance "<< experiance <<endl;
    cout<<"Doctor id is "<<doctorId<<endl;
}
Doctor::~Doctor()
{
}

int Doctor::totalDoctor=0;