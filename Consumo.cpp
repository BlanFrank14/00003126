#include <iostream>
using namespace std;
float consumo=0,total=0;

main () {
    cout<<"Ingrese el consumo";
    cin>>consumo;
    if (consumo<=10){
        total=2.29 + 0.10;
     }
     else if (consumo>10<=20){
        total=(consumo*0.21)+ 0.10;
     }
     else if (consumo>20<=30){
        total=(consumo*0.37)+ 1.8;
     }
     else{
        total=(consumo*0.76)+ 3.0;
     }
     cout<<"El total es:"<<total<<endl;
     return 0;
}