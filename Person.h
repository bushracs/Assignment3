//
//  Person.h
//  Assignment 3 cs2
//
//  
//

#ifndef Person_h
#define Person_h

#pragma once

#include "Appointment.h"
#include <iostream>
#include <string>
using namespace std;

class Person {
    
private:
    //attributes
  string name;
  string id;
  int age;

public:
    //setters and getters
  Person();

  void setName(string n);
  void setID(string n);
  void setAge(int a);

  string getName();
  string getID();
  int getAge();

  void printInfo();
    
};

#endif /* Person_h */
