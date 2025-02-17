#include "customer.h"

customer::customer()
{
    reservlist= new reservation[100];
}
customer::customer(string name,string address,string phone):
    cus_name(name),cus_address(address),cus_phone(phone)
{
    reservlist= new reservation[100];
}
void customer::read_cus()
{
    cout <<"\n\nenter customer id: ";
    cin>>cus_id;
    cin.ignore();
    cout <<"\nenter customer name: ";
    getline(cin,cus_name);
    cout <<"\nenter customer address: ";
    cin>>cus_address;
    cout <<"\nenter customer phone: ";
    cin>>cus_phone;
     cout<<"\n-------------------------------------------------------\n";
}
int customer::get_id()
{
    return cus_id;
}
ostream& operator<<(ostream& coutt, customer Customer)
{
    coutt<<"customer's id : "<<Customer.cus_id<<endl;
    coutt<<"customer's name : "<<Customer.cus_name<<endl;
    coutt<<"customer's address : "<<Customer.cus_address<<endl;
    coutt<<"customer's phone : "<<Customer.cus_phone<<endl;
    coutt<<"customer's number of reservations: "<<Customer.reservcount<<endl;
    coutt<<"\n---------------------------------------------------\n";
     int Pay=0;
    for(int i=0; i<Customer.reservcount; i++)
    {
        coutt<<Customer.reservlist[i]<<endl;
       Pay=Customer.reservlist[i].get_invoice()-Pay;
       coutt<<"\n-------------------------------------------\n";
    }
    coutt<<"customer's total Pay = "<<Pay<<endl;

    return coutt;

}
int customer::getreserv(){return reservcount;}
void customer::addreserv(reservation resev){
    reservlist[reservcount]= resev;
    reservcount++;
}

customer::~customer()
{
    //dtor
}
