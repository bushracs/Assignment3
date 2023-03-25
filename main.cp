//
//  main.cpp
//  Assignment 3 cs2
//
//  
//

#include "Customer.h"
#include "Mechanic.h"
#include "Queue.h"
#include <fstream>

int main() {
  // This is to open the mechanics.txt file to read all mechnics data
  ifstream in("mechanics.txt");
  if (in.fail()) {
    cout << "The file failed to open. " << endl;
    return 0;
  }
  // Reads from the file the number of mechanics and puts it in Num
  int Num;
  in >> Num;
  // This is to create an array of mechanics object
  Mechanic *mechanics = new Mechanic[Num];
  string name, id;
  int age;
  int M, h, m;
  // This is to loop on the mechnics
  for (int i = 0; i < Num; i++) {
    // Reads the name
    in >> name;
    mechanics[i].setName(name);
    // Reads the age
    in >> age;
    mechanics[i].setAge(age);
    // Reads the id
    in >> id;
    mechanics[i].setID(id);
    // Reads the number of appointments
    in >> M;
    // loop M iterations to read all appointments
    for (int j = 0; j < M; j++) {
      in >> h;
      in >> m;
      mechanics[i].addAppointment(h, m);
    }
  }
  // This is to close the file
  in.close();
    
    
  // This is to print all mechanics information
  cout << "Available mechanics List: " << endl;
  for (int i = 0; i < Num; i++) {
    mechanics[i].printInfo();
  }
  cout << "--------" << endl;
    
    
  // This opens the customers file
  in.open("customers.txt");
  if (in.fail()) {
    cout << "The file failed to open" << endl;
    return 0;
  }
    
    
  // first read number of customers
  int Num_cus;
  in >> Num_cus;
    
    
  // create an array of customer object
  Customer *customers = new Customer[Num_cus];
    
  for (int i = 0; i < Num_cus; i++) {
    in >> name;
    customers[i].setName(name);
      
    in >> age;
    customers[i].setAge(age);
      
    in >> id;
    customers[i].setID(id);
      
    // Read appointment
    in >> h;
    in >> m;
      
    // Assigns this appointment to the customer
    Appointment app;
    app.hour = h;
    app.min = m;
      
    customers[i].setAppointment(app);
  }
  in.close();

    
  // Sort customers based on appointment time
  for (int i = 0; i < Num_cus - 1; i++) {
      
    for (int j = 0; j < Num_cus - 1; j++) {
        
      if (customers[j] > customers[j + 1]) {
        swap(customers[j], customers[j + 1]);
      }
    }
  }

  // This loops on the customers array and puts it in a queue
  Queue<Customer> qcus;
  for (int i = 0; i < Num_cus; i++) {
      qcus.push(customers[i]);
  }

  // loop on mechanics array and put it in a queue
  Queue<Mechanic> qmec;
  for (int i = 0; i < Num; i++) {
      qmec.push(mechanics[i]);
  }

  // This loop on queue till it is empty
  cout << "Customers with the appointment: " << endl;
    
  while (!qcus.isEmpty()) {
    // Reads the first customer and assigns it to a new mechanic
    Customer t = qcus.pop();
      
    // This loops on the mechnic queue till it finds the first available one
    for (int i = 0; i < qmec.length(); i++) {
      Mechanic c = qmec.pop();

      if (c.isAvailable(t.getAppointment())) {
        t.setMechanicID(c.getID());
        t.printInfo();
          qmec.push(c);
          
        break;
      }
        qmec.push(c);
    }
  }
}
