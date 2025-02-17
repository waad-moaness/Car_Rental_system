#include "car.h"
#include "Date.h"
car::car()
{
    //ctor
     reservlist= new reservation[100];
}
car::car(int id,string model,int year,string name):
    car_id(id),model(model),year(year),made(name)
{
 reservlist= new reservation[100];
}

int car::getreserv(){return rented;}
void car::addreserv(reservation resev){
    reservlist[rented]= resev;
    rented++;
}
 void car::read_car(){
      cout <<"\n\nenter car id: ";
    cin>>car_id;
    cout <<"\nenter car's company name: ";
    cin>>made;
    cout <<"\nenter car model: ";
    cin>>model;
    cout <<"\nenter car made year: ";
    cin>>year;
 cout<<"\n-------------------------------------------------------\n";
 }

ostream& operator<<(ostream& coutt, car carr){
     coutt<<"car's id : "<<carr.car_id<<endl;
    coutt<<"car's company name : "<<carr.made<<endl;
    coutt<<"car's model : "<<carr.model<<endl;
    coutt<<"car's year : "<<carr.year<<endl;
     coutt<<"Car's number of reservations : "<<carr.rented<<endl;
     coutt<<"\n---------------------------------------------------\n";
      for(int i=0;i<carr.rented;i++)
    {
        coutt<<"\nCar's Reservation number "<<i+1<<" : \n"<<carr.reservlist[i];
        coutt<<"\n---------------------------------------\n";
    }

    return coutt;
}
int car::get_carid(){
    return car_id;
}
bool car::availabe(Date start,Date en)
{
    for(int i=0; i<rented; i++)
    {
        if(start.d2_d1(start,en,reservlist[i].get_start(),reservlist[i].get_end()))
            return false;
    }
    return true;
}
car::~car()
{
    //dtor
}
