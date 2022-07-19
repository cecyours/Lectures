#include <iostream>
using namespace std;
namespace sdds {
    struct Date
    {
        private:
        int date,month,year;
        public:
        Date();
        Date(int d, int m, int y);
        void setYear(int n);
        void setMonth(int n);
        void setDate(int n);
        bool equals(Date *d);
        void display();
    };

    Date::Date() {
        Date(2, 3, 2022);
    } 
	 Date::Date(int d, int m, int y) {
        date = d, month=m, year=y;
    }
    void Date::setDate(int n) {
        date = n;
    }
    void Date::setMonth(int n) {
        month = n;
    }
    void Date::setYear(int n) {
        year = n;
    }
    void Date::display() {
        if (date < 10) {
            cout << "0";
        }
        cout << date << ":";
        if (month < 10) {
            cout << "0";
        }
        cout << month << ":" << year << endl;
    }
//    	
	bool sdds::Date::equals(Date *d){
        bool check = false;
        if (d->date == date && d->month == month && d->year == year)
            check = true;
        return check;
    }    
}

int main() {
    sdds::Date currentDate(2,3,2022), thisDate;
    currentDate.display();
    thisDate.setDate(2);
    thisDate.setMonth(3);
    thisDate.setYear(2022);
    thisDate.display();
    cout<<"The two dates are equal:" << thisDate.equals(&currentDate) << endl;
    return 0;
}
