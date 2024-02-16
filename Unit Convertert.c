#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void Temperature(int choice){
switch (choice)
    {
        case 1: {   printf("If known value is in \n Celcius press 1 \n Farenheit press 2 \n Kelvin press 3\n");
                    int cfk;
                    float c, f, k;
                    scanf("%d", &cfk);
                    switch (cfk)
                    {
                    case 1: {   printf("Input temperature in Celcius\n");
                                scanf("%f",&c);
                                f=c*(9/5)+32;
                                k=c+273;
                                printf(" Farenheit:%.2f °F\n Kelvin:%.2f K",f,k);
                            }
                    break;
                    case 2: {   printf("Input temperature in Farenheit\n");
                                scanf("%f",&f);
                                c=(f-32)*(5/9);
                                k=(f-32)*(5/9)+273;
                                printf(" Celcius:%.2f °C \n Kelvin:%.2f K",c,k);
                            }
                    break;
                    case 3: {   printf("Input temperature in Kelvin\n");
                                scanf("%f",&k);
                                c=k-273;
                                f=(k-273)*(9/5)+32;
                                printf(" Celcius:%.2f °C \n Farenheit:%.2f °F",c,f);
                            }
                    break;
                    default: printf("Invalid choice");
                    }
        break;
        }
    }
}
int Length(int choice){

    switch (choice)
    {
        case 2: {   printf("If known value is in \n Meter press 1 \n Feet press 2 \n Mile press 3\n");
                        int mftml;
                        float m, ft, ml;
                        scanf("%d", &mftml);
                        switch (mftml)
                        {
                        case 1: {   printf("Input Length in Meter\n");
                                    scanf("%f",&m);
                                    ft=m*3.28084;
                                    ml=m/1609.34;
                                    printf(" Feet:%.2f feet\n Mile:%.2f mile",ft,ml);
                                }
                        break;
                        case 2: {   printf("Input Length in Feet\n");
                                    scanf("%f",&ft);
                                    m=ft/3.28084;
                                    ml=ft/5280;
                                    printf(" Meter:%.2f m \n Mile:%.2f mile",m,ml);
                                }
                        break;
                        case 3: {   printf("Input Length in Mile\n");
                                    scanf("%f",&ml);
                                    m=ml*1609.34;
                                    ft=ml*5280;
                                    printf(" Meter:%.2f m \n Feet:%.2f ft",m,ft);
                                }
                        break;
                        default: printf("Invalid choice");
                        }
            }
    }
}

int Weight(int choice){
    switch (choice)
    {
        case 2: {   printf("If known value is in \n Meter press 1 \n Feet press 2 \n Mile press 3\n");
                        int mftml;
                        float m, ft, ml;
                        scanf("%d", &mftml);
                        switch (mftml)
                        {
                        case 1: {   printf("Input Length in Meter\n");
                                    scanf("%f",&m);
                                    ft=m*3.28084;
                                    ml=m/1609.34;
                                    printf(" Feet:%.2f feet\n Mile:%.2f mile",ft,ml);
                                }
                        break;
                        case 2: {   printf("Input Length in Feet\n");
                                    scanf("%f",&ft);
                                    m=ft/3.28084;
                                    ml=ft/5280;
                                    printf(" Meter:%.2f m \n Mile:%.2f mile",m,ml);
                                }
                        break;
                        case 3: {   printf("Input Length in Mile\n");
                                    scanf("%f",&ml);
                                    m=ml*1609.34;
                                    ft=ml*5280;
                                    printf(" Meter:%.2f m \n Feet:%.2f ft",m,ft);
                                }
                        break;
                        default: printf("Invalid choice");
                        }
            }
            case 3: {   printf("If known value is in \n KG press 1 \n Pound press 2 \n Gram press 3\n");
                        int kpg;
                        float k, p, g;
                        scanf("%d", &kpg);
                        switch (kpg)
                        {
                        case 1: {   printf("Input Length in KG\n");
                                    scanf("%f",&k);
                                    p=k*2.20462;
                                    g=k*1000;
                                    printf(" Pound:%.2f pound\n Gram:%.2f gram",p,g);
                                }
                        break;
                        case 2: {   printf("Input Length in Pound\n");
                                    scanf("%f",&p);
                                    k=p/2.20462;
                                    g=p*0.00220462;
                                    printf(" KG:%.2f kg \n Gram:%f gram",k,g);
                                }
                        break;
                        case 3: {   printf("Input Length in Gram\n");
                                    scanf("%f",&g);
                                    k=g/1000;
                                    p=g*0.00220462;
                                    printf("KG:%.2f kg \n Pound:%.2f pound",k,p);
                                }
                        break;
                        default: printf("Invalid choice");
                        }
        }
    }
}

int main()
{
    int cont;
    bool flag=true;
    do{
    printf("\n                          WELCOME TO UNIT CONVERTER\n");


    printf("\n Press 1 to Convert Temperature \n Press 2 to Convert Length \n Press 3 to Convert Weight\n");
    int cho;
    scanf("%d", &cho);
    fflush(stdin);
    if (cho==1){
        Temperature(cho);
    }
    else if (cho==2){
        Length(cho);
    }
    else if (cho==3){
        Weight(cho);
    }
    else{
        printf("\nInvalid Choice");
    }
    printf("\nEnter 0 to Exit \n Enter any key to continue\n");
    scanf("%d", &cont);
    fflush(stdin);
    if(cont==0){
        flag=false;
        break;
    }

    }while(flag==true);

return 0;
}
