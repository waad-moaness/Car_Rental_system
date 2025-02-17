#include <iostream>
#include <windows.h>
#include <bits/stdc++.h>
#include <Rentalsystem.h>
#include <car.h>
#include <customer.h>
using namespace std;

int main(){
     Rentalsystem rsystem ;
     int c=-1;
     while(c!=0){

    cout<<"\t\t\t\t\t*********************"<<endl;
    cout<<"\t\t\t\t\t* CAR RENTAL SYSTEM *"<<endl;
    cout<<"\t\t\t\t\t*********************"<<endl;
    cout<<"\n1) ADD A CAR ";
    cout<<"\n2) ADD CUSTOMER ";
    cout<<"\n3) RENT A CAR ";
    cout<<"\n4) VIEW AVAILIBLE CARS";
    cout<<"\n5) VIEW CAR DETAILS";
    cout<<"\n6) VIEW CUSTOMER RENTAL HISTORY ";
    cout<<"\n7) SYSTEM REPORT";
    cout<<"\n0) EXIT";
     cout<<"\n-------------------------------------------------------\n";
    cout<<"\n \t\t\tENTER YOUR CHOICE: ";
    cin>>c;
    system("cls");

    switch(c){
case 1:
    //add car
    cout<<"\n\t\t\t\t1) ADD A CAR ";
    rsystem.addcar();
    break;
case 2:
    //add customer
    cout<<"\n\t\t\t\t2) ADD CUSTOMER ";
    rsystem.addcustomer();
    break;
case 3:
    //rent car
     cout<<"\n\t\t\t\t3) RENT A CAR ";
     rsystem.rentcar();
    break;
case 4:
    //view availible car
    cout<<"\n\t\t\t\t4) VIEW AVAILIBLE CARS";
    rsystem.availiblecar();
    break;
case 5:
    //view car
    cout<<"\n\t\t\t\t5) VIEW CAR DETAILS";
    rsystem.cardetails();
    break;
case 6:
    //customer history
    cout<<"\n\t\t\t\t6) VIEW CUSTOMER RENTAL HISTORY\n\n ";
    rsystem.customer_history();
    break;
case 7:
    //report
    cout<<"\n\t\t\t\t7) SYSTEM REPORT\n\n";
    rsystem.report();
    break;
case 0:
    cout <<"\n\t\t\t\tTHANKS ^0^\n\n\n";
    break;
default:
    cout<<"\n##PLEASE ENTAR VALIED NUMBER!\n";
     Sleep(3000);
   }
}

    return 0;
}
