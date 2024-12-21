#include <iostream>
#include "Person.h"
#include "Doctor.h"
#include "Nurse.h"

using namespace std;

int main()
{
    Doctor danial("danial", 20, "male", "cardioloist", 4 );
    danial.display();
    Nurse humna("Humna", 21 , "female" , 4);
    humna.displayNurseInformation();
    return 0;
}