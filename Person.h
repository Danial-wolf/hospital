#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
using namespace std;

class Person
{
public:
    Person( string name, int age, string gender);
    ~Person();
    void display();

protected:
   int age;
   int id;
   string name;
   string gender;

   static int totaluser;
};
#endif