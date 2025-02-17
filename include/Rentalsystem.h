#ifndef RENTALSYSTEM_H
#define RENTALSYSTEM_H
#include <car.h>
#include <customer.h>
#include <invoice.h>
#include <reservation.h>
class Rentalsystem
{
    public:
        Rentalsystem();
        virtual ~Rentalsystem();
        int findcar(int carid);
        int findcus(int cusid);
        void cusvscar(int& cusid, int& carid);
        void addcar();
        void addcustomer();
        void rentcar();
        void cardetails();
        void availiblecar();
        void customer_history();
        void report();
    protected:

    private:
        car* carlist;
        customer* cuslist;
        int carcount=0;
        int cuscount=0;

};

#endif // RENTALSYSTEM_H
