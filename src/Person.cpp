#include "Person.h"
#include <string>

using namespace std;

Person::Person(string name,int age, string gender)
{
    this->name=name;
    this->age=age;
    this->gender=gender;
    totaluser++;
    this->id=totaluser;
}
Person::~Person()
{

}
void Person::display()
{
    cout<<"The name is "<<name<<endl;
    cout<<"The age is "<<age<<endl;
    cout<<"The id is "<<id<<endl;
    cout<<"The gender is "<<gender<<endl;

}
int Person::totaluser=0;