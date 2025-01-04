#include "Hospital.h"

using namespace std;

Hospital::Hospital()
{
}

Hospital::~Hospital()
{
}
void Hospital::addDoctor(Doctor *doctor)
{
    doctors.push_back(doctor);
}
void Hospital::listDoctor()
{
    for(const auto& doctor:doctors)
    {
        doctor->display();
    }
}
void Hospital::addNurse(Nurse *nurse)
{
    nurses.push_back(nurse);
}
void Hospital::listNurse()
{
    for(auto& nurse:nurses)
    {
        nurse->displayNurseInformation();
    }
}