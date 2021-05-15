//more details refer the txt file and png given

#include <stdio.h>

int main(){
    //variable declaration
    int unit;
    float total,amout,fixedcharge;

    printf("Enter the unit consumed:");
    scanf("%d",&unit);

    if(unit <=40){
        amout = unit * 1.5;
        fixedcharge = 90;
    }else if(40<unit<=50){
        //first 40 unit charge is 60(40*1.5)
        //next, removing those 40 units from total units and caculated and added
        amout = 60 +((unit-40) * 3.15);
        fixedcharge = 90;
    }else if(50<unit<=100){
        //first 40 unit charge is 60,and 40-50 is 157.5(50*3.15)
        amout= 60+157.5+((unit-50)*3.7) ;
        fixedcharge = 90;
    }else if(100<unit<=150){
        //first 40 unit charge is 60 , 50 unit charge is 157.5 and 100 unit is 370
        amout= 60+157.5+ 370+((unit-100) * 4.8) ;
        fixedcharge = 100;
    }else if(150<unit<=200){
        //first 40 unit 60, 50 unit 157.5 , 100 unit 370 and 150 unit 720
        amout= 60+157.5+370+720+((unit-150) * 6.4) ;
        fixedcharge = 100;
    }

    total = amout+ fixedcharge;

    printf("Bill Amout = %2.f\n",total);

    return 0;
}