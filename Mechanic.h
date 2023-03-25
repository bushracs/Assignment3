//
//  Mechanic.h
//  Assignment 3 cs2
//
//  
//

#ifndef Mechanic_h
#define Mechanic_h
#include "Person.h"

class Mechanic : public Person {
    // Inherets from person
    
private:
    //attributes
  int counter;
  Appointment *apps;

public:
    // The definitions for the functions below are in their cpp
  Mechanic();

  void setCounter(int c);
  void setApps(Appointment *a);

  int getCounter();
  Appointment *getApps();

  bool isAvailable(Appointment ap);
  void addAppointment(int h, int m);

  void printInfo();
    
};


#endif /* Mechanic_h */
