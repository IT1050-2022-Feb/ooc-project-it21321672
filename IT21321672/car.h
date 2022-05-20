class vehicle
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