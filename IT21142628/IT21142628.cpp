// OOC assigment 2
// topic : MLB_01.01_11 car rental system
// D.M. Guwani Diwya DissanayakeD.M. Guwani Diwya Dissanayake  IT21142628	
#include<iostream>
#include<string>
using namespace std;

class Customer	
{
	private:
		Payment *pay;
		Reservation * reservation;
		
		int CustomerId;
		int ContactNO;
		string userName;
		string password;
		string CustomerAdd;
	public:
		Customer() {};
		
		Customer(int pReservationID, double pprice, string type, float totAmount)
		{
			pay = new Payment(pReservationID, pprice, type, totAmount);
		}
		
		void displayDisplayPayment()
		{
			pay -> displayReceipt();
		}
		
		Customer(int pReservationID, const char pReservationType[], const char pReservationName[], double price)
		{
			reservation = new Reservation(pReservationID, pReservationType, pReservationName, price);
		}
		
		void dispalayDisplayReservation()
		{
			reservation -> displayReservation();
		}
		
		Customer(int cId, int cNo, string uname, string Cpw, string cAdd)
		{
			CustomerId = cId;
			ContactNO = cNo;
                                           userName = uname;
		              password = Cpw;
		              CustomerAdd = cAdd;

                              }

                              void displayCustomer() 
                              {
      
                               }
                                ~Customer()
    {
      delete pay;
      delete reservation
    }
};



Payment

#include<iostream>
#include<string>
using namespace std;

class Payment	
{
	private:
		int ReservationID;
    float price;
    string type;
    float Discount;
    float totalAmount;

	public:
    Payment();

    Payment(int pReservationID, float pprice, string type, 
    float discount, float totAmount){

      ReservationID = pReservationID;
      price = pprice;
      type = type;
      Discount = discount;
      totalAmount = totAmount;
    }

    void calcDiscount()
    {
      Discount= (price * 0.1);
      cout<<"Discount amount is: "<< Discount << endl;
    }

    float calctotalAmount(){
      return (price- Discount);
    }
	  void calctotalAmount(){
      totalAmount= price * 0.1;
      cout<< "Total Price is: "<< totalAmount << endl;
    }

    void displayReceipt()
    {
  
    }
    ~Payment(){};
};

