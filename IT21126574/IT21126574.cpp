//OOC Assingment 2  
//Topic :MLB_01.01_11 Car Rental system 
//Senadheera Dummunnage Lakshitha Sudath Perera IT21126574

// User, customer, location ,car insurance
 
// use of overloaded Constructors
// The default constructor has sample values set once

#include<iostream>
#define SIZE 2
using namespace std;

class customer;
class admin;
class location;
class carinsurance;



class User{ //User class 
	
    protected :
		string name;
		string address;
		string email;
	
	public : 
	    
	    User();//default constructor
	    User(string Cname,string add, string Ema);//overloaded constructor
	    void displadetails();
	    	    
};
User::User()
{
	cout<< endl << "User Class" << endl;
}

User::User(string Cname ,string add, string Ema){
	
	name=Cname;
	address=add;
	email=Ema;
}

void User::displadetails(){
	
}


class  customer: public User{  // admin class
	
	private :
         int CustomerId;
         int ContactNo;
         string username;
         string password;
         location* location;
    private :
	     
		 customer();  //default constructor
		 customer(string Cname ,string add, string Ema ,int Cid , int Cno , string Cusername , string Cpwd);  // overloaded constructor    
         void displayCustomerdatails();
         
};

customer::customer(){
	
	cout << "Customer Class" << endl;
}
customer::customer(string Cname ,string add, string Ema ,int Cid , int Cno , string Cusername , string Cpwd):User(Cname ,add,  Ema)
{
	name=Cname;
	address=add;
	email=Ema;
	CustomerId=Cid;
	ContactNo=Cno;
	username=Cusername;
	password=Cpwd;
}
void customer::displayCustomerdatails(){  
	
	cout<< "<!------------------ Customer Details ---------------------------!>";
	
	cout<< "Name    :" << name<<endl;
	cout<< "Address :" << address<<endl;
	cout<< "Email   :" << email <<endl;
	cout<< "Customer ID : " << CustomerId <<endl;
	cout<< "Conatact Number :"<< ContactNo <<endl;
	cout<< "User Name :" <<username <<endl;
	cout<< "Password  : "<<password <<endl;
	
	cout<< "<*****************************************************************>";
}


class admin  { // admin class
	
	protected : 
	      
	      string adminName;
	      string adminEmail;
	      int adminNo;
	      customer* customers;//an object of Customer as attribute
	public :
		
		admin(); //default constructor
		admin(string ADname ,string ADemail , int ADno);// overloaded constructor
		void displayadmindetails();
		~admin();
	 
};

admin::admin(){
	
	cout<< endl << "Admin class" << endl;
}

admin::admin(string ADname ,string ADemail , int ADno)
{

}
void admin::displayadmindetails(){
		
	cout<< "<!------------------ Admin Details -------------------------------!>";
	
	cout<< "Admin Name   :"<<adminName <<endl;
	cout<< "Admin Email  :"<<adminEmail<<endl;
	cout<< "Admin Contact Number :"<<adminNo <<endl;
	
	cout<< "<******************************************************************>";
}
admin::~admin(){
	
	cout << "Manage Details" << endl;
}


class location: public admin{ // class location
	
	private :
		int locationId;
	
	public	:
		location();//default constructor
		location(int LocationId);// overloaded constructor
		void locationDatails();
		void checklocation();
};

location::location(){
	
	cout<< "location Class" <<endl;
}
location::location(int LocationId){
	
    locationId=LocationId; 
	
}
void location::locationDatails()
{
	cout<< "<!------------------------ location --------------------------------!>";
	
	 
	cout<< "location ID : "<< locationId <<endl;
	
	
    cout<< "<******************************************************************>";
	
}

class carinsurance { // class carinsurance
	
	private:
		int insuranceId;
		Reservation * Reservation[SIZE];
	public:
	    
		carinsurance();//default constructor
        carinsurance(int InsuranceId);//overloaded Constructors
        void carinsuranceDetail();
       
		
};

carinsurance::carinsurance(){
	carinsurance[0] = new carinsurance( );
    carinsurance[1] = new carinsurance( );

 
}
carinsurance::carinsurance(int InsuranceId){
	
	insuranceId=InsuranceId;
}
void carinsurance::carinsuranceDetail(){
	
}
 
