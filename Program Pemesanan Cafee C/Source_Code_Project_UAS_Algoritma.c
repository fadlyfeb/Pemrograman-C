#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

void tempat(){
    int f,cari;
    printf("\t\t\t ================================\n");
    printf("\t\t\t|       [ INPUT Caffe ]          |\n");
    printf("\t\t\t ================================\n");
    printf("\t\t\t| 1. Jalan Medan Merdeka         |\n");
    printf("\t\t\t| 2. Jalan Fatmawati             |\n");
    printf("\t\t\t| 3. Jalan Jendral Sudirman      |\n");
    printf("\t\t\t| 4. Jalan Taman Fatahillah      |\n");
    printf("\t\t\t ================================\n\n");
    printf("Jumlah Caffe: ");
    scanf("%d", &f);
    printf("---------------------------------------------------------------------------------\n");
    int st[f];
    for(int i=1; i<=f; i++){
        printf("Masukkan Kode Caffe ke-%d: ", i);
        scanf("%d", &st[i]);
    }
    printf("Masukkan Kode Caffe yang Dicari: ");
    scanf("%d", &cari);
    int ketemu=0;
    int b;
    b=0;
     for(int i=1; i<=f; i++){
        if(st[i]==cari){
            ketemu=1;
            printf("Kode Caffe %d Ada di ", cari, i);
            if(cari==1){
                printf("Jalan Medan Merdeka");
                break;
            }
            else if(cari==2){
                printf("Jalan Fatmawati");
                break;
            }
            else if(cari==3){
                printf("Jalan Jendral Sudirman");
                break;
            }
            else if(cari==4){
                printf("Jalan Taman Fatahillah");
                break;
            }
            b++;
    }
        }
    if(ketemu==0){
        printf("\nData yang Dicari Tidak Ada");
    }

}

void AAppertizer(){
        printf("\n\t\t==================================================\n");
        printf("\t\t|           [ DAFTAR Menu Appertizer ]           |\n");
        printf("\t\t==================================================\n");
        printf("\t\t|    Kode    |    Jenis Menu      |     Harga    |\n");
        printf("\t\t==================================================\n");
        printf("\t\t|     1      |  Butter Maple      |   Rp 40.000  |\n");
        printf("\t\t|     2      |  Kani Mentai       |   Rp 45.000  |\n");
        printf("\t\t|     3      |  Egg Toast         |   Rp 38.000  |\n");
        printf("\t\t|     4      |  Cured Salmon      |   Rp 61.000  |\n");
        printf("\t\t|     5      |  Smoked Beef       |   Rp 61.000  |\n");
        printf("\t\t==================================================\n");
}

void MMainCourse(){
        printf("\n\t\t=====================================================\n");
        printf("\t\t|           [ DAFTAR Menu MainCourse ]              |\n");
        printf("\t\t=====================================================\n");
        printf("\t\t|    Kode    |    Jenis Menu         |     Harga    |\n");
        printf("\t\t=====================================================\n");
        printf("\t\t|     1      |  Nasi Gorang Dendeng  |   Rp 49.000  |\n");
        printf("\t\t|     2      |  Mie Goreng Tek-Tek   |   Rp 35.000  |\n");
        printf("\t\t|     3      |  Mie Ayam             |   Rp 36.000  |\n");
        printf("\t\t|     4      |  Shirataki            |   Rp 47.000  |\n");
        printf("\t\t|     5      |  Carbonara Fettuchine |   Rp 30.000  |\n");
        printf("\t\t=====================================================\n");
}

