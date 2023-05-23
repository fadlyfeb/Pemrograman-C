#include<stdio.h>

int main()
{
    int pilih,suhu;
    float kelvin,celcius,fahrenheit,reamur,rankine;
    printf("Pilih = \n");
    printf("1.fahrenheit\n");
    printf("2.reamur\n");
    printf("3.kelvin\n");
    printf("4.celcius\n");
    printf("5.rankine\n");
    printf("Masukan pilihanmu =\n");
    scanf("%d",&pilih);

    switch (pilih)
    {
        case 1:
        pilihan_suhu:
            printf("suhu\n");
            printf("1.celcius\n");
            printf("2.reamur\n");
            printf("3.kelvin\n");
            printf("4.rankine\n");
            printf("Masukan suhu pilihanmu\n");
            scanf("%d",&suhu);

            if (suhu == 1)
            {
                printf("Masukan suhu dalam fahrenheit = ");
                scanf("%f", &fahrenheit);
                celcius=(fahrenheit-32)*5/9;
                printf("Suhu dalam celcius = %f",celcius);
                printf(" C\n");
            }
            else if (suhu == 2)
            {
                printf("Masukan suhu dalam fahrenheit = ");
                scanf("%f", &fahrenheit);
                celcius=(fahrenheit-32)*5/9;
                reamur= celcius*4/5;
                printf("Suhu dalam reamur = %f",reamur);
                printf(" Re\n");
            }
            else if (suhu == 3)
            {
                printf("Masukan suhu dalam fahrenheit = ");
                scanf("%f", &fahrenheit);
                celcius=(fahrenheit-32)*5/9;
                kelvin= celcius + 273.15;
                printf("Suhu dalam kelvin = %f",kelvin);
                printf(" K\n");
            }
            else if (suhu == 4)
            {
                printf("Masukan suhu dalam fahrenheit = ");
                scanf("%f", &fahrenheit);
                celcius=(fahrenheit-32)*5/9;
                rankine= (celcius*9/5) + 491.67;
                printf("Suhu dalam rankine = %f",rankine);
                printf(" R\n");
            }
            else if (suhu >4)
            {
                printf("Silahkan pilih ulang\n");
                goto pilihan_suhu;
            }
            break;

        case 2:
        pilih_suhu:
            printf("suhu\n");
            printf("1.celcius\n");
            printf("2.fahrenheit\n");
            printf("3.kelvin\n");
            printf("4.rankine\n");
            printf("Masukan suhu pilihanmu\n");
            scanf("%d",&suhu);

            if (suhu == 1)
            {
                printf("Masukan suhu dalam reamur = ");
                scanf("%f", &reamur);
                celcius=reamur*5/4;
                printf("Suhu dalam celcius = %f",celcius);
                printf(" C\n");
            }
            else if (suhu == 2)
            {
                printf("Masukan suhu dalam reamur = ");
                scanf("%f", &reamur);
                celcius=reamur*5/4;
                fahrenheit= (celcius*9/5)+32;
                printf("Suhu dalam fahrenheit = %f",fahrenheit);
                printf(" F\n");
            }
            else if (suhu == 3)
            {
                printf("Masukan suhu dalam reamur = ");
                scanf("%f", &reamur);
                celcius=reamur*5/4;
                kelvin= celcius + 273.15;
                printf("Suhu dalam kelvin = %f",kelvin);
                printf(" K\n");
            }
            else if (suhu == 4)
            {
                printf("Masukan suhu dalam reamur = ");
                scanf("%f", &reamur);
                celcius=reamur*5/4;
                rankine= (celcius*9/5)+491.67;
                printf("Suhu dalam rankine = %f",rankine);
                printf(" R\n");
            }
            else if (suhu >4)
            {
                printf("Silahkan pilih ulang\n");
                goto pilih_suhu;
            }
            break;

        case 3:
        pemilihan_suhu:
            printf("suhu\n");
            printf("1.celcius\n");
            printf("2.reamur\n");
            printf("3.fahrenheit\n");
            printf("4.rankine\n");
            printf("Masukan suhu pilihanmu\n");
            scanf("%d",&suhu);

            if (suhu == 1)
            {
                printf("Masukan suhu dalam kelvin = ");
                scanf("%f", &kelvin);
                celcius=kelvin - 273.15;
                printf("Suhu dalam celcius = %f",celcius);
                printf(" C\n");
            }
            else if (suhu == 2)
            {
                printf("Masukan suhu dalam kelvin = ");
                scanf("%f", &kelvin);
                celcius=kelvin - 273.15;
                reamur= celcius*4/5;
                printf("Suhu dalam reamur = %f",reamur);
                printf(" Re\n");
            }
            else if (suhu == 3)
            {
                printf("Masukan suhu dalam kelvin = ");
                scanf("%f", &kelvin);
                celcius=kelvin - 273.15;
                fahrenheit= (celcius*9/5)+32;
                printf("Suhu dalam fahrenheit = %f",fahrenheit);
                printf(" F\n");
            }
            else if (suhu == 4)
            {
                printf("Masukan suhu dalam kelvin = ");
                scanf("%f", &kelvin);
                celcius=kelvin - 273.15;
                rankine= (celcius*9/5) + 491.67;
                printf("Suhu dalam rankine = %f",rankine);
                printf(" R\n");
            }
            else if (suhu >4)
            {
                printf("Silahkan pilih ulang\n");
                goto pemilihan_suhu;
            }
            break;

        case 4:
        pemilih_suhu:
            printf("suhu\n");
            printf("1.kelvin\n");
            printf("2.reamur\n");
            printf("3.fahrenheit\n");
            printf("4.rankine\n");
            printf("Masukan suhu pilihanmu\n");
            scanf("%d",&suhu);

            if (suhu == 1)
            {
                printf("Masukan suhu dalam celcius = ");
                scanf("%f", &celcius);
                kelvin= celcius + 273.15;
                printf("Suhu dalam kelvin = %f",kelvin);
                printf(" K\n");
            }
            else if (suhu == 2)
            {
                printf("Masukan suhu dalam celcius = ");
                scanf("%f", &celcius);
                reamur= celcius*4/5;
                printf("Suhu dalam reamur = %f",reamur);
                printf(" Re\n");
            }
            else if (suhu == 3)
            {
                printf("Masukan suhu dalam celcius = ");
                scanf("%f", &celcius);
                fahrenheit= (celcius*9/5)+32;
                printf("Suhu dalam fahrenheit = %f",fahrenheit);
                printf(" F\n");
            }
            else if (suhu == 4)
            {
                printf("Masukan suhu dalam celcius = ");
                scanf("%f", &celcius);
                rankine= (celcius*9/5) + 491.67;
                printf("Suhu dalam rankine = %f",rankine);
                printf(" R\n");
            }
            else if (suhu >4)
            {
                printf("Silahkan pilih ulang\n");
                goto pemilih_suhu;
            }
            break;

       case 5:
       milih_suhu:
            printf("suhu\n");
            printf("1.celcius\n");
            printf("2.reamur\n");
            printf("3.fahrenheit\n");
            printf("4.kelvin\n");
            printf("Masukan suhu pilihanmu\n");
            scanf("%d",&suhu);

            if (suhu == 1)
            {
                printf("Masukan suhu dalam rankine = ");
                scanf("%f", &rankine);
                celcius=(rankine - 491.67)*5/9;
                printf("Suhu dalam celcius = %f",celcius);
                printf(" C\n");
            }
            else if (suhu == 2)
            {
                printf("Masukan suhu dalam rankine = ");
                scanf("%f", &rankine);
                celcius=(rankine - 491.67)*5/9;
                reamur= celcius*4/5;
                printf("Suhu dalam reamur = %f",reamur);
                printf(" Re\n");
            }
            else if (suhu == 3)
            {
                printf("Masukan suhu dalam rankine = ");
                scanf("%f", &rankine);
                celcius=(rankine - 491.67)*5/9;
                fahrenheit= (celcius*9/5)+32;
                printf("Suhu dalam fahrenheit = %f",fahrenheit);
                printf(" F\n");
            }
            else if (suhu == 4)
            {
                printf("Masukan suhu dalam rankine = ");
                scanf("%f", &rankine);
                celcius=(rankine - 491.67)*5/9;
                kelvin= celcius + 273.15;
                printf("Suhu dalam kelvin = %f",kelvin);
                printf(" K\n");
            }
            else if (suhu >4)
            {
                printf("Silahkan pilih ulang\n");
                goto milih_suhu;
            }
            break;


    }
    return 0;
}
