
#ifndef CAR_H
#define CAR_H
#include <bits/stdc++.h>
#include "reservation.h"
#include <Date.h>
using namespace std;
class car
{
    public:
        car();
         car(int,string,int,string);
        virtual ~car();
       void read_car();
        friend ostream& operator<<(ostream& coutt, car carr);
        int get_carid();
            int getreserv();
         void addreserv(reservation);
         bool availabe(Date,Date);
    protected:

    private:
        string made;
        int car_id;
        string model ;
        int year ;
        int rented=0;
    reservation* reservlist;

};

#endif // CAR_H
