#include <iostream>
#include "Person.h"
#include "Doctor.h"
#include "Nurse.h"
#include "Patient.h"
#include "Hospital.h"

using namespace std;

int main()
{
    Doctor danial("danial", 20, "male", "cardioloist", 4 );
    Nurse humna("Humna", 21 , "female" , 4);
   /* Patient huzaifa("huzaifa",21,"male","heart diseasee");
    huzaifa.displayPatientInformation();*/
    Hospital hosp;
    hosp.addDoctor(&danial);
    hosp.listDoctor();
    hosp.addNurse(&humna);
    hosp.listNurse();
    return 0;
}