#ifndef DATE_H
#define DATE_H
#include <bits/stdc++.h>
using namespace std ;

class Date
{
    public:
        Date();
        Date(int,int,int);
        virtual ~Date();
        void readd();
        int getdate(Date);
         bool d2_d1(Date,Date,Date,Date);
          bool operator>(Date);
        friend ostream& operator<<(ostream& coutt, Date d);
    protected:

    private:
        int dday ;
        int dyear;
        int dmonth;
};

#endif // DATE_H
