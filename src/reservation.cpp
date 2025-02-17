#include "reservation.h"

reservation::reservation()
{
    //ctor
}
reservation::reservation(int carid,int cusid,Date start,Date endd,invoice in){
    m_cusid=cusid;
    m_carid=carid;
    startd=start;
    m_endd=endd;
    invo=in;
}
void reservation::readres(){
    cout<<"\n\nenter car's id that you wanna reserve: ";
    cin>>m_carid;
    cout<<"\nenter customer id: ";
    cin>>m_cusid;
    cout<<"\nenter reservation start date(day/month/year): ";
    startd.readd();
    cout<<"\nenter reservation end date(day/month/year): ";
    m_endd.readd();
    cout<<endl;
     invo.readinvoice(startd.getdate(m_endd));
}
Date reservation::get_start(){return startd;}

Date reservation::get_end(){return m_endd;}

int reservation::get_car(){return m_carid;}

int reservation::get_cus(){return m_cusid;}

invoice reservation::get_invoice(){return invo;}

ostream& operator<<(ostream& coutt, reservation reserv){
     coutt<<"\ncar's id : "<<reserv.m_carid<<endl;
    coutt<<"\ncustomer's id : "<<reserv.m_cusid<<endl;
    coutt<<"\nreservation start date : "<<reserv.startd<<endl;
    coutt<<"\nreservation end date : "<<reserv.m_endd<<endl;
     coutt<<"\nReservation Invoice details : "<<reserv.invo<<endl;
    return coutt;
}
reservation::~reservation()
{
    //dtor
}
