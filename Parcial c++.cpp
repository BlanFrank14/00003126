#include <iostream>
using namespace std;
int horas,pago,total;

main () {
    cout<<"Ingrese cuantas horas a la semana trabajas";
     cin >>horas;
     cout<<"Ingrese cuanto le pagan por horas";
     cin >>pago;
     total = horas * pago;
     cout<<"Tu salario semanal es de:"<<total<<endl;
    return 0;
}