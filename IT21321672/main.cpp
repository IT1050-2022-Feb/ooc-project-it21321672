#include<iostream>
#include<cstring>
#include"car.h"
#include"vreservation.h"
using namespace std; 

int main (){

  
    cout<<"------Vehicle fleet----"<<endl; //deatils about vehicles

    vehicle *car;
  car= new vehicle((char*)"CR001", (char*)"Car",(char*)"KD-7895",  (char*)"Maruti Suzuki Swift", (char*)"red",1999,79875.9);
  car->displaycarDetails();
  cout<<"....................................."<<endl;
  cout<<endl;

  vehicle *truck;
  truck= new vehicle((char*)"CR002", (char*)"Truck",(char*)"JD-7595",  (char*)"Nissan Frontier", (char*)"black",2001,76567.56);
  truck->displaycarDetails();
  cout<<"....................................."<<endl;
  cout<<endl;

  vehicle *van;
  van= new vehicle((char*)"CR003", (char*)"Van",(char*)"FD-4835",  (char*)"Chrysler Pacifica", (char*)"white",1969,43578.87);
  van->displaycarDetails();
  cout<<"....................................."<<endl;
  cout<<endl;

  vehicle *motorcycle;
  motorcycle= new vehicle((char*)"CR004", (char*)"Motor-Cycle",(char*)"RD-7195",  (char*)"Royal Enfield Meteor ", (char*)"green",1945,2345.98);
  motorcycle->displaycarDetails();
  cout<<"....................................."<<endl;
  cout<<endl;

  vehicle *SUV;
  SUV= new vehicle((char*)"CR005", (char*)"SUV",(char*)"YD-9455",  (char*)"Subaru.", (char*)"maroon",1868,5467.87);
  SUV->displaycarDetails();
  cout<<"....................................."<<endl;
  cout<<endl;

  

 cout<<"------reservation------"<<endl; // details about vehicle reservations

    reservation *book1;
    book1 = new reservation((char*)"R0001", (char*)"02/10/2020", (char*)"30/10/2020",(char*)"Matale", (char*)"Kiribathkubura");
    book1 -> displaybookingdetails();
    cout<<"....................................."<<endl;
    cout<<endl;

    reservation *book2;
    book2 = new reservation((char*)"R0002", (char*)"02/12/2020", (char*)"02/10/2020",(char*)"Matara", (char*)"Galle");
    book2 -> displaybookingdetails();
    cout<<"....................................."<<endl;
    cout<<endl;

    reservation *book3;
    book3 = new reservation((char*)"R0003", (char*)"02/12/2021", (char*)"02/10/2021",(char*)"Kandy", (char*)"Kurunagala");
    book3 -> displaybookingdetails();
    cout<<"....................................."<<endl;
    cout<<endl;

    reservation *book4;
    book4 = new reservation((char*)"R0004", (char*)"02/11/2021", (char*)"03/10/2021",(char*)"Anuradapura", (char*)"Kurunagala");
    book4 -> displaybookingdetails();
    cout<<"....................................."<<endl;
    cout<<endl;
}