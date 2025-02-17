#include <bits/stdc++.h>
#include <rentalagreement.h>
#ifndef INVOICE_H
#define INVOICE_H
using namespace std;

class invoice
{
    public:
        invoice();
        virtual ~invoice();
       int totalamountdue();
    void readinvoice(int );
    int operator -(int );
    friend ostream & operator<<(ostream &coutt,invoice);
    protected:

    private:
        int taxes=0;
    rentalagreement rental;
};

#endif // INVOICE_H
