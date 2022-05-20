class reservation
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
