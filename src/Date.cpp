#include "Date.h"

Date::Date()
{
    //ctor
}
Date::Date(int day,int month,int year):dday(day),dmonth(month),dyear(year){}
void Date::readd(){
    char ch;
    cin>>dday>>ch>>dmonth>>ch>>dyear;
    cout<<endl;
}
int Date::getdate(Date d){
    int days=((d.dyear-dyear)*12)*30;
    days+=(d.dmonth-dmonth)*30;
    days+=d.dday-dday;
    return days;
}
ostream& operator<<(ostream& coutt, Date d){
    coutt<<d.dday<<"/"<<d.dmonth<<"/"<<d.dyear<<endl;
    return coutt;

}
bool Date::d2_d1(Date start1,Date end1,Date start2,Date end2)
{
    if(start1>end2 || start2>end1)
        return false;
    return true;
}
bool Date::operator>(Date d)
{
    return tie(dyear,dmonth,dday)>tie(d.dyear,d.dmonth,d.dday);
}

Date::~Date()
{
    //dtor
}
