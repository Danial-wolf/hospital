#include "Doctor.h"
#include <string>

using namespace std;





Doctor::Doctor(string name, int age, string gender, string specialization, int experiance): Person(name,age,gender),specialization(specialization),experiance(experiance) 
{
    totalDoctor++;
}
void Doctor::display()
{
    cout<<"Doctor Name is "<< name <<endl;
    cout<<"Age is "<< age <<endl;
    cout<<"Gender is "<< gender <<endl;
    cout<<"Specialization in "<< specialization <<endl;
    cout<<"Year of experiance "<< experiance <<endl;
}
Doctor::~Doctor()
{
}

int Doctor::totalDoctor=0;