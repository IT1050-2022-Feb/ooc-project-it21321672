#include<iostream>
#include<cstring>
using namespace std;

class vehicle // vehicle class implementation
{
  private:
    char carId[10];
    char carType[20];
    char carRegisterNumber[10];
    char carModele[50];
    char carColour[20];
    int manufactYear;
    float mileage;

  public:
    vehicle(char PcarId[], char PcarType[], char PcarRegisterNumber[], char PcarModele[], char PcarColour[], int PmanufactYear,float Pmileage);
    void displaycarDetails();

};

class reservation //reservation class implemntation
{
  private:
    char reservationID[10];
    char dueDate[10];
    char returnDate[11];
    char pickupLocation[20];
    char returnLocation[20];

  public:
    reservation (char Rid[], char RdueDate[], char RreturnDate[],char RpickupLocation[], char RreturnLocation[]);
    void displaybookingdetails();
};

// vehicle class cpp file
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

// reservation class cpp file
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