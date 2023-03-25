//
//  Mechanic.cpp
//  Assignment 3 cs2
//
//  Created by Bushra Al-Qahtani on 24/03/2023.
//

#include <stdio.h>
#include "Mechanic.h"


//constructor
Mechanic::Mechanic() : Person() {
    
  counter = 0;
  apps = new Appointment[24];
    
}

//setters
void Mechanic::setCounter(int c) {
    counter = c;
    
}
void Mechanic::setApps(Appointment *a) {
    apps = a;
    
}

//getters
int Mechanic::getCounter() {
    return counter;
    
}
Appointment *Mechanic::getApps() {
    return apps;
    
}

//def for availibility function
bool Mechanic::isAvailable(Appointment ap) {
    
  for (int i = 0; i < counter; i++) {
      
    if (apps[i].hour == ap.hour && apps[i].min == ap.min) {
      return false;
    }
  }

  return true;
}

//def for add appoinment
void Mechanic::addAppointment(int h, int m) {
    
  apps[counter].hour = h;
  apps[counter].min = m;
  counter++;
    
}

// prints info
void Mechanic::printInfo() {
    
  Person::printInfo();
    
  cout << "Number of appointments is = " << counter << endl;
    
  for (int i = 0; i < counter; i++) {
    cout << apps[i].hour << " : " << apps[i].min << endl;
  }
  cout << endl;
}