void MMinumanDingin(){
    printf("\n\t\t========================================================\n");
    printf("\t\t|           [ DAFTAR Menu Minuman Dingin ]             |\n");
    printf("\t\t========================================================\n");
    printf("\t\t|    Kode    |    Jenis Menu            |     Harga    |\n");
    printf("\t\t========================================================\n");
    printf("\t\t|     1      |  Strawberry Yoghurt Ice  |   Rp 41.000  |\n");
    printf("\t\t|     2      |  Lemon Sprite Ice        |   Rp 38.000  |\n");
    printf("\t\t|     3      |  Classic Dark Ice        |   Rp 32.000  |\n");
    printf("\t\t|     4      |  Classic White Ice       |   Rp 42.000  |\n");
    printf("\t\t|     5      |  Classic Dark Milk Ice   |   Rp 35.000  |\n");
    printf("\t\t|     6      |  Cool Chocolate Float    |   Rp 45.000  |\n");
    printf("\t\t|     7      |  Matcha Ice              |   Rp 38.000  |\n");
    printf("\t\t========================================================\n");
}

void MMinumanPanas(){
    printf("\n\t\t========================================================\n");
    printf("\t\t|            [ DAFTAR Menu Minuman Panas ]             |\n");
    printf("\t\t========================================================\n");
    printf("\t\t|    Kode    |    Jenis Menu            |     Harga    |\n");
    printf("\t\t========================================================\n");
    printf("\t\t|     1      |  Classic Dark Hot        |   Rp 30.000  |\n");
    printf("\t\t|     2      |  Classic White Hot       |   Rp 40.000  |\n");
    printf("\t\t|     3      |  Classic Dark Milk Hot   |   Rp 34.000  |\n");
    printf("\t\t|     4      |  Wedang Jahe             |   Rp 27.000  |\n");
    printf("\t\t|     5      |  hocolate Herbs Hot      |   Rp 34.000  |\n");
    printf("\t\t|     6      |  Kunyit Asam Hot         |   Rp 25.000  |\n");
    printf("\t\t|     7      |  Matcha Hot              |   Rp 36.000  |\n");
    printf("\t\t========================================================\n");
}

void DDessert(){
        printf("\n\t\t=====================================================\n");
        printf("\t\t|             [ DAFTAR Menu Dessert ]               |\n");
        printf("\t\t=====================================================\n");
        printf("\t\t|    Kode    |    Jenis Menu         |     Harga    |\n");
        printf("\t\t=====================================================\n");
        printf("\t\t|     1      |  Chocolate Cake       |   Rp 35.000  |\n");
        printf("\t\t|     2      |  Carrot Cake          |   Rp 30.000  |\n");
        printf("\t\t|     3      |  Milky Banofree       |   Rp 36.000  |\n");
        printf("\t\t|     4      |  Regal Choco Pudding  |   Rp 34.000  |\n");
        printf("\t\t|     5      |  Cheese Cake          |   Rp 35.000  |\n");
        printf("\t\t=====================================================\n");
}

void waktu(){
    time_t t;
    time(&t);
    char date[5][10];
    sscanf(ctime(&t), "%s %s %s %s %s", date[0], date[1], date[2], date[3], date[4]);
    if(strcmp(date[0], "Mon") == 0)
        strcpy(date[0], "Senin");
    else if(strcmp(date[0], "Tue") == 0)
        strcpy(date[0], "Selasa");
    else if(strcmp(date[0], "Wed") == 0)
        strcpy(date[0], "Rabu");
    else if(strcmp(date[0], "Thu") == 0)
        strcpy(date[0], "Kamis");
    else if(strcmp(date[0], "Fri") == 0)
        strcpy(date[0], "Jumat");
    else if(strcmp(date[0], "Sat") == 0)
        strcpy(date[0], "Sabtu");
    else
        strcpy(date[0], "Minggu");

    if(strcmp(date[1], "Jan") == 0)
        strcpy(date[1], "Januari");
    else if(strcmp(date[1], "Feb") == 0)
        strcpy(date[1], "Februari");
    else if(strcmp(date[1], "Mar") == 0)
        strcpy(date[1], "Maret");
    else if(strcmp(date[1], "Apr") == 0)
        strcpy(date[1], "April");
    else if(strcmp(date[1], "May") == 0)
        strcpy(date[1], "Mei");
    else if(strcmp(date[1], "Jun") == 0)
        strcpy(date[1], "Juni");
    else if(strcmp(date[1], "Jul") == 0)
        strcpy(date[1], "Juli");
    else if(strcmp(date[1], "Aug") == 0)
        strcpy(date[1], "Agustus");
    else if(strcmp(date[1], "Sep") == 0)
        strcpy(date[1], "September");
    else if(strcmp(date[1], "Oct") == 0)
        strcpy(date[1], "Oktober");
    else if(strcmp(date[1], "Nov") == 0)
        strcpy(date[1], "November");
    else
        strcpy(date[1], "Desember");

    printf("\n\t\t\t\t  %s, %s %s %s pukul %s\n", date[0], date[2], date[1], date[4], date[3]);
}
void swap(int *xp, int *yp){
 int temp = *xp;
 *xp = *yp;
 *yp = temp;
}

