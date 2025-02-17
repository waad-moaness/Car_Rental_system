#include <bits/stdc++.h>
#ifndef RENTALAGREEMENT_H
#define RENTALAGREEMENT_H
using namespace std;

class rentalagreement
{
    public:
        rentalagreement();
        rentalagreement(int,int,int );
        virtual ~rentalagreement();
          int get_price();
    void readRental(int);
    int operator +(int);
    friend ostream & operator<<(ostream &coutt,rentalagreement rental);
    protected:

    private:
    int rperiod=0;
    int rate=0;
    int insurance=0;
};

#endif // RENTALAGREEMENT_H
