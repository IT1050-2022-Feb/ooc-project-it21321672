// OOC assigment 2
// topic : MLB_01.01_11 car rental system
// Thedas Sri Harisha P.A. D   IT21114830


#include<iostream>
#include<cstring>

using namespace std;

class driver;
class timeshedule;

driver.h

class driver{
	
	private:
		int driverid;
		string drivername;
		int driverno;
	public :
	    driver();
        driver(int dID ,string dname,int dno);
        void diplaydriverdetals();
        
}; 

driver.cpp

driver::driver()
{
	cout << "class Driver" << endl;
}

driver::driver(int dID ,string dname , int dno)
{
	driverid=dID;
	drivername=dname;
	driverno=dno;
}
void driver::diplaydriverdetals(){
	
	cout<< "Driver ID : "<< driverid <<endl;
	cout<< "Driver Name : " <<drivername<<endl;
	cout<< "Driver Contact Number :" << driverno <<endl;
}

timeshedule.h

class timeshedule{
	
	private :
		int time;
		
    public : 
         
         timeshedule();
         timeshedule(int time);
         void displaytime();  
};

timeshedule.cpp

timeshedule::timeshedule(){
	
	cout << "class Time shedule"<<endl;
}
timeshedule::timeshedule(int ptime){
	
	time=ptime;
}
void timeshedule::displaytime(){
	
	cout<<" Pick-Time :" <<time<<endl;
}
