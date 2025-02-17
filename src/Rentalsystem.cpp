#include "Rentalsystem.h"

Rentalsystem::Rentalsystem()
{
    carlist= new car[100];
    cuslist= new customer[100];
}
int Rentalsystem::findcar(int carid)
{
    for(int i=0; i<carcount; i++)
    {
        if(carlist[i].get_carid()==carid)
        {
            return i;
        }
    }
    return -1;
}
int Rentalsystem::findcus(int cusid)
{
    for(int i=0; i<cuscount; i++)
    {
        if(cuslist[i].get_id()==cusid)
        {
            return i;
        }
    }
    return -1;
}
void Rentalsystem::addcar()
{
    carlist[carcount].read_car();
    carcount++;
}

void Rentalsystem::addcustomer()
{
    cuslist[cuscount].read_cus();
    cuscount++;
}
void Rentalsystem::rentcar()
{
    reservation r;
    r.readres();
    int carindex=findcar(r.get_car());
    int cusindex=findcus(r.get_cus());
    if(carindex==-1)
    {
        cout<<"car not found"<<endl;
    }
    else if(cusindex==-1)
    {
        cout<<"customer not found"<<endl;
    }
    else
    {
        carlist[carindex].addreserv(r);
        cuslist[cusindex].addreserv(r);
        cout<<"Reservation Completed"<<endl;
    }
    cout<<"\n---------------------------------------------------\n";
}
void Rentalsystem::cardetails() //done
{
    int carid;
    cout<<"\n\nEnter ID of car you want to get its details: ";
    cin>>carid;
    cout<<endl;
    int index=findcar(carid);
    if(index==-1)
    {
        cout<<"car not found"<<endl;
    }
    else
    {
        cout<<carlist[index];
    }
    cout<<"\n---------------------------------------------------\n";
}
void Rentalsystem::availiblecar()
{
    Date start_date,end_date;
    cout<<"\n\nEnter rental start date: ";
    start_date.readd();
    cout<<"\nEnter rental end date: ";
    end_date.readd();
    int flage=carcount;
    for(int i=0; i<carcount; i++)
    {
        if(carlist[i].availabe(start_date,end_date))
        {
            cout<<carlist[i];
        }
        else{flage--;}
        cout<<"\n---------------------------------------------------\n";
    }
    if(flage==0)
    {
        cout<<"\n\t\t\t\tno cars availible\n";
        cout<<"\n------------------------------------------------------\n";
    }
}
void Rentalsystem::customer_history()
{
    int customerid;
    cout<<"\n\nEnter customer's id: ";
    cin>>customerid;
    cout<<endl;
    int i=findcus(customerid);
    if(i==-1)
    {
        cout<<"Customer not found"<<endl;
    }
    else
    {
        cout<<cuslist[i];
    }
    cout<<"\n---------------------------------------------------\n";
}
void Rentalsystem::report()
{
    cout<<setw(40)<<"#Customers' Rental History#:"<<endl;
    for(int i=0; i<cuscount; i++)
    {
        cout<<"Customer number "<<i+1<<" details: "<<endl;
        cout<<cuslist[i]<<endl;
        cout<<"\n---------------------------------------------------\n";
    }

    cout<<setw(40)<<"#cars' Rental History#:"<<endl;
    for(int i=0; i<carcount; i++)
    {
        cout<<"\ncar number "<<i+1<<" details: \n"<<endl;
        cout<<carlist[i]<<endl;
        cout<<"\n---------------------------------------------------\n";
    }

}
Rentalsystem::~Rentalsystem()
{
    //dtor
}