void bubblesortnaik(int arr[], int n){
    int i, j;
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}
void printArray(int arr[], int n){
    int i;
 for (i = 0; i < n; i++){
  printf("%d ", arr[i]);
 }
}
int fungsi_tahun(int tahun)
{
    int awal_tahun,jumlah_hari;
    jumlah_hari=0;
    awal_tahun=1899;
    while(awal_tahun<tahun)
    {
        if (awal_tahun==1900)
        jumlah_hari=jumlah_hari+365;

        else if((awal_tahun%4==0)||(awal_tahun%100==0)||(awal_tahun%400==0))
        jumlah_hari=jumlah_hari+366;

        else
        jumlah_hari=jumlah_hari+365;
        awal_tahun++;
    }
    return(jumlah_hari);
}

int fungsi_bulan(int tahun, int bulan_angka)
{
    int awal_bulan,jumlah_hari;
    jumlah_hari=0;
    awal_bulan=1;
    while(awal_bulan<bulan_angka)
    {
        if((awal_bulan==1)||(awal_bulan==3)||(awal_bulan==5)||(awal_bulan==7)||(awal_bulan==8)||(awal_bulan==10)||(awal_bulan==12))
        jumlah_hari=jumlah_hari+31;

        else if((awal_bulan==4)||(awal_bulan==6)||(awal_bulan==9)||(awal_bulan==11))
        jumlah_hari=jumlah_hari+30;

        else
        {
            if(tahun%100==0)
            {
                if(tahun%400==0)
                jumlah_hari=jumlah_hari+29;

                else
                jumlah_hari=jumlah_hari+28;
            }
            else if(tahun%4==0)
            jumlah_hari=jumlah_hari+29;

            else
            jumlah_hari=jumlah_hari+28;
        }
        awal_bulan++;
    }
    return(jumlah_hari);
}

int fungsi_hitung_hari(int bulan_angka, int tahun)
{
    int mulai_hari;
    mulai_hari=0;

    if(bulan_angka==1||bulan_angka==3||bulan_angka==5||bulan_angka==7||bulan_angka==8||bulan_angka==10||bulan_angka==12)
    mulai_hari=mulai_hari+31;

    else if(bulan_angka==4||bulan_angka==6||bulan_angka==9||bulan_angka==11)
    mulai_hari=mulai_hari+30;

    else
    {
        if(tahun%100==0)
        {
            if(tahun%400==0)
            mulai_hari=mulai_hari+29;

            else
            mulai_hari=mulai_hari+28;
        }
        else if(tahun%4==0)
        mulai_hari=mulai_hari+29;

        else
        mulai_hari=mulai_hari+28;
    }
    return(mulai_hari);
}

int fungsi_hitung_strip(int jumlah_hari)
{
     int sebelum_tanggal;
     sebelum_tanggal=jumlah_hari%7;
     return(sebelum_tanggal);
}

int fungsi_pilihan_bulan(int bulan_angka,char pilih)
{
    if((pilih == 'N')||(pilih == 'n'))
    {
        bulan_angka=bulan_angka+1;
        if(bulan_angka == 13)
        {
            bulan_angka=bulan_angka-12;
        }
    }
    else
    {
        bulan_angka=bulan_angka-1;
        if(bulan_angka == 0)
        {
            bulan_angka=bulan_angka+12;
        }
    }
    return(bulan_angka);
}

