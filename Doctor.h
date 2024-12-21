#ifndef DOCTOR_H
#define DOCTOR_H
#include <iostream>
#include <string>
#include "Person.h"

using namespace std;


class Doctor : public Person
{
private:
    string specialization;
    int experiance;
    static int totalDoctor;
public:
    Doctor(string name, int age, string gender, string specialization,int experiance);
    ~Doctor();
    void display();
};

#endif