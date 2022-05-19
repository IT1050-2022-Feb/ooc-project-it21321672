#include "car.h"
#include<iostream>
#include<cstring>

using namespace std;

vehicle :: vehicle(char PcarId[],  char PcarType[],char PcarRegisterNumber[], char PcarModele[], char PcarColour[], int PmanufactYear, float Pmileage)
{
  strcpy(carId,PcarId);
  strcpy(carType,PcarType);
  strcpy(carRegisterNumber,PcarRegisterNumber);
  strcpy(carModele,PcarModele);
  strcpy(carColour,PcarColour);
  manufactYear=PmanufactYear;
  mileage=Pmileage;
}

void vehicle :: displaycarDetails()
{
  cout<<"Vehicle Id: "<<carId<<endl;
  cout<<"Vehicle Type: "<<carType<<endl;
  cout<<"Vehicle Register Number: "<<carRegisterNumber<<endl;
  cout<<"Vehicle Model: "<<carModele<<endl;
  cout<<"Vehicle Colour: "<<carColour<<endl;
  cout<<"Vehicle Manufacture Year : "<<manufactYear<<endl;
  cout<<"Vehicle Mileage : "<<mileage<<"km"<<endl;

}