int fungsi_pilihan_tahun(int tahun,int bulan_angka,char pilih)
{
    if((pilih == 'N')||(pilih == 'n'))
    {
        bulan_angka=bulan_angka+1;
        if(bulan_angka == 13)
        {
            bulan_angka=bulan_angka-12;
            tahun=tahun+1;
        }
    }
    else
    {
        bulan_angka=bulan_angka-1;
        if(bulan_angka == 0)
        {
            bulan_angka=bulan_angka+12;
            tahun=tahun-1;
        }
    }
    return(tahun);
}

int fungsi_cek_bulan(int huruf)
{
    int bulan_angka;
    if(strncmp(huruf,"JANUARI",7)==0)
    bulan_angka=1;

    else if(strncmp(huruf,"FEBRUARI",8)==0)
    bulan_angka=2;

    else if(strncmp(huruf,"MARET",5)==0)
    bulan_angka=3;

    else if(strncmp(huruf,"APRIL",5)==0)
    bulan_angka=4;

    else if(strncmp(huruf,"MEI",3)==0)
    bulan_angka=5;

    else if(strncmp(huruf,"JUNI",4)==0)
    bulan_angka=6;

    else if(strncmp(huruf,"JULI",4)==0)
    bulan_angka=7;

    else if(strncmp(huruf,"AGUSTUS",7)==0)
    bulan_angka=8;

    else if(strncmp(huruf,"SEPTEMBER",9)==0)
    bulan_angka=9;

    else if(strncmp(huruf,"OKTOBER",7)==0)
    bulan_angka=10;

    else if(strncmp(huruf,"NOVEMBER",8)==0)
    bulan_angka=11;

    else if(strncmp(huruf,"DESEMBER",8)==0)
    bulan_angka=12;

    else
    {
        printf("\nTerdapat Kesalahan Dalam Penginputan Program, Silahkan Mencoba Kembali\n\n");
        main();
    }


    return(bulan_angka);
}

int fungsi_cetak_bulan(int bulan_angka)
{
    int huruf;

    if (bulan_angka==1) huruf = "JANUARI";

    else if (bulan_angka==2) huruf = "FEBRUARI";

    else if (bulan_angka==3) huruf = "MARET";

    else if (bulan_angka==4) huruf = "APRIL";

    else if (bulan_angka==5) huruf = "MEI";

    else if (bulan_angka==6) huruf = "JUNI";

    else if (bulan_angka==7) huruf = "JULI";

    else if (bulan_angka==8) huruf = "AGUSTUS";

    else if (bulan_angka==9) huruf = "SEPTEMBER";

    else if (bulan_angka==10) huruf = "OKTOBER";

    else if (bulan_angka==11) huruf = "NOVEMBER";

    else if (bulan_angka==12) huruf = "DESEMBER";

    return (huruf);
}

