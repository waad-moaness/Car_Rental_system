#include <bits/stdc++.h>
#ifndef RESERVATION_H
#define RESERVATION_H
#include <Date.h>
#include <invoice.h>
using namespace std;
class reservation
{
    public:
        reservation();
        virtual ~reservation();
        reservation(int ,int,Date,Date,invoice);
        void readres();
         Date get_start();
         Date get_end();
         int get_car();
         int get_cus();
         invoice get_invoice();
         friend ostream& operator<<(ostream& coutt, reservation reserv);
    protected:

    private:
        int m_carid;
        int m_cusid;
        Date startd;
        Date m_endd;
        invoice invo;
};

#endif // RESERVATION_H
