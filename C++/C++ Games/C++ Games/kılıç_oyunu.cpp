//Mayýn Tarlasý

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
 
#define      KART_ADEDI      52
#define      SENSITIVITY      .1
//////////////////////////////////////////////////////////
typedef enum _Renk {SINEK, KARO, KUPA, MACA}Renk;
typedef enum _Deger {IKI, UC, DORT, BES, ALTI, YEDI, SEKIZ, DOKUZ, ON, VALE, DAM, RUA, AS} Deger;
typedef int Bool;
//////////////////////////////////////////////////////////
typedef struct _Kart {
   Renk renk;
   Deger deger;
}Kart;
//////////////////////////////////////////////////////////
void kart_yap(Kart *p, Renk r, Deger d);
void kart_yaz(const Kart *p);
Bool esit_mi(const Kart *p1, const Kart *p2);
void kart_gir(Kart *p);
void kart_takas_et(Kart *p1, Kart *p2);
void delay(double sec);
//////////////////////////////////////////////////////////
void kart_yap(Kart *p, Renk r, Deger d)
{
   p->renk = r;
   p->deger = d;
}
//////////////////////////////////////////////////////////
void kart_yaz(const Kart *p)
{
   static const char renkler[] = {5, 4, 3, 6};
   static char *degerler[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "V", "D", "R", "A"};
   printf("%c%-2s", renkler[p->renk], degerler[p->deger]);
}
//////////////////////////////////////////////////////////
Bool esit_mi(const Kart *p1, const Kart *p2)
{
   return p1->renk == p2->renk && p1->deger == p2->deger;
}
//////////////////////////////////////////////////////////
void kart_gir(Kart *p)
{
   int i, k;
   char renk_giris[20];
   char deger_giris[20];
   static const char *renkler[] = {"sinek", "karo", "kupa", "maca"};
   static const char *degerler[] = {"iki", "uc", "dort", "bes", "alti", "yedi", "sekiz", "dokuz", "on",
   "vale", "dam", "rua", "as"};
 
   while (1) {
      printf("<renk> <deger>\n");
      printf("ornek giris : sinek dokuz\n");
      for (k = 0; k < 4; ++k)
         printf("%s ", renkler[k]);
      printf("\n");
 
      for (k = 0; k < 13; ++k)
         printf("%s ", degerler[k]);
      printf("\n");
      scanf("%s%s", renk_giris, deger_giris);
      for (k = 0; k < 4; ++k)
         if (!strcmp(renkler[k], renk_giris))
            break;
      if (k == 4) {
         printf("gecersiz renk...\n");
         continue;
      }
 
      for (i = 0; i < 13; ++i)
         if (!strcmp(degerler[i], deger_giris))
            break;
      if (i == 13) {
         printf("gecersiz deger...\n");
         continue;
      }
      kart_yap(p, k, i);
      break;
   }
 
}
//////////////////////////////////////////////////////////
void kart_takas_et(Kart *p1, Kart *p2)
{
   Kart temp = *p1;
   *p1 = *p2;
   *p2 = temp;
}
//////////////////////////////////////////////////////////
typedef struct DESTE {
   Kart kartlar[KART_ADEDI];
   int ust;
}Deste;
//////////////////////////////////////////////////////////
void deste_yap(Deste *p);
void deste_yaz(const Deste *p);
void deste_kar(Deste *p);
Kart kart_cek(Deste *p);
Bool kart_kaldi_mi(const Deste *p);
//////////////////////////////////////////////////////////
void deste_yap(Deste *p)
{
   int i;
 
   for (i = 0; i < KART_ADEDI; ++i)
      kart_yap(p->kartlar + i, i / 13, i % 13);
   p->ust = 0;
}
//////////////////////////////////////////////////////////
void deste_yaz(const Deste *p)
{
   int i;
 
   for (i = 0; i < KART_ADEDI; ++i) {
      if (i && i % 13 == 0)
         printf("\n");
      kart_yaz(p->kartlar + i);
      printf(" ");
   }
}
//////////////////////////////////////////////////////////
void deste_kar(Deste *p)
{
   int kar_der = rand() % 500 + 100;
   int k;
 
   for (k = 0; k < kar_der; ++k)
      kart_takas_et(p->kartlar + rand() % KART_ADEDI, p->kartlar + rand() % KART_ADEDI);
}
//////////////////////////////////////////////////////////
Bool kart_kaldi_mi(const Deste *p)
{
   return p->ust != KART_ADEDI;
}
//////////////////////////////////////////////////////////
Kart kart_cek(Deste *p)
{
   Kart kart;
   if (!kart_kaldi_mi(p)) {
      printf("destede kagit kalmadi\n");
      exit(EXIT_FAILURE);
   }
   kart = p->kartlar[p->ust];
   p->ust++;
   return kart;
}
//////////////////////////////////////////////////////////
void delay(double sec)
{
   double total = 0.;
   clock_t tstart = clock();
   clock_t tend;
   double duration;
 
   for (;;) {
      tend = clock();
      duration = (double)(tend - tstart) / CLOCKS_PER_SEC;
      if (fabs(duration - sec) < SENSITIVITY)
      return;
   }
}
//////////////////////////////////////////////////////////
int main()
{
   Deste destem;
   Kart secilen_kart;
   deste_yap(&destem);
   deste_kar(&destem);
 
 
   printf("bir kart secin : ");
   kart_gir(&secilen_kart);
   printf("sectiginiz kart = ");
   kart_yaz(&secilen_kart);
   printf("\n\n");
   printf("benim kartim \t\tsizin kartiniz\n");
   printf("***************************************\n");
 
   srand(time(0));
   while (kart_kaldi_mi(&destem)) {
      Kart cekilen_kart = kart_cek(&destem);
      printf("\t");
      kart_yaz(&cekilen_kart);
      if (esit_mi(&cekilen_kart, &secilen_kart)) {
         printf("\nKaybettiniz!!!!\n");
         return 0;
      }
      printf("\t\t\t");
      delay(.5);
      cekilen_kart = kart_cek(&destem);
      kart_yaz(&cekilen_kart);
      if (esit_mi(&cekilen_kart, &secilen_kart)) {
         printf("\nKazandiniz!!!!\n");
         return 0;
      }
      printf("\n");
      delay(.5);
   }
 
   return 0;
}
