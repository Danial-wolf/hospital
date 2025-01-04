#ifndef HOSPITAL_H
#define HOSPITAL_H
#include <vector>
#include "Doctor.h"
#include "Nurse.h"

class Hospital
{
private:
    
public:
    Hospital();
    ~Hospital();
    vector<Doctor*> doctors;
    vector<Nurse*> nurses;
    void addDoctor(Doctor* doctor);
    void listDoctor();
    void addNurse(Nurse* nurse);
    void listNurse();
};







#endif