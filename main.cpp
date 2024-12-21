#include <iostream>
#include "Person.h"
#include "Doctor.h"
#include "Nurse.h"
#include "Patient.h"

using namespace std;

int main()
{
    Doctor danial("danial", 20, "male", "cardioloist", 4 );
    danial.display();
    Nurse humna("Humna", 21 , "female" , 4);
    humna.displayNurseInformation();
    Patient huzaifa("huzaifa",21,"male","heart diseasee");
    huzaifa.displayPatientInformation();
    return 0;
}