#include<stdio.h>
#include<math.h>

main(){
    int n;
    float x,y,z,m1,m2,m3,m4,mm1,mm2,mm3,mm4;
    printf("Enter the value of x , y and z : ");
    scanf("%f,%f,%f",&x,&y,&z);

    m1=(x+y+z)/3;

    m2=(pow(x,2)+pow(y,2)+pow(z,2))/3;
    m3=(pow(x,3)+pow(y,3)+pow(z,3))/3;
    m4=(pow(x,4)+pow(y,4)+pow(z,4))/3;
    mm1=m1-m1;
    
    mm2=m2-pow(m1,2);
    mm3=m3-3*m1*m2+2*pow(m1,3);
    mm4=m4-4*m3*m1+6*m2*pow(m1,2)-3*pow(m1,4);
    printf("\nm1=%f",m1);
    printf("\nm2=%f",m2);
    printf("\nm2=%f",m3);
    printf("\nm2=%f",m4);
    printf("\nmm1=%f",mm1);
    printf("\nmm2=%f",mm2);
    printf("\nmm3=%f",mm3);
    printf("\nmm4=%f",mm4);
    getch( ;

}