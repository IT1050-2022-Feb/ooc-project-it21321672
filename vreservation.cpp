#include<iostream>
#include<cstring>
#include"vreservation.h"
using namespace std;

reservation::reservation (char Rid[], char RdueDate[], char RreturnDate[], char RpickupLocation[], char RreturnLocation[])
{
  strcpy(reservationID,Rid);
  strcpy(dueDate,RdueDate);
  strcpy(returnDate,RreturnDate);
  strcpy(pickupLocation,RpickupLocation);
  strcpy(returnLocation,RreturnLocation);
}

void reservation::displaybookingdetails()
{
    cout << "Vehicle Reservation ID NO : "<< reservationID<< endl;
    cout << "Due Date : " << dueDate << endl;
    cout << "Return Date :" << returnDate << endl;
    cout << "Pickup Location :" << pickupLocation <<endl;
    cout << "Return Location :" << returnLocation <<endl;
}