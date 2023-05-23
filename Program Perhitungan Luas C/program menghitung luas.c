#include<stdio.h>

int main()
{
    int pilih,pilihan,ulang,awal;
    float sisi_alas,sisi_atas,tinggi,alas,sisi,panjang,lebar,jari_jari,diameter,luas,d1,d2;
    awal:
    system("cls");
    printf("\t\t\t\tPROGRAM MENGHITUNG LUAS\n");
    printf("\t\t\t\t    SATUAN DALAM CM\n");
    printf("\t\t\t\t    BY MUHAMAD FADLY\n");
    printf("pilih = \n");
    printf("1.trapesium\n");
    printf("2.segitiga\n");
    printf("3.persegi\n");
    printf("4.persegi panjang\n");
    printf("5.lingkaran\n");
    printf("6.jajargenjang\n");
    printf("7.layang-layang\n");
    printf("8.belah ketupat\n");
    printf("Masukan pilihanmu = ");
    scanf("%d",&pilih);

     switch (pilih)
    {
        case 1:
        trapesium:
            printf("\nLuas Trapesium\n");
            printf("Masukan sisi alas = ");
            scanf("%f", &sisi_alas);
            printf("Masukan sisi atas = ");
            scanf("%f", &sisi_atas);
            printf("Masukan tinggi = ");
            scanf("%f", &tinggi);
            luas = ((sisi_atas + sisi_alas)*0.5)*tinggi;
            printf("luas trapesium adalah %f",luas);
            printf("cm^2\n\n");

            printf("Apakah anda ingin menggunakannya lagi?\n");
            printf("1.Iya\n");
            printf("2.Tidak\n");
            scanf("%d",&ulang);
            if (ulang == 1)
                {
                    goto awal;
                }
            else if (ulang == 2)
                {
                    printf("\nTerima kasih telah menggunakan program ini\n");
                }
            break;

        case 2:
        segitiga:
            printf("\nLuas Segitiga\n");
            printf("Masukan alas = ");
            scanf("%f", &alas);
            printf("Masukan tinggi = ");
            scanf("%f", &tinggi);
            luas = 0.5*alas*tinggi;
            printf("luas segitiga adalah %f",luas);
            printf("cm^2\n\n");

            printf("Apakah anda ingin menggunakannya lagi?\n");
            printf("1.Iya\n");
            printf("2.Tidak\n");
            scanf("%d",&ulang);
            if (ulang == 1)
                {
                    goto awal;
                }
            else if (ulang == 2)
                {
                    printf("\nTerima kasih telah menggunakan program ini\n");
                }
            break;

        case 3:
        persegi:
            printf("\nLuas Persegi\n");
            printf("Masukan sisi = ");
            scanf("%f", &sisi);
            luas = sisi*sisi;
            printf("luas persegi adalah %f",luas);
            printf("cm^2\n\n");

            printf("Apakah anda ingin menggunakannya lagi?\n");
            printf("1.Iya\n");
            printf("2.Tidak\n");
            scanf("%d",&ulang);
            if (ulang == 1)
                {
                    goto awal;
                }
            else if (ulang == 2)
                {
                    printf("\nTerima kasih telah menggunakan program ini\n");
                }
            break;

        case 4:
        persegi_panjang:
            printf("\nLuas persegi panjang\n");
            printf("Masukan panjang = ");
            scanf("%f", &panjang);
            printf("Masukan lebar = ");
            scanf("%f", &lebar);
            luas = panjang*lebar;
            printf("luas persegi panjang adalah %f",luas);
            printf("cm^2\n\n");

            printf("Apakah anda ingin menggunakannya lagi?\n");
            printf("1.Iya\n");
            printf("2.Tidak\n");
            scanf("%d",&ulang);
            if (ulang == 1)
                {
                    goto awal;
                }
            else if (ulang == 2)
                {
                    printf("\nTerima kasih telah menggunakan program ini\n");
                }
            break;

        case 5:
        lingkaran:
            printf("\nLuas Lingkaran\n");
            printf("pilihan = \n");
            printf("1.Menggunakan jari-jari\n");
            printf("2.Menggunakan diameter\n");
            scanf("%d", &pilihan);

            if (pilihan == 1)
                {
                    printf("Masukan jari-jari = ");
                    scanf("%f", &jari_jari);
                    luas = 3.14*jari_jari*jari_jari;
                    printf("luas lingkaran adalah %f",luas);
                    printf("cm^2\n\n");

                    printf("Apakah anda ingin menggunakannya lagi?\n");
                    printf("1.Iya\n");
                    printf("2.Tidak\n");
                    scanf("%d",&ulang);
                    if (ulang == 1)
                        {
                            goto awal;
                        }
                    else if (ulang == 2)
                        {
                            printf("\nTerima kasih telah menggunakan program ini\n");
                        }
                }
            else if (pilihan == 2)
                {
                    printf("Masukan diameter = ");
                    scanf("%f", &diameter);
                    luas = 2*3.14*diameter;
                    printf("luas lingkaran adalah %f",luas);
                    printf("cm^2\n\n");

                    printf("Apakah anda ingin menggunakannya lagi?\n");
                    printf("1.Iya\n");
                    printf("2.Tidak\n");
                    scanf("%d",&ulang);
                    if (ulang == 1)
                        {
                            goto awal;
                        }
                    else if (ulang == 2)
                        {
                            printf("\nTerima kasih telah menggunakan program ini\n");
                        }
                }
             break;

        case 6:
        jajargenjang:
            printf("\nLuas jajargenjang\n");
            printf("Masukan alas = ");
            scanf("%f", &alas);
            printf("Masukan tinggi = ");
            scanf("%f", &tinggi);
            luas = alas*tinggi;
            printf("luas jajargenjang adalah %f",luas);
            printf("cm^2\n\n");

            printf("Apakah anda ingin menggunakannya lagi?\n");
            printf("1.Iya\n");
            printf("2.Tidak\n");
            scanf("%d",&ulang);
            if (ulang == 1)
                {
                    goto awal;
                }
            else if (ulang == 2)
                {
                    printf("\nTerima kasih telah menggunakan program ini\n");
                }
            break;

       case 7:
       layang_layang:
            printf("\nLuas layang-layang\n");
            printf("Masukan diameter 1 = ");
            scanf("%f", &d1);
            printf("Masukan diameter 2 = ");
            scanf("%f", &d2);
            luas = 0.5*d1*d2;
            printf("luas layang-layang adalah %f",luas);
            printf("cm^2\n\n");

            printf("Apakah anda ingin menggunakannya lagi?\n");
            printf("1.Iya\n");
            printf("2.Tidak\n");
            scanf("%d",&ulang);
            if (ulang == 1)
                {
                    goto awal;
                }
            else if (ulang == 2)
                {
                    printf("\nTerima kasih telah menggunakan program ini\n");
                }
            break;

        case 8:
        belah_ketupat:
            printf("\nLuas belah ketupat\n");
            printf("Masukan diameter 1 = ");
            scanf("%f", &d1);
            printf("Masukan diameter 2 = ");
            scanf("%f", &d2);
            luas = 0.5*d1*d2;
            printf("luas belah ketupat adalah %f",luas);
            printf("cm^2\n\n");

            printf("Apakah anda ingin menggunakannya lagi?\n");
            printf("1.Iya\n");
            printf("2.Tidak\n");
            scanf("%d",&ulang);
            if (ulang == 1)
                {
                    goto awal;
                }
            else if (ulang == 2)
                {
                    printf("\nTerima kasih telah menggunakan program ini\n");
                }
            break;
    }
    return 0;
}
