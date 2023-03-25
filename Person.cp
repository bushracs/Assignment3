//
//  Person.cpp
//  Assignment 3 cs2
//
//  Created by Bushra Al-Qahtani on 24/03/2023.
//

#include <stdio.h>
#include "Person.h"

//constructor
Person::Person() {
  name = "";
  age = 0;
  id = "";
}


//setters
void Person::setName(string n) {
    name = n;
    
}
void Person::setID(string n) {
    id = n;
    
}
void Person::setAge(int a) {
    age = a;
    
}


//getters
string Person::getName() {
    return name;
    
}
string Person::getID() {
    return id;
    
}
int Person::getAge() {
    return age;
    
}

// prints info function
void Person::printInfo() {
    
  cout << "Name: " << name << endl;
  cout << "ID  : " << id << endl;
  cout << "Age : " << age << endl;
}
