#include <bits/stdc++.h>
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <reservation.h>
using namespace std;

class customer
{
    public:
        customer();
        customer(string,string,string);
        virtual ~customer();
         void read_cus();
         int get_id();
         int getreserv();
         void addreserv(reservation);
         friend ostream& operator<<(ostream& coutt, customer Customer);

    protected:

    private:
        int cus_id;
        string cus_name;
        string cus_address;
        string cus_phone;
        reservation* reservlist;
        int reservcount=0;
};

#endif // CUSTOMER_H
