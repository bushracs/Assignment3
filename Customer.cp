//
//  Customer.cpp
//  Assignment 3 cs2
//
//
//

#include <stdio.h>
#include "Customer.h"

//constructor

Customer::Customer() : Person() {
  mechanicID = "";
  appointment.hour = 0;
  appointment.min = 0;
}

//getter
string Customer::getMechanicID() {
    return mechanicID;
    
}

//getter
Appointment Customer::getAppointment() {
    return appointment;
    
}

//setter
void Customer::setMechanicID(string n) {
    mechanicID = n;
    
}

//setter
void Customer::setAppointment(Appointment app) {
    appointment = app;
    
}

//==
bool Customer::operator==(Customer &c) {
    
  if (appointment.hour == c.appointment.hour &&
      appointment.min == c.appointment.min)
      
    return true;
  else
    return false;
}

// >
bool Customer::operator>(Customer &c) {
    
  if (appointment.hour > c.appointment.hour)
    return true;
    
  else if (appointment.hour < c.appointment.hour)
    return false;
    
  else {
    if (appointment.min > c.appointment.min)
      return true;
      
    else
      return false;
  }
}

// <
bool Customer::operator<(Customer &c) {
  if (appointment.hour < c.appointment.hour)
    return true;
    
  else if (appointment.hour > c.appointment.hour)
    return false;
    
  else {
    if (appointment.min < c.appointment.min)
      return true;
      
    else
      return false;
  }
}

// printing info
void Customer::printInfo() {
  Person::printInfo();

  cout << "Mechanic ID: "<<
    mechanicID <<
    " at " <<
    appointment.hour <<
    ":" <<
    appointment.min<<endl;
}