int fungsi_cetak(int huruf,int tahun,int sebelum_tanggal,int mulai_hari,int tanggal,int temp_bulan,int bulan_huruf,int temp_tahun)
{
    int hari;
    char petik='"';
    printf("\nMINGGU\tSENIN\tSELASA\tRABU\tKAMIS\tJUMAT\tSABTU\n");

    hari=0;
    while(hari<sebelum_tanggal)
    {
        printf("-\t");
        hari++;
    }
    hari=1;
    while(hari<=mulai_hari)
    {
        if ((strncmp(temp_bulan, bulan_huruf, 10)==0) && (hari==tanggal) && (temp_tahun==tahun))
        printf("[%d]\t",hari);

        else
        printf("%d\t",hari);

        if(sebelum_tanggal%7==6)
        printf("\n");

        sebelum_tanggal++;
        hari++;
    }
    return 0;
}

 void main(){
     int total,total1=0,total2=0,total3=0,total4=0,jumlah1,jumlah2,jumlah3,jumlah4,ulang1,ulang2,ulang3;
     char Nama[15];
     int arr[40],n,i,pilihan,kembali,bayar,pengunjung,awal;
     int tanggal, banyak, tahun, bulan_angka, sebelum_tanggal, jumlah_hari, mulai_hari,temp_tahun;
     char *huruf,bulan_huruf[12],*temp_bulan,pilih;
     int Appertizer,BM, KM, ET, CS, SB;
     BM=40000;
     KM=45000;
     ET=38000;
     CS=61000;
     SB=61000;
     int MainCourse,NGD, MGT, MA, SH, CF;
     NGD=49000;
     MGT=35000;
     MA=36000;
     SH=47000;
     CF=30000;
     int MinumanDgn, SYI, LSI, CDI, CWI,CDMI, CCF, MI;
     SYI=41000;
     LSI=38000;
     CDI=32000;
     CWI=42000;
     CDMI=35000;
     CCF=45000;
     MI=38000;
     int MinumanPns, CDH, CWH, CDMH, WH, CHH, KAH, MH;
     CDH=30000;
     CWH=40000;
     CDMH=34000;
     WH=27000;
     CHH=34000;
     KAH=25000;
     MH=36000;
     int Dessert, CHC, CRC, MB, RCP, CSC;
     CHC=35000;
     CRC=30000;
     MB=36000;
     RCP=34000;
     CSC=35000;
     awal:
     system("CLS");
     printf("\t\t\t=====================================================\n");
     printf("\t\t\t|           SELAMAT DATANG DI CAFFE ALPRO           |\n");
     printf("\t\t\t|  SEBELUM MEMESAN HARAP RESERVASI TERLEBIH DAHULU  |\n");
     printf("\t\t\t=====================================================\n\n");
     fflush(stdin);
     printf("Masukan Nama             : ");
     gets(Nama);
     fflush(stdin);
     printf("Banyak Pengunjung        : ");
     scanf("%d",&pengunjung);
     fflush(stdin);
     printf("Format Penulisan         : DESEMBER-2021\n");
     printf("Masukkan Bulan dan Tahun : ");
     fflush(stdin);
     scanf("%[^-]-%d",&bulan_huruf,&tahun);

     huruf=bulan_huruf;
     temp_bulan=bulan_huruf;
     temp_tahun=tahun;

     banyak=0;
     while (huruf[banyak])
     {
        huruf[banyak] = toupper(huruf[banyak]);
        banyak++;
     }

     bulan_angka=fungsi_cek_bulan(huruf);

     jumlah_hari=fungsi_tahun(tahun)+fungsi_bulan(tahun,bulan_angka);

     sebelum_tanggal=fungsi_hitung_strip(jumlah_hari);

     mulai_hari=fungsi_hitung_hari(bulan_angka,tahun);

     fungsi_cetak(huruf,tahun,sebelum_tanggal,mulai_hari,tanggal,temp_bulan,bulan_huruf,temp_tahun);

     //sorting
     printf("\n\nJumlah tanggal yang di pesan: ");
     scanf("%d", &n);
     for(i=0; i<n; i++){
     printf("Masukkan tanggal ke-%d= ", i+1);
     scanf("%d", &arr[i]);}
     bubblesortnaik(arr,n);
     printf("Tanggal yang dipesan: \n");
     printArray(arr,n);
     printf("\n");
     //searching
     printf("Sistem akan memproses harap tunggu sebentar......\n");
     sleep(2);
     system("CLS");
     tempat();
     printf("\n\n");
     printf("Melanjutkan ke proses pemilihan menu.....\n");
     sleep(3);
     system("CLS");

     Appertizer:
     AAppertizer();
     printf("Masukan pilihan : ");
     scanf("%d",&Appertizer);
     if (Appertizer==1) {
            Appertizer=BM;
        }
    else if (Appertizer==2) {
            Appertizer=KM;
        }
    else if (Appertizer==3) {
            Appertizer=ET;
        }
    else if (Appertizer==4) {
            Appertizer=CS;
        }
    else if (Appertizer==5) {
            Appertizer=SB;
        }
    else if (Appertizer >5) {
            printf("Tolong input sesuai pilihan\n\n");
            goto Appertizer;
        }
    printf("Masukkan Jumlah : ");
    scanf("%d",&jumlah1);
    total1=Appertizer*jumlah1;
    printf("Total : %d\n\n",total1);

    printf("Ingin pesan MainCourse?\n");
    printf("1. Ya\n");
    printf("2. Tidak\n");
    printf("Masukan Pilihan : ");
    scanf("%d",&ulang1);
    if (ulang1==1) {
    goto MainCourse;}
    else if (ulang1==2){
        printf("\nIngin pesan Minuman?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Masukan Pilihan : ");
        scanf("%d",&ulang2);
        if (ulang2==1) {
            goto Minuman;
            }
        else if (ulang2==2){
             printf("\nIngin pesan Dessert?\n");
             printf("1. Ya\n");
             printf("2. Tidak\n");
             printf("Masukan Pilihan : ");
             scanf("%d",&ulang3);
             if (ulang3==1) {
                goto Dessert;
                }
             else if (ulang3==2){
                goto Pembayaran;
                }
        }
    }
    else{goto Appertizer;};

    MainCourse:
    system("CLS");
    MMainCourse();
    printf("Masukan pilihan : ");
    scanf("%d",&MainCourse);
     if (MainCourse==1) {
            MainCourse=NGD;
        }
    else if (MainCourse==2) {
            MainCourse=MGT;
        }
    else if (MainCourse==3) {
            MainCourse=MA;
        }
    else if (MainCourse==4) {
            MainCourse=SH;
        }
    else if (MainCourse==5) {
            MainCourse=CF;
        }
    else if (MainCourse >5) {
            printf("Milky Banofree  \n\n");
            goto MainCourse;
        }
    printf("Masukkan Jumlah : ");
    scanf("%d",&jumlah2);
    total2=MainCourse*jumlah2;
    printf("Total : %d\n\n",total2);

    printf("Ingin pesan Minuman?\n");
    printf("1. Ya\n");
    printf("2. Tidak\n");
    printf("Masukan Pilihan : ");
    scanf("%d",&ulang2);
    if (ulang2==1) {
        goto Minuman;
            }
    else if (ulang2==2){
        printf("Ingin pesan Dessert?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Masukan Pilihan : ");
        scanf("%d",&ulang3);
        if (ulang3==1) {
                goto Dessert;
                }
        else if (ulang3==2){
                goto Pembayaran;
        }}
    else{goto MainCourse;}

    Minuman:
        system("CLS");
        printf("1.Minuman Panas\n");
        printf("2.Minuman Dingin\n");
        printf("Masukkan Pilihan : ");
        scanf("%d",&pilihan);
        switch(pilihan){
        case 1:
            MMinumanPanas();
            printf("Masukan pilihan : ");
            scanf("%d",&MinumanPns);
            if (MinumanPns==1) {
                MinumanPns=CDH, CWH, CDMH, WH, CHH, KAH, MH;
            }
            else if (MinumanPns==2) {
                MinumanPns=CWH;
            }
            else if (MinumanPns==3) {
                MinumanPns=CDMH;
            }
            else if (MinumanPns==4) {
                MinumanPns=WH;
            }
            else if (MinumanPns==5) {
                MinumanPns=CHH;
            }
            else if (MinumanPns==6) {
                MinumanPns=KAH;
            }
            else if (MinumanPns==7) {
                MinumanPns=MH;
            }
            else if (MinumanPns >7) {
                printf("Tolong input sesuai pilihan\n\n");
                goto Minuman;
           }
            printf("Masukkan Jumlah : ");
            scanf("%d",&jumlah3);
            total3=MinumanPns*jumlah3;
            printf("Total : %d\n\n",total3);
            break;
        case 2:
            MMinumanDingin();
            printf("Masukan pilihan : ");
            scanf("%d",&MinumanDgn);
            if (MinumanDgn==1) {
                MinumanDgn=SYI;
            }
            else if (MinumanDgn==2) {
                MinumanDgn=LSI;
            }
            else if (MinumanDgn==3) {
                MinumanDgn=CDI;
            }
            else if (MinumanDgn==4) {
                MinumanDgn=CWI;
            }
            else if (MinumanDgn==5) {
                MinumanDgn=CDMI;
            }
            else if (MinumanDgn==6) {
                MinumanDgn=CCF;
            }
            else if (MinumanDgn==7) {
                MinumanDgn=MI;
            }
            else if (MinumanDgn >7) {
                printf("Tolong input sesuai pilihan\n\n");
                goto Minuman;
           }
            printf("Masukkan Jumlah : ");
            scanf("%d",&jumlah3);
            total3=MinumanDgn*jumlah3;
            printf("Total : %d\n\n",total3);
            break;
        }
        printf("Ingin pesan Dessert?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Masukan Pilihan : ");
        scanf("%d",&ulang3);
        if (ulang3==1) {
                goto Dessert;
                }
        else if (ulang3==2){
                goto Pembayaran;
        }
        else{goto Minuman;}

    Dessert:
        system("CLS");
        DDessert();
        printf("Masukan pilihan : ");
        scanf("%d",& Dessert);
        if ( Dessert==1) {
             Dessert=CHC;
        }
        else if ( Dessert==2) {
             Dessert=CRC;
        }
        else if ( Dessert==3) {
             Dessert=MB;
        }
        else if ( Dessert==4) {
             Dessert=RCP;
        }
        else if ( Dessert==5) {
             Dessert=CSC;
        }
        else if ( Dessert >5) {
            printf("Tolong input sesuai pilihan\n\n");
            goto  Dessert;
        }
        printf("Masukkan Jumlah : ");
        scanf("%d",&jumlah4);
        total4= Dessert*jumlah4;
        printf("Total : %d\n\n",total4);

    Pembayaran:
        printf("Sistem akan menghitung pesanan anda.....");
        sleep(2);
        system("cls");
        total=total1+total2+total3+total4;
        printf("\n\t\t\t=====================================================\n");
        printf("\t\t\t                [ Struk Pembayaran ]               \n");
        printf("\t\t\t=====================================================");
        waktu();
        printf("\t\t\t Pesanan atas nama    : %s                         \n",Nama);
        printf("\t\t\t Banyak Pengunjung    : %d                         \n",pengunjung);
        printf("\t\t\t Bulan Pemesanan      : %s-%d                      \n",bulan_huruf,tahun);
        for (i = 0; i < n; i++){
        printf("\t\t\t Tanggal yang dipesan : %d                         \n",arr[i]);}
        printf("\t\t\t Appertizer           : %d                         \n",total1);
        printf("\t\t\t MainCourse           : %d                         \n",total2);
        printf("\t\t\t Minuman              : %d                         \n",total3);
        printf("\t\t\t Dessert              : %d                         \n",total4);
        printf("\t\t\t Jumlah pesanan anda  : %d                         \n",total);
        printf("\t\t\t Uang yang dibayar    : ");
        scanf("%d",&bayar);
        if (bayar<total) {
            printf("\t\t\t\tTolong bayar sesuai/melebihi total\n");
            printf("\t\t\t\tSistem akan mengulang pembayaran");
            sleep(3);
            system("cls");
            goto Pembayaran;
        }
        else {}
        kembali=bayar-total;
        printf("\t\t\t Kembali              : %d                         \n",kembali);
        printf("\t\t\t\t\tTerima kasih atas kunjungannya\n\n");
        printf("\n\nApakah anda ingin melakukan reservasi pemesanan kembali?\n");
        printf("1.Iya\n");
        printf("2.Tidak(Exit)\n");
        printf("Masukan pilihan : ");
        scanf("%d",&awal);
        if(awal==1){
            goto awal;
            printf("Sistem akan memproses harap tunggu sebentar");
            sleep(2);
        }
        else{}
 }
