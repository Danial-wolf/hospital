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
    Doctor bilal("bilal",26,"male","cardiologist",7);
    Nurse humna("Humna", 21 , "female" , 4);
    Nurse muskan("muskan",20,"female",3);
   /* Patient huzaifa("huzaifa",21,"male","heart diseasee");
    huzaifa.displayPatientInformation();*/
    Hospital hosp;
    hosp.addDoctor(&danial);
    hosp.addDoctor(&bilal);
    hosp.listDoctor();
    hosp.addNurse(&humna);
    hosp.addNurse(&muskan);
    hosp.listNurse();
    return 0;
}