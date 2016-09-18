//Display 10.4 Class with Private Members
//program to demonstrate the class DayOfyear

#include <iostream>
using namespace std;

class DayOfYear
{
public:
    void input();
    void output();
    
    void set(int new_month, int new_day);
    //Precondition: new_month and new_day form a possible date
    //postcondition: The date is reset acoording to the arguments
    
    int get_month();
    //Returns the month, 1 for January, 2 for February etc
    
    int get_day();
    //Returns the day of the month
    
private:
    void check_date();
    int month;
    int day;
    
};

int main()
{
    DayOfYear today, batch_birthday;
    
    cout << "Enter today's date:\n";
    today.input();
    cout << "Todays date is ";
    today.output();
    
    batch_birthday.set(3, 21);
    
    cout << "J. S. Bach's birthday is ";
    batch_birthday.output();
    
    if (today.get_month() == batch_birthday.get_month() &&
        today.get_day() == batch_birthday.get_day())
        cout << "Happy birthday Johann Sebastian!\n";
    else
        cout << "Hape Unbirthday Johann Sebastian!\n";
    
    return 0;
    
}


//Uses iostream:
void DayOfYear::output()
{
    cout << "Enter the month as a number: ";
    cin >> month;
    cout << "Enter the day of the month: ";
    cin >> day;
    check_date();
}

void DayOfYear::output()
{
    cout << "month = " << month
    << ", day = " << day << endl;
}

void DayOfYear::set(int new_month, int new_day)
{
    month = new_month;
    day = new_day;
    check_date();

}

void DayOfYear::check_date()
{
    if ((month < 1) || (month > 12) || (day < 1) || (day > 31))
    {
        cout << "illegal date. Aborting program.\n";
        exit(1);
    }
}

int DayOfYear::get_month()
{
    return month;
}


int DayOfYear::get_day()
{
    return day;
}
