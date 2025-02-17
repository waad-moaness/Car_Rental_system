#include "rentalagreement.h"

rentalagreement::rentalagreement()
{
    //ctor
}


rentalagreement::rentalagreement(int rperiod,int rate,int insurance):rperiod(rperiod),rate(rate),insurance(insurance){}

int rentalagreement::get_price(){return (rperiod*rate)+insurance;}

void rentalagreement::readRental(int period){
     rperiod=period;
    cout<<"\nEnter the Car's Rental Rate: ";
    cin>>rate;

    cout<<"\nEnter the Car's Insurance Charges: ";
    cin>>insurance;

}
int rentalagreement::operator +(int price){return price+get_price();}

ostream & operator<<(ostream &coutt,rentalagreement rental){
     coutt<<"\nRental Period : "<<rental.rperiod<<"DAYS"<<endl;
    coutt<<"\nRental rate : "<<rental.rate<<endl;
    coutt<<"\nInsurance Charges : "<<rental.insurance<<endl;
    return coutt;

}
rentalagreement::~rentalagreement()
{
    //dtor
}
