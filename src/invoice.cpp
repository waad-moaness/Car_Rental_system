#include "invoice.h"

invoice::invoice()
{
    //ctor
}
int invoice::totalamountdue(){ return rental+taxes;}

void invoice::readinvoice(int period ){
     rental.readRental(period);
    cout<<"\nEnter taxes on the car: ";
    cin>>taxes;
    cout<<endl;
}
int invoice::operator -(int total_amount){return totalamountdue()+total_amount;}

ostream & operator<<(ostream &coutt,invoice invo){
      coutt<<"\nTaxes for every car : "<<invo.taxes<<endl;
    coutt<<"\nRental Agreement details : "<<endl;
    coutt<<"\t\t"<<invo.rental<<endl;
    coutt<<"\t\ttotal amount due : "<<invo.totalamountdue();
    return coutt;
}
invoice::~invoice()
{
    //dtor
}
