//
//  Customer.h
//  Assignment 3 cs2
//
//  
//

#ifndef Customer_h
#define Customer_h

#include "Person.h"

class Customer : public Person {
    
private:
    //attributes
  string mechanicID;
  Appointment appointment;

public:
    // The definitions for the functions below are in their cpp
  Customer();

  string getMechanicID();
  Appointment getAppointment();

  void setMechanicID(string n);
  void setAppointment(Appointment app);

  // Operator overloading
  bool operator==(Customer &c);
  bool operator>(Customer &c);
  bool operator<(Customer &c);

  // Prints information
  void printInfo();
    
};

#endif /* Customer_h */
