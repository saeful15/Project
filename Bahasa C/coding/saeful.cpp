#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
int uang,tam,s=0,q=0,w=0;
char pilih[10000],tamp1[10000],tamp2[100000],user[100000]="saeful mz", passw[100000]="150598", log[1000000], pasw[10000000], akun[100][2];
float tm;
/////////////////////////////////P R O T O  T Y P E///////////////////////////////////////
void spasi(char* q);
void spasi(char* q);
char rumus2();
float rumus();
float rumus1();
float rumus3();
float rumus4();
void salah();
void salah1();
void salah2();
void salah3();
void salah4();
void salah5();
void hapus_salah();
void masuk();
void bingkai();
void bungkus_input();
void bungkus_input1();
void masjid();
void judulzakat();
void judulfitrah();
void judulmall();
void judulemas();
void judulperak();
void judulziroah();
void judulmaadin();
void judulrikaz();
void judultizaroh();
void judul_saeful();
void pengertian_zakat();
void syarat_fitrah();
void rukun_fitrah();
void mudzaki();
void login();
void pembahasan();
void pembahasan_isi();
void tampilanhitung();
void fitrah();
void hitung_fitrah();
void pembahasan_fitrah();
void judul_profesi();
void profesi();
void hitung_profsi();
void mall();
void satu();
void emas();
void hitungemas();
void pembahasan_emas();
void perak();
void hitungperak();
void pembahasan_perak();
void ziroah_hitung();
void ziroah();
void pembahasan_ziroah();
void maadin();
void hitungmaadin();
void pembahasan_maadin();
void rikaz();
void hitungrikaz();
void pembahasan_rikaz();
void tizaroh();
void hitung_tizaroh();
void pembahasan_tizaroh();
void menu();
void keluar_masuk();
void balik();
/////////////////////////////////T A M P I L A N////////////////////////////////////////////
void bingkai(){
		for (int c=10;c<=101;c++){
   	textcolor(9);
   	gotoxy(c,5);cprintf("%c",219);
      gotoxy(c,50);cprintf("%c",219);
      gotoxy(c,15);cprintf("%c",219);
   }for (int c=10;c<56;c++){
   	textcolor(9);
      gotoxy(102,c-5);cprintf("%c",219);
      gotoxy(10,c-5);cprintf("%c",219);
   }
}
void tampilanhitung(){
	for (int c=10;c<=102;c++){
   	textcolor(9);
      gotoxy(c,19);cprintf("%c",219);Sleep(5);
      if (c<14){
      	gotoxy(78,c+6);cprintf("%c",219);Sleep(5);
         gotoxy(34,c+6);cprintf("%c",219);Sleep(5);
         gotoxy(55,c+6);cprintf("%c",219);Sleep(5);
      }
   }
   textcolor(10);
   gotoxy(15,17);cprintf("1.Hitung Kembali" );
   gotoxy(41,17);cprintf("0.Kembali");
   gotoxy(60,17);cprintf("98.Menu Mall");
   gotoxy(84,17);cprintf("99.Keluar Akun");
   bungkus_input1();
}
void bungkus_input(){
	for (int c=1;c<=50;c++){
   	for (int d=1;d<=3;d++){
      	if (c==1 || d==1 || d==3 || c==50|| c+d<7 || c+d>47){
         	gotoxy(c+30,d+32);printf("%c",219);
         }else{
				gotoxy(c+30,d+32);printf(" ");
         }
   	}printf("\n");
   }gotoxy(34,34);cprintf(" Masukan Pilihan :");

}
void bungkus_input1(){
 for (int c=1;c<=50;c++){
   	for (int d=1;d<=3;d++){
      	if (c==1 || d==1 || d==3 || c==50|| c+d<7 || c+d>47){
         	gotoxy(c+30,d+42);printf("%c",219);
         }else
				gotoxy(c+30,d+42);printf(" ");
   	}printf("\n");
   }gotoxy(34,44);cprintf(" Masukan Pilihan :");

}
void pembahasan_isi(){
	for (int c=10;c<=102;c++){
   	textcolor(9);
      gotoxy(c,19);cprintf("%c",219);Sleep(5);
      if (c<14){
      	gotoxy(55,c+6);cprintf("%c",219);Sleep(5);
         gotoxy(32,c+6);cprintf("%c",219);Sleep(5);
         gotoxy(79,c+6);cprintf("%c",219);Sleep(5);
      }
   }bungkus_input();
   textcolor(10);
   gotoxy(16,17);cprintf("1.Pembahasan");
   gotoxy(38,17);cprintf("2.Hitungan");
   gotoxy(63,17);cprintf("0.Kembali");
   gotoxy(84,17);cprintf("99. keluar akun");
   gotoxy(34,34);cprintf(" Masukan Pilihan :                          ");
}
///////////////////////////////// J U D U L /////////////////////////////////////////////
void masjid(){
	char a[]="SSSSS EEEEE L     AAAAA M       M AAAAA TTTTT  D D    AAAAA  TTTTT  AAAAA  N   N  GGGGG";
   char b[]="S     E     L     A   A MM     MM A   A   T    D  D   A   A    T    A   A  NN  N  G    ";
   char f[]="SSSSS EEEEE L     AAAAA M M   M M AAAAA   T    D   D  AAAAA    T    AAAAA  N N N  G GGG";
   char d[]="    S E     L     A   A M  M M  M A   A   T    D  D   A   A    T    A   A  N  NN  G   G";
   char e[]="SSSSS EEEEE LLLLL A   A M   M   M A   A   T    D D    A   A    T    A   A  N   N  GGGGG";
   char g[]="SSSSS AAAAA EEEEE FFFFF U   U L        PPPP  RRRR     OO    GGGGG RRRR  AAAAA M       M";
   char h[]="S     A   A E     F     U   U L        P   P R   R  OO  OO  G     R   R A   A MM     MM";
   char i[]="SSSSS AAAAA EEEEE FFF   U   U L        PPPP  RRRR  OO    OO G GGG RRRR  AAAAA M M   M M";
   char j[]="    S A   A E     F     U   U L        P     R R    OO  OO  G   G R R   A   A M  M M  M";
   char k[]="SSSSS A   A EEEEE F     UUUUU LLLLLL   P     R  R     OO    GGGGG R  R  A   A M   M   M";
   char aa[]="SSS EEE PPP  I RRR     O      GGGG EEE DD   EEE N   N I N   N GGGG   SSS EEE N   N GGGG SSS    O    RRR     O   ";
   char ab[]="S   E   P  P I R  R  OO OO    G    E   D D  E   NN  N I NN  N G      S   E ' NN  N G    S    OO OO  R  R  OO OO ";
   char ac[]="SSS EEE PPP  I RRR  OO   OO   G GG EEE D  D EEE N N N I N N N G GG   SSS EEE N N N G GG SSS OO   OO RRR  OO   OO";
   char ad[]="  S E   P    I R R   OO OO    G  G E   D D  E   N  NN I N  NN G  G     S E   N  NN G  G   S  OO OO  R R   OO OO ";
   char ae[]="SSS EEE P    I R  R    O      GGGG EEE DD   EEE N   N I N   N GGGG   SSS EEE N   N GGGG SSS    O    R  R    O   ";
   char af[]="Y   Y EEE N   N TTTTT I N   N   O   M   M PPP   O   AAA M   M   O   N   N GGGG DD   AAA DD   I   CC  O   BBB    O  ";
   char ag[]=" Y Y  E   NN  N   T   I NN  N  O O  MM MM P  P O O  A A MM MM  O O  NN  N G    D D  A A D d  I  C   O O  B  B  O O ";
   char ah[]="  Y   EEE N N N   T   I N N N O   O M M M PPP O   O AAA M M M O   O N N N G GG D  D AAA D  D I C   O   O BBB  O   O";
   char ai[]="  Y   E   N  NN   T   I N  NN  O O  M   M P    O O  A A M   M  O O  N  NN G  G D D  A A D D  I  C   O O  B  B  O O ";
   char aj[]="  Y   EEE N   N   T   I N   N   O   M   M P     O   A A M   M   O   N   N GGGG DD   A A DD   I   CC  O   BBB    O  ";
   q=0,w=0;
   for (int c=0;c<=strlen(a);c++){
         gotoxy(12+c,2);printf("%c",a[c]);Sleep(1);
         gotoxy(12+c,3);printf("%c",b[c]);Sleep(1);
      	gotoxy(12+c,4);printf("%c",f[c]);Sleep(1);
      	gotoxy(12+c,5);printf("%c",d[c]);Sleep(1);
         gotoxy(12+c,6);printf("%c",e[c]);Sleep(1);
  }for (int c=0;c<=strlen(g);c++){
      	gotoxy(12+strlen(g)-c,8);printf("%c",g[strlen(g)-c]);Sleep(1);
         gotoxy(12+strlen(g)-c,9);printf("%c",h[strlen(g)-c]);Sleep(1);
      	gotoxy(12+strlen(g)-c,10);printf("%c",i[strlen(g)-c]);Sleep(1);
      	gotoxy(12+strlen(g)-c,11);printf("%c",j[strlen(g)-c]);Sleep(1);
         gotoxy(12+strlen(g)-c,12);printf("%c",k[strlen(g)-c]);Sleep(1);

   }for (int c=0;c<strlen(aa)*2+2;c++){
   	if(c%2==0){
   		gotoxy(2+q,45);printf("%c",aa[q]);Sleep(1);
      	gotoxy(2+q,47);printf("%c",ac[q]);Sleep(1);
      	gotoxy(2+q,49);printf("%c",ae[q]);Sleep(1);
         q++;
      }else{
      	gotoxy(2+strlen(aa)-w,46);printf("%c",ab[strlen(aa)-w]);Sleep(1);
      	gotoxy(2+strlen(aa)-w,48);printf("%c",ad[strlen(aa)-w]);Sleep(1);
         w++;
      }
   }
   q=w=0;
   for (int c=0;c<=strlen(af);c++){
   	if(c%2==0){
         gotoxy(1+q,52);cprintf("%c",af[q]);Sleep(1);
         gotoxy(1+q,53);cprintf("%c",ag[q]);Sleep(1);
      	gotoxy(1+q,54);cprintf("%c",ah[q]);Sleep(1);
      	gotoxy(1+q,55);cprintf("%c",ai[q]);Sleep(1);
         gotoxy(1+q,56);cprintf("%c",aj[q]);Sleep(1);
         q++;
      }else{
      	gotoxy(1+strlen(af)-w,52);cprintf("%c",af[strlen(af)-w]);Sleep(1);
         gotoxy(1+strlen(af)-w,53);cprintf("%c",ag[strlen(af)-w]);Sleep(1);
      	gotoxy(1+strlen(af)-w,54);cprintf("%c",ah[strlen(af)-w]);Sleep(1);
      	gotoxy(1+strlen(af)-w,55);cprintf("%c",ai[strlen(af)-w]);Sleep(1);
         gotoxy(1+strlen(af)-w,56);cprintf("%c",aj[strlen(af)-w]);Sleep(1);
         w++;
      }
   }
   for (int c=1;c<11;c++){
   	textcolor(c+2);
   	gotoxy(12,2);cprintf("SSSSS EEEEE L     AAAAA M       M AAAAA TTTTT  D D    AAAAA  TTTTT  AAAAA  N   N  GGGGG");Sleep(15);
  	 	gotoxy(12,3);cprintf("S     E     L     A   A MM     MM A   A   T    D  D   A   A    T    A   A  NN  N  G    ");Sleep(15);
      gotoxy(12,4);cprintf("SSSSS EEEEE L     AAAAA M M   M M AAAAA   T    D   D  AAAAA    T    AAAAA  N N N  G GGG");Sleep(15);
   	gotoxy(12,5);cprintf("    S E     L     A   A M  M M  M A   A   T    D  D   A   A    T    A   A  N  NN  G   G");Sleep(15);
   	gotoxy(12,6);cprintf("SSSSS EEEEE LLLLL A   A M   M   M A   A   T    D D    A   A    T    A   A  N   N  GGGGG");Sleep(15);
   }for (int c=1;c<11;c++){
   	textcolor(c+5);
   	gotoxy(12,8);  cprintf("SSSSS AAAAA EEEEE FFFFF U   U L        PPPP  RRRR     OO    GGGGG RRRR  AAAAA M       M"); Sleep(15);
      gotoxy(12,9);  cprintf("S     A   A E     F     U   U L        P   P R   R  OO  OO  G     R   R A   A MM     MM"); Sleep(15);
      gotoxy(12,10); cprintf("SSSSS AAAAA EEEEE FFF   U   U L        PPPP  RRRR  OO    OO G GGG RRRR  AAAAA M M   M M"); Sleep(15);
      gotoxy(12,11); cprintf("    S A   A E     F     U   U L        P     R R    OO  OO  G   G R R   A   A M  M M  M"); Sleep(15);
      gotoxy(12,12); cprintf("SSSSS A   A EEEEE F     UUUUU LLLLLL   P     R  R     OO    GGGGG R  R  A   A M   M   M"); Sleep(15);
   }
   for (int c=1;c<11;c++){
   	textcolor(c-1);
   	gotoxy(2,45);cprintf("SSS EEE PPP  I RRR     O      GGGG EEE DD   EEE N   N I N   N GGGG   SSS EEE N   N GGGG SSS    O    RRR     O   ");Sleep(15);
  	 	gotoxy(2,46);cprintf("S   E   P  P I R  R  OO OO    G    E   D D  E   NN  N I NN  N G      S   E   NN  N G    S    OO OO  R  R  OO OO ");Sleep(15);
      gotoxy(2,47);cprintf("SSS EEE PPP  I RRR  OO   OO   G GG EEE D  D EEE N N N I N N N G GG   SSS EEE N N N G GG SSS OO   OO RRR  OO   OO");Sleep(15);
   	gotoxy(2,48);cprintf("  S E   P    I R R   OO OO    G  G E   D D  E   N  NN I N  NN G  G     S E   N  NN G  G   S  OO OO  R R   OO OO ");Sleep(15);
   	gotoxy(2,49);cprintf("SSS EEE P    I R  R    O      GGGG EEE DD   EEE N   N I N   N GGGG   SSS EEE N   N GGGG SSS    O    R  R    O   ");Sleep(15);
   }
   textcolor(12);
   gotoxy(2,45);cprintf("SSS EEE PPP  I RRR     O      GGGG EEE DD   EEE N   N I N   N GGGG   SSS EEE N   N GGGG SSS    O    RRR     O   ");
   gotoxy(2,46);cprintf("S   E   P  P I R  R  OO OO    G    E   D D  E   NN  N I NN  N G      S   E   NN  N G    S    OO OO  R  R  OO OO ");
   textcolor(14);
   gotoxy(2,47);cprintf("SSS EEE PPP  I RRR  OO   OO   G GG EEE D  D EEE N N N I N N N G GG   SSS EEE N N N G GG SSS OO   OO RRR  OO   OO");
   textcolor(10);
   gotoxy(2,48);cprintf("  S E   P    I R R   OO OO    G  G E   D D  E   N  NN I N  NN G  G     S E   N  NN G  G   S  OO OO  R R   OO OO ");
   gotoxy(2,49);cprintf("SSS EEE P    I R  R    O      GGGG EEE DD   EEE N   N I N   N GGGG   SSS EEE N   N GGGG SSS    O    R  R    O   ");
   for (int c=1;c<11;c++){
   	textcolor(c+2);
      gotoxy(1,52); cprintf("Y   Y EEE N   N"); Sleep(15);
   	gotoxy(1,53); cprintf(" Y Y  E   NN  N"); Sleep(15);
   	gotoxy(1,54); cprintf("  Y   EEE N N N"); Sleep(15);
   	gotoxy(1,55); cprintf("  Y   E   N  NN"); Sleep(15);
   	gotoxy(1,56); cprintf("  Y   EEE N   N"); Sleep(15);
   }for (int c=1;c<11;c++){
   	textcolor(c+4);
   	gotoxy(17,52); cprintf("TTTTT I N   N   O   M   M PPP   O  "); Sleep(15);
      gotoxy(17,53); cprintf("  T   I NN  N  O O  MM MM P  P O O "); Sleep(15);
      gotoxy(17,54); cprintf("  T   I N N N O   O M M M PPP O   O"); Sleep(15);
      gotoxy(17,55); cprintf("  T   I N  NN  O O  M   M P    O O "); Sleep(15);
      gotoxy(17,56); cprintf("  T   I N   N   O   M   M P     O  "); Sleep(15);
   } for (int c=1;c<11;c++){
   	textcolor(c);
   	gotoxy(53,52); cprintf("AAA M   M   O   N   N GGGG"); Sleep(15);
      gotoxy(53,53); cprintf("A A MM MM  O O  NN  N G   "); Sleep(15);
      gotoxy(53,54); cprintf("AAA M M M O   O N N N G GG"); Sleep(15);
      gotoxy(53,55); cprintf("A A M   M  O O  N  NN G  G"); Sleep(15);
      gotoxy(53,56); cprintf("A A M   M   O   N   N GGGG"); Sleep(15);
   }
   for (int c=1;c<11;c++){
   	textcolor(c+4);
   	gotoxy(80,52); cprintf("DD   AAA DD   I"); Sleep(15);
      gotoxy(80,53); cprintf("D D  A A D d  I"); Sleep(15);
      gotoxy(80,54); cprintf("D  D AAA D  D I"); Sleep(15);
      gotoxy(80,55); cprintf("D D  A A D D  I"); Sleep(15);
      gotoxy(80,56); cprintf("DD   A A DD   I"); Sleep(15);
   }for (int c=1;c<11;c++){
   	textcolor(c+2);
   	gotoxy(96,52); cprintf("  CC  O   BBB    O  "); Sleep(15);
      gotoxy(96,53); cprintf(" C   O O  B  B  O O "); Sleep(15);
      gotoxy(96,54); cprintf("C   O   O BBB  O   O"); Sleep(15);
      gotoxy(96,55); cprintf(" C   O O  B  B  O O "); Sleep(15);
      gotoxy(96,56); cprintf("  CC  O   BBB    O  "); Sleep(15);
   }
	for (int c=1;c<5;c++){
   	textcolor(27);
   	gotoxy(21,14); cprintf("   ^                              ^                               ^"); Sleep(8);
      gotoxy(21,15); cprintf("  ( )                       *************                        ( )"); Sleep(8);
      gotoxy(21,16); cprintf(" (   )                  *****| |*****| |******                  (   )"); Sleep(8);
      gotoxy(21,17); cprintf("  ( )              *********| |*******| |*********               ( )"); Sleep(8);
      gotoxy(21,18); cprintf("  ---            ****| |***| |*********| |***| |****             ---"); Sleep(8);
      gotoxy(21,19); cprintf("  ---          *****| |***| |***********| |***| |*****           ---"); Sleep(8);
      gotoxy(21,19); cprintf("  | |        ******| |***| |*************| |***| |******         | |"); Sleep(8);
      gotoxy(21,20); cprintf("  | |       ******| |***| |***************| |***| |*******       | |"); Sleep(8);
      gotoxy(21,21); cprintf("  | |      ^  *****| |***| |*************| |***| |******  ^      | |");   Sleep(8);
      gotoxy(21,22); cprintf(" -----   (   )  ****| |***| |***********| |***| |*****  (   )   -----"); Sleep(8);
      gotoxy(21,23); cprintf(" -----  (     )   ***| |***| |*********| |***| |****   (     )  -----"); Sleep(8);
      gotoxy(21,24); cprintf(" |   | (       )    **| |***| |******| |***| |***     (       ) |   |"); Sleep(8);
      gotoxy(21,25); cprintf(" |   |  (     )    --------------------------------    (     )  |   |"); Sleep(8);
      gotoxy(21,26); cprintf(" |   |  -------    --------------------------------    -------  |   |"); Sleep(8);
      gotoxy(21,27); cprintf(" |   |  -------  ------------------------------------  -------  |   |"); Sleep(8);
      gotoxy(21,28); cprintf(" |   |-----------MENINGGAL TERBEBAS DARI HUTANG ZAKAT-----------|   | "); Sleep(8);
      gotoxy(21,29); cprintf("-------         |------------------------------------|         -------"); Sleep(8);
      gotoxy(21,30); cprintf("-------         |                                    |         -------"); Sleep(8);
      gotoxy(21,31); cprintf("|     |---------|                                    |---------|     |"); Sleep(8);
      gotoxy(21,32); cprintf("|     |         |                                    |         |     |"); Sleep(8);
      gotoxy(21,33); cprintf("|     |         |    ____________________________    |         |     |"); Sleep(8);
      gotoxy(21,34); cprintf("|     |         |   |                            |   |         |     |"); Sleep(8);
      gotoxy(21,35); cprintf("|     |   ___   |   |    ___     ____     ___    |   |   ___   |     |"); Sleep(8);
      gotoxy(21,36); cprintf("|     |  |   |  |   |   |   |   |    |   |   |   |   |  |   |  |     |"); Sleep(8);
      gotoxy(21,37); cprintf("|     |  |   |  |   |   |   |   |    |   |   |   |   |  |   |  |     |"); Sleep(8);
      gotoxy(21,38); cprintf("|     |  |   |  |   |   |   |   |    |   |   |   |   |  |   |  |     |"); Sleep(8);
      gotoxy(21,39); cprintf("|     |  |   |  |   |   |   |   |    |   |   |   |   |  |   |  |     |"); Sleep(8);
      gotoxy(21,40); cprintf("|     |  |   |  |   |   |   |   |    |   |   |   |   |  |   |  |     |"); Sleep(8);
      gotoxy(21,41); cprintf("|     |  |   |  |   |   |   |   |    |   |   |   |   |  |   |  |     |"); Sleep(8);
      gotoxy(21,42); cprintf("------|  |   |  |   |   |   |   |    |   |   |   |   |  |   |  |------"); Sleep(8);
      gotoxy(21,43); cprintf("      ----------|   |   |   |   |    |   |   |   |   |----------"); Sleep(8);
      gotoxy(21,44); cprintf("                --------------------------------------"); Sleep(8);
   }
   	textcolor(10);
      for(int a=1;a<20;a++){
         if(a<4){
      		gotoxy(24,s+19); cprintf("%c",219); Sleep(5);
            gotoxy(87,s+19); cprintf("%c",219); Sleep(5);
      	}else if(a<9){
      		gotoxy(23,s+21); cprintf("%c%c%c",219,219,219); Sleep(5);
            gotoxy(86,s+21); cprintf("%c%c%c",219,219,219); Sleep(5);
			}else if (a<20){
         	gotoxy(22,s+23); cprintf("%c%c%c%c%c",219,219,219,219,219); Sleep(5);
            gotoxy(85,s+23); cprintf("%c%c%c%c%c",219,219,219,219,219); Sleep(5);
         }s++;
      }
      textcolor(13);
      for(int a=1;a<3;a++){
      		gotoxy(28,s+10); cprintf("%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219); Sleep(10);
            gotoxy(75,s+10); cprintf("%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219); Sleep(10);
            s++;
      }
      textcolor(14);
      for(int a=1;a<23;a++){
      	if(a<12){
        	  		gotoxy(28,s+11); cprintf("%c%c",219,219); Sleep(10);
               gotoxy(35,s+11); cprintf("%c%c",219,219); Sleep(10);
               gotoxy(75,s+11); cprintf("%c%c",219,219); Sleep(10);
               gotoxy(82,s+11); cprintf("%c%c",219,219); Sleep(10);
      	}
      	if(a<4){
         	gotoxy(28,s+11); cprintf("%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219); Sleep(10);
            gotoxy(75,s+11); cprintf("%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219); Sleep(10);
         }s++;
      }
      textcolor(175);
      for(int a=1;a<9;a++){
      	if (a>1){
      		gotoxy(31,s-8); cprintf("%c%c%c",219,219,219); Sleep(10);
         	gotoxy(78,s-8); cprintf("%c%c%c",219,219,219); Sleep(10);
         }
         gotoxy(46,s-7); cprintf("%c%c%c",219,219,219); Sleep(10);
         gotoxy(63,s-7); cprintf("%c%c%c",219,219,219); Sleep(10);
         gotoxy(54,s-7); cprintf("%c%c%c%c",219,219,219,219); Sleep(10);
         s++;
      }
      textcolor(8);
      for(int a=1;a<35;a++){
      	if (a<15){
         	textcolor(11);
      		gotoxy(s-13,a+29); cprintf("%c%c%c",219,219,219); Sleep(10);
         	gotoxy(s+20,a+29); cprintf("%c%c%c",219,219,219); Sleep(10);
         }
         gotoxy(a+37,30); cprintf("%c%c%c",219,219,219); Sleep(10);
         gotoxy(a+37,31); cprintf("%c%c%c",219,219,219); Sleep(10);
         gotoxy(a+37,32); cprintf("%c%c%c",219,219,219); Sleep(10);
       }

      textcolor(5);
      for(int a=1;a<23;a++){
      	if(a<11){
      		gotoxy(42,s-17); cprintf("%c%c%c",219,219,219); Sleep(10);
         	gotoxy(50,s-17); cprintf("%c%c%c",219,219,219); Sleep(10);
         	gotoxy(59,s-17); cprintf("%c%c%c",219,219,219); Sleep(10);
         	gotoxy(67,s-17); cprintf("%c%c%c",219,219,219); Sleep(10);
         }
         gotoxy(a+42,34); cprintf("%c%c%c%c%c%c",219,219,219,219,219,219); Sleep(10);
	      s++;
      }
      for (int c=1;c<25;c++){
   	textcolor(c+6);
   	gotoxy(41,31); cprintf(" TEKAN APA SAJA UNTUK LANJUT!"); Sleep(40);
   }
  getch();
}
void balik(){
   for (int c=1;c<11;c++){
   	textcolor(c);
   	gotoxy(12,8);  cprintf("SSSSS AAAAA EEEEE FFFFF U   U L        PPPP  RRRR     OO    GGGGG RRRR  AAAAA M       M"); Sleep(15);
      gotoxy(12,9);  cprintf("S     A   A E     F     U   U L        P   P R   R  OO  OO  G     R   R A   A MM     MM"); Sleep(15);
      gotoxy(12,10); cprintf("SSSSS AAAAA EEEEE FFF   U   U L        PPPP  RRRR  OO    OO G GGG RRRR  AAAAA M M   M M"); Sleep(15);
      gotoxy(12,11); cprintf("    S A   A E     F     U   U L        P     R R    OO  OO  G   G R R   A   A M  M M  M"); Sleep(15);
      gotoxy(12,12); cprintf("SSSSS A   A EEEEE F     UUUUU LLLLLL   P     R  R     OO    GGGGG R  R  A   A M   M   M"); Sleep(15);
   }
   textcolor(12);
   gotoxy(12,8);  cprintf("SSSSS AAAAA EEEEE FFFFF U   U L        PPPP  RRRR     OO    GGGGG RRRR  AAAAA M       M"); Sleep(15);
   gotoxy(12,9);  cprintf("S     A   A E     F     U   U L        P   P R   R  OO  OO  G     R   R A   A MM     MM"); Sleep(15);
   textcolor(14);
   gotoxy(12,10); cprintf("SSSSS AAAAA EEEEE FFF   U   U L        PPPP  RRRR  OO    OO G GGG RRRR  AAAAA M M   M M"); Sleep(15);
   textcolor(10);
   gotoxy(12,11); cprintf("    S A   A E     F     U   U L        P     R R    OO  OO  G   G R R   A   A M  M M  M"); Sleep(15);
   gotoxy(12,12); cprintf("SSSSS A   A EEEEE F     UUUUU LLLLLL   P     R  R     OO    GGGGG R  R  A   A M   M   M"); Sleep(15);
	char a[]="TTTTTT  EEEEEE  RR R R   II  MMM         MMM   AAAAAAA  KK   K  AAAAAAA   SSSSSS  II  HH   HH";
   char b[]="  TT    EE      RR    R  II  MM MM     MM MM   AA   AA  KK K    AA   AA   SS      II  HH   HH";
   char c[]="  TT    EEEEEE  RR R R   II  MM  MM   MM  MM   AAAAAAA  KK      AAAAAAA   SSSSSS  II  HHHHHHH";
   char d[]="  TT    EE      RR  RR   II  MM   MM MM   MM   AA   AA  KK K    AA   AA       SS  II  HH   HH";
   char e[]="  TT    EEEEEE  RR   RR  II  MM    MM     MM   AA   AA  KK   K  AA   AA   SSSSSS  II  HH   HH";
   q=w=0;
   for (int cq=0;cq<=strlen(a);cq++){
   	if(cq%2==0){
         textcolor(12);
         gotoxy(10+q,52);cprintf("%c",a[q]);Sleep(1);
         gotoxy(10+q,53);cprintf("%c",b[q]);Sleep(1);
         textcolor(14);
      	gotoxy(10+q,54);cprintf("%c",c[q]);Sleep(1);
         textcolor(10);
      	gotoxy(10+q,55);cprintf("%c",d[q]);Sleep(1);
         gotoxy(10+q,56);cprintf("%c",e[q]);Sleep(1);
         q++;
      }else{
         textcolor(12);
      	gotoxy(10+strlen(a)-w,52);cprintf("%c",a[strlen(a)-w]);Sleep(1);
         gotoxy(10+strlen(a)-w,53);cprintf("%c",b[strlen(a)-w]);Sleep(1);
         textcolor(14);
      	gotoxy(10+strlen(a)-w,54);cprintf("%c",c[strlen(a)-w]);Sleep(1);
         textcolor(10);
      	gotoxy(10+strlen(a)-w,55);cprintf("%c",d[strlen(a)-w]);Sleep(1);
         gotoxy(10+strlen(a)-w,56);cprintf("%c",e[strlen(a)-w]);Sleep(1);
         w++;
      }
   }
   	for (int c=1;c<15;c++){
   	textcolor(c);
   	gotoxy(21,14); cprintf("   ^                              ^                               ^"); Sleep(8);
      gotoxy(21,15); cprintf("  ( )                       *************                        ( )"); Sleep(8);
      gotoxy(21,16); cprintf(" (   )                  *****| |*****| |******                  (   )"); Sleep(8);
      gotoxy(21,17); cprintf("  ( )              *********| |*******| |*********               ( )"); Sleep(8);
      gotoxy(21,18); cprintf("  ---            ****| |***| |*********| |***| |****             ---"); Sleep(8);
      gotoxy(21,19); cprintf("  ---          *****| |***| |***********| |***| |*****           ---"); Sleep(8);
      gotoxy(21,19); cprintf("  | |        ******| |***| |*************| |***| |******         | |"); Sleep(8);
      gotoxy(21,20); cprintf("  | |       ******| |***| |***************| |***| |*******       | |"); Sleep(8);
      gotoxy(21,21); cprintf("  | |      ^  *****| |***| |*************| |***| |******  ^      | |");   Sleep(8);
      gotoxy(21,22); cprintf(" -----   (   )  ****| |***| |***********| |***| |*****  (   )   -----"); Sleep(8);
      gotoxy(21,23); cprintf(" -----  (     )   ***| |***| |*********| |***| |****   (     )  -----"); Sleep(8);
      gotoxy(21,24); cprintf(" |   | (       )    **| |***| |******| |***| |***     (       ) |   |"); Sleep(8);
      gotoxy(21,25); cprintf(" |   |  (     )    --------------------------------    (     )  |   |"); Sleep(8);
      gotoxy(21,26); cprintf(" |   |  -------    --------------------------------    -------  |   |"); Sleep(8);
      gotoxy(21,27); cprintf(" |   |  -------  ------------------------------------  -------  |   |"); Sleep(8);
      gotoxy(21,28); cprintf(" |   |-----------MENINGGAL TERBEBAS DARI HUTANG ZAKAT-----------|   | "); Sleep(8);
      gotoxy(21,29); cprintf("-------         |------------------------------------|         -------"); Sleep(8);
      gotoxy(21,30); cprintf("-------         |                                    |         -------"); Sleep(8);
      gotoxy(21,31); cprintf("|     |---------|                                    |---------|     |"); Sleep(8);
      gotoxy(21,32); cprintf("|     |         |                                    |         |     |"); Sleep(8);
      gotoxy(21,33); cprintf("|     |         |    ____________________________    |         |     |"); Sleep(8);
      gotoxy(21,34); cprintf("|     |         |   |                            |   |         |     |"); Sleep(8);
      gotoxy(21,35); cprintf("|     |   ___   |   |    ___     ____     ___    |   |   ___   |     |"); Sleep(8);
      gotoxy(21,36); cprintf("|     |  |   |  |   |   |   |   |    |   |   |   |   |  |   |  |     |"); Sleep(8);
      gotoxy(21,37); cprintf("|     |  |   |  |   |   |   |   |    |   |   |   |   |  |   |  |     |"); Sleep(8);
      gotoxy(21,38); cprintf("|     |  |   |  |   |   |   |   |    |   |   |   |   |  |   |  |     |"); Sleep(8);
      gotoxy(21,39); cprintf("|     |  |   |  |   |   |   |   |    |   |   |   |   |  |   |  |     |"); Sleep(8);
      gotoxy(21,40); cprintf("|     |  |   |  |   |   |   |   |    |   |   |   |   |  |   |  |     |"); Sleep(8);
      gotoxy(21,41); cprintf("|     |  |   |  |   |   |   |   |    |   |   |   |   |  |   |  |     |"); Sleep(8);
      gotoxy(21,42); cprintf("------|  |   |  |   |   |   |   |    |   |   |   |   |  |   |  |------"); Sleep(8);
      gotoxy(21,43); cprintf("      ----------|   |   |   |   |    |   |   |   |   |----------"); Sleep(8);
      gotoxy(21,44); cprintf("                --------------------------------------"); Sleep(8);
   }
      for (int c=1;c<25;c++){
   	textcolor(c+6);
   	gotoxy(41,31); cprintf(" T E R I M A K A S I H"); Sleep(40);
   }
}
////////////////////////////////////////N A M J U D U L///////////////////////////////////////////////////////////////
void masuk(){
	bingkai();
   for (int c=1;c<11;c++){
   	textcolor(c);
   	gotoxy(30,8);  cprintf("L          OO     G G G G          II  NN       N"); Sleep(20);
      gotoxy(30,9);  cprintf("L        OO  OO   G                II  N  N     N"); Sleep(20);
      gotoxy(30,10); cprintf("L       OO    OO  G G G G  %c%c%c%c%c   II  N    N   N",177,177,177,177,177); Sleep(20);
      gotoxy(30,11); cprintf("L        OO  OO   G     G          II  N      N N"); Sleep(20);
      gotoxy(30,12); cprintf("LLLLLL     OO     G G G G          II  N       NN"); Sleep(20);
   }
     for (int c=1;c<=50;c++){
   	for (int d=1;d<=11;d++){

      	if (c==1 || d==1 || d==11 || c==50 || d==6 || c==25){
         	gotoxy(c+30,d+23);cprintf("%c",219);Sleep(5);
         }else
         	gotoxy(c+30,d+23);printf(" ");
   	}printf("\n");
   }gotoxy(35,20); printf("                                                          ");
}
void judulzakat(){
	clrscr();
   bingkai();
   for (int c=1;c<11;c++){
   	textcolor(c);
   	gotoxy(38,8);  cprintf("ZZZZZ   AAAAA   K   K   AAAAA   TTTTTTT"); Sleep(20);
      gotoxy(38,9);  cprintf("   Z    A   A   K K     A   A      T   "); Sleep(20);
      gotoxy(38,10); cprintf("  Z     AAAAA   K       AAAAA      T   "); Sleep(20);
      gotoxy(38,11); cprintf(" Z      A   A   K K     A   A      T   "); Sleep(20);
      gotoxy(38,12); cprintf("ZZZZZ   A   A   K   K   A   A      T   "); Sleep(20);
   }
}
void judulfitrah(){
	clrscr();
   bingkai();
   for (int c=1;c<11;c++){
   	textcolor(c);
   	gotoxy(16,8);  cprintf("ZZZZZ  AAAAA  K   K  AAAAA  TTTTTTT     FFFFF   II  TTTTTTT  R R R    AAAAA  H   H"); Sleep(20);
      gotoxy(16,9);  cprintf("   Z   A   A  K K    A   A     T        F       II     T     R    R   A   A  H   H"); Sleep(20);
      gotoxy(16,10); cprintf("  Z    AAAAA  K      AAAAA     T        FFFFF   II     T     R R R    AAAAA  HHHHH"); Sleep(20);
      gotoxy(16,11); cprintf(" Z     A   A  K K    A   A     T        F       II     T     R  R     A   A  H   H"); Sleep(20);
      gotoxy(16,12); cprintf("ZZZZZ  A   A  K   K  A   A     T        F       II     T     R    R   A   A  H   H"); Sleep(20);
   }
}
void judulmall(){
	clrscr();
   bingkai();
   for (int c=1;c<11;c++){
   	textcolor(c);
   	gotoxy(18,8);  cprintf("ZZZZZ   AAAAA   K   K   AAAAA   TTTTTTT     MM       MM  AAAAA  L       L"); Sleep(20);
      gotoxy(18,9);  cprintf("   Z    A   A   K K     A   A      T        M M     M M  A   A  L       L"); Sleep(20);
      gotoxy(18,10); cprintf("  Z     AAAAA   K       AAAAA      T        M  M   M  M  AAAAA  L       L"); Sleep(20);
      gotoxy(18,11); cprintf(" Z      A   A   K K     A   A      T        M   M M   M  A   A  L       L"); Sleep(20);
      gotoxy(18,12); cprintf("ZZZZZ   A   A   K   K   A   A      T        M    M    M  A   A  LLLLLL  LLLLLL"); Sleep(20);
   }
}
void judulemas(){
	clrscr();
	bingkai();
   for (int c=1;c<11;c++){
   	textcolor(c);
   	gotoxy(18,8);  cprintf("ZZZZZ   AAAAA   K   K   AAAAA   TTTTTTT     EEEEE  MM       MM  AAAAA  SSSSS"); Sleep(20);
      gotoxy(18,9);  cprintf("   Z    A   A   K K     A   A      T        E      M M     M M  A   A  S    "); Sleep(20);
      gotoxy(18,10); cprintf("  Z     AAAAA   K       AAAAA      T        EEEEE  M  M   M  M  AAAAA  SSSSS"); Sleep(20);
      gotoxy(18,11); cprintf(" Z      A   A   K K     A   A      T        E      M   M M   M  A   A      S"); Sleep(20);
      gotoxy(18,12); cprintf("ZZZZZ   A   A   K   K   A   A      T        EEEEE  M    M    M  A   A  SSSSS"); Sleep(20);
   }
}
void judulperak(){
	clrscr();
	bingkai();
	for (int c=1;c<11;c++){
   	textcolor(c);
   	gotoxy(17,8);  cprintf("ZZZZZ   AAAAA   K   K   AAAAA   TTTTTTT    P P P    EEEEE  R R R    AAAAA   K   K"); Sleep(20);
      gotoxy(17,9);  cprintf("   Z    A   A   K K     A   A      T       P     P  E      R    R   A   A   K K  "); Sleep(20);
      gotoxy(17,10); cprintf("  Z     AAAAA   K       AAAAA      T       P P P    EEEEE  R R R    AAAAA   K    "); Sleep(20);
      gotoxy(17,11); cprintf(" Z      A   A   K K     A   A      T       P        E      R  R     A   A   K K  "); Sleep(20);
      gotoxy(17,12); cprintf("ZZZZZ   A   A   K   K   A   A      T       P        EEEEE  R    R   A   A   K   K"); Sleep(20);
      }
}
void judulziroah(){
	clrscr();
	bingkai();
	for (int c=1;c<11;c++){
   	textcolor(c);
   	gotoxy(16,8);  cprintf("ZZZZZ  AAAAA  K   K  AAAAA  TTTTTTT     ZZZZZ   II  R R R      OOO     AAAAA  H   H"); Sleep(20);
      gotoxy(16,9);  cprintf("   Z   A   A  K K    A   A     T           Z    II  R    R   OO   OO   A   A  H   H"); Sleep(20);
      gotoxy(16,10); cprintf("  Z    AAAAA  K      AAAAA     T          Z     II  R R R   OO     OO  AAAAA  HHHHH"); Sleep(20);
      gotoxy(16,11); cprintf(" Z     A   A  K K    A   A     T         Z      II  R  R     OO   OO   A   A  H   H"); Sleep(20);
      gotoxy(16,12); cprintf("ZZZZZ  A   A  K   K  A   A     T        ZZZZZ   II  R    R     OOO     A   A  H   H"); Sleep(20);
   }
}
void judulmaadin(){
	clrscr();
	bingkai();
   for (int c=1;c<11;c++){
   	textcolor(c);
   	gotoxy(12,8);  cprintf("ZZZZZ   AAAAA   K   K   AAAAA   TTTTTTT    MM       MM  AAAAA  AAAAA  D D     II  NN     N"); Sleep(20);
      gotoxy(12,9);  cprintf("   Z    A   A   K K     A   A      T       M M     M M  A   A  A   A  D   D   II  N  N   N"); Sleep(20);
      gotoxy(12,10); cprintf("  Z     AAAAA   K       AAAAA      T       M  M   M  M  AAAAA  AAAAA  D    D  II  N   N  N"); Sleep(20);
      gotoxy(12,11); cprintf(" Z      A   A   K K     A   A      T       M   M M   M  A   A  A   A  D   D   II  N    N N"); Sleep(20);
      gotoxy(12,12); cprintf("ZZZZZ   A   A   K   K   A   A      T       M    M    M  A   A  A   A  D D     II  N     NN"); Sleep(20);
   }
}
void judultizaroh(){
	clrscr();
	bingkai();
   for (int c=1;c<11;c++){
   	textcolor(c);
   	gotoxy(12,8);  cprintf("ZZZZZ   AAAAA   K   K   AAAAA   TTTTTTT   TTTTTTT II ZZZZZ  AAAAA  R R R     OOO    H   H"); Sleep(20);
      gotoxy(12,9);  cprintf("   Z    A   A   K K     A   A      T         T    II    Z   A   A  R    R  OO   OO  H   H"); Sleep(20);
      gotoxy(12,10); cprintf("  Z     AAAAA   K       AAAAA      T         T    II   Z    AAAAA  R R R  OO     OO HHHHH"); Sleep(20);
      gotoxy(12,11); cprintf(" Z      A   A   K K     A   A      T         T    II  Z     A   A  R  R    OO   OO  H   H"); Sleep(20);
      gotoxy(12,12); cprintf("ZZZZZ   A   A   K   K   A   A      T         T    II ZZZZZ  A   A  R    R    OOO    H   H"); Sleep(20);
   }
}
void judul_profesi(){
	clrscr();
	bingkai();
   for (int c=1;c<11;c++){
   	textcolor(c);
   	gotoxy(12,8);  cprintf("ZZZZZ  AAAAA  K   K  AAAAA  TTTTTTT    P P P   R R R      OOO     FFFFF  EEEEE  SSSSS  II"); Sleep(20);
      gotoxy(12,9);  cprintf("   Z   A   A  K K    A   A     T       P    P  R    R   OO   OO   F      E      S      II"); Sleep(20);
      gotoxy(12,10); cprintf("  Z    AAAAA  K      AAAAA     T       P P P   R R R   OO     OO  FFFF   EEEEE  SSSSS  II"); Sleep(20);
      gotoxy(12,11); cprintf(" Z     A   A  K K    A   A     T       P       R  R     OO   00   F      E          S  II"); Sleep(20);
      gotoxy(12,12); cprintf("ZZZZZ  A   A  K   K  A   A     T       P       R    R     OOO     F      EEEEE  SSSSS  II"); Sleep(20);
   }
}
void judulrikaz(){
	clrscr();
	bingkai();
	for (int c=1;c<11;c++){
   	textcolor(c);
   	gotoxy(18,8);  cprintf("ZZZZZ   AAAAA   K   K   AAAAA   TTTTTTT     R R R    II   K   K   AAAAA   ZZZZZ"); Sleep(20);
      gotoxy(18,9);  cprintf("   Z    A   A   K K     A   A      T        R    R   II   K K     A   A      Z"); Sleep(20);
      gotoxy(18,10); cprintf("  Z     AAAAA   K       AAAAA      T        R R R    II   K       AAAAA     Z"); Sleep(20);
      gotoxy(18,11); cprintf(" Z      A   A   K K     A   A      T        R  R     II   K K     A   A    Z"); Sleep(20);
      gotoxy(18,12); cprintf("ZZZZZ   A   A   K   K   A   A      T        R    R   II   K   K   A   A   ZZZZZ"); Sleep(20);
      }
}
void judul_saeful(){
	clrscr();
	bingkai();
	for (int c=1;c<11;c++){
   	textcolor(c);
   	gotoxy(13,8);  cprintf("SSSSS AAAAA EEEEE FFFFF U   U L        PPPP  RRRR     OO    GGGGG RRRR  AAAAA M       M"); Sleep(20);
      gotoxy(13,9);  cprintf("S     A   A E     F     U   U L        P   P R   R  OO  OO  G     R   R A   A MM     MM"); Sleep(20);
      gotoxy(13,10); cprintf("SSSSS AAAAA EEEEE FFF   U   U L        PPPP  RRRR  OO    OO G GGG RRRR  AAAAA M M   M M"); Sleep(20);
      gotoxy(13,11); cprintf("    S A   A E     F     U   U L        P     R R    OO  OO  G   G R R   A   A M  M M  M"); Sleep(20);
      gotoxy(13,12); cprintf("SSSSS A   A EEEEE F     UUUUU LLLLLL   P     R  R     OO    GGGGG R  R  A   A M   M   M"); Sleep(20);
      }
}
//////////////////////////////D U K U N G A N//////////////////////////////////////////////////////
void keluar_masuk(){
 judul_saeful();
 	for (int c=10;c<=102;c++){
   	textcolor(9);
      gotoxy(c,19);cprintf("%c",219);Sleep(5);
      if (c<14){
      	gotoxy(55,c+6);cprintf("%c",219);Sleep(5);

      }
   }bungkus_input();
   textcolor(10);
   gotoxy(25,17);cprintf("1.Masuk Akun");
   gotoxy(70,17);cprintf("2.Keluar program");
   gotoxy(34,34);cprintf(" Masukan Pilihan :");
	gotoxy(52,34);gets(log);
   while (true){
   	if(strcmp(log,"1")==0){
      	clrscr();
      	login();
   	}else if (strcmp(log,"2")==0){
   		clrscr();
         balik();
         exit(0);
   	}else{
      	spasi(log);
      }gotoxy(52,34); gets(log);
   }
}
////////////////////////////////////H A P U S///////////////////////////////////////////////////////
void spasi(char* q){
	salah();
   textcolor(10);
	for (int z=0;z<=strlen(q);z++){
   	gotoxy(52+z,34);printf(" ");
   }
   if(strlen(q)>23){
   	bungkus_input();
      if(strlen(q)>50)
      	bingkai();
   }
}
void spasi1(char* q){
	salah();
   textcolor(10);
	for (int z=0;z<=strlen(q);z++){
   	gotoxy(52+z,44);printf(" ");
   }
   if(strlen(q)>23){
   	bungkus_input1();
      if(strlen(q)>50)
      	bingkai();
   }
}
////////////////////////////////////////L O G I N/////////////////////////////////////////////////////
void login(){
   masuk();
   int b=1,c=1;
	gotoxy(33,26);printf("masukan nama pengguna");
   gotoxy(33,31);printf("masukan kata sandi");
   gotoxy(57,26);gets(log);
   gotoxy(57,31);gets(pasw);
   if (strlen(log)>22){
   	for(int u=0;u<=strlen(log);u++){
         gotoxy(57+u,26);printf(" ");
      	if(u==23){
         	textcolor(10);
         	gotoxy(80,26);cprintf("%c",219);
         }
   	}
   }
   if (strlen(pasw)>22){
   	for(int u=0;u<=strlen(pasw);u++){
         gotoxy(57+u,31);printf(" ");
      	if(u==23){
         	textcolor(10);
         	gotoxy(57+u,31);cprintf("%c",219);
         }
   	}
   }
   if (strcmp(log,user)==0 && strcmp(pasw,passw)==0){
       textcolor(10);
		gotoxy(48,20);cprintf("login berhasil");
      gotoxy(48,41);cprintf("LOADING");
      for(int a=1;a<=125;a++){
      }
      for(int a=1;a<=125;a++){
         if(a<=99 && a%25==0){
         c=1;
         gotoxy(55+c,41);cprintf("      ");
      	}
      	if (a<=100){
         	if(a%5==0){
         	gotoxy(55+c,41);cprintf(".");Sleep(100);
      		c++;
         	}
      		gotoxy(28,43);cprintf("%d%",a); Sleep(15);
      	}if(a<=100 && a%2==0){
      		gotoxy(30+b,43);cprintf("%c",219); Sleep(15);
      		b++;
      	}else{
         	gotoxy(80,43);printf(" "); Sleep(30);
         }
      }
      clrscr();
      menu();
	}else if(strcmp(log,user)!=0 && strcmp(pasw,passw)!=0){
      textcolor(12);
		gotoxy(37,20); cprintf("username dan pasword tidak diketahui!");
      login();
	}else if(strcmp(log,user)!=0 && strcmp(pasw,passw)==0){
      textcolor(12);
		gotoxy(45,20);cprintf("username tidak diketahui!");
      login();
	}else if(strcmp(log,user)==0 && strcmp(pasw,passw)!=0){
      textcolor(12);
		gotoxy(45,20);cprintf("pasword tidak diketahui!");
   	login();
   }
}
//////////////////////////////////P E M B A H A S A N/////////////////////////////////////
void pengertian_zakat(){
	clrscr();
	judulzakat();
   char aad[]=" PENGERTIAN ";
   char bad[]="Zakat Menurut Bahasa                                          ";
   char cad[]="     Adalah membersihkan diri atau mensucikan diri.           ";
   char dad[]="Zakat Menurut Istilah                                         ";
   char ead[]="     Adalah mengeluarkan harta kepada orang yang membutuhkan  ";
   char fad[]="atau yang berhak menerima dengan beberapa syarat sesuai dengan";
   char gad[]="syariat zakat.                                                ";
   q=w=0;
   for (int c=0;c<=strlen(aad);c++){
 	    gotoxy(50+c,19);printf("%c",aad[c]);Sleep(30);
   }
   for (int z=0;z<=strlen(bad)*2+1;z++){
   	if(z%2==0){
         gotoxy(24+q,22);printf("%c",bad[q]);Sleep(2);
      	gotoxy(24+q,26);printf("%c",dad[q]);Sleep(2);
         gotoxy(24+q,30);printf("%c",fad[q]);Sleep(2);
         q++;
      }else{
      	gotoxy(24+strlen(bad)-w,24);printf("%c",cad[strlen(bad)-w]);Sleep(2);
         gotoxy(24+strlen(bad)-w,28);printf("%c",ead[strlen(bad)-w]);Sleep(2);
      	gotoxy(24+strlen(bad)-w,32);printf("%c",gad[strlen(bad)-w]);Sleep(2);
         w++;
      }
   }
   char iad[]="  TEKAN APA SAJA UNTUK KEMBALI!";
   for (int c=0;c<=strlen(iad);c++){
 	    gotoxy(68+c,49);cprintf("%c",iad[c]);Sleep(25);
   }
   getch();
   pembahasan();
}
void syarat_fitrah(){
	clrscr();
	judulfitrah();
   char aas[]=" SYARAT-SYARAT MEMBAYAR ZAKAT FITRAH ";
   char bas[]="1.Orang Islam.                                                    ";
   char cas[]="2.Membayar zakat fitrah dilaksanakan setelah terbenamnya matahari ";
   char das[]="  dari bulan ramadhan sampai akhir bulan ramadan.                 ";
   char eas[]="3.Memiliki harta yang berlebih dengan ketentuan kelebihan harta   ";
   char fas[]="  untuk dirinya sendiri dan untuk keluarganya. Sedangkan bagi yang";
   char gas[]="  kekurangan tidak diwajibkan untuk membayar zakat fitrah.        ";
   q=w=0;
   for (int c=0;c<=strlen(aas);c++){
 	    gotoxy(45+c,19);printf("%c",aas[c]);Sleep(20);
   }
   for (int z=0;z<=strlen(bas)*2+2;z++){
   	if(z%2==0){
         gotoxy(24+q,22);printf("%c",bas[q]);Sleep(2);
      	gotoxy(24+q,26);printf("%c",das[q]);Sleep(2);
         gotoxy(24+q,30);printf("%c",fas[q]);Sleep(2);
         q++;
      }else{
      	gotoxy(24+strlen(bas)-w,24);printf("%c",cas[strlen(bas)-w]);Sleep(2);
         gotoxy(24+strlen(bas)-w,28);printf("%c",eas[strlen(bas)-w]);Sleep(2);
      	gotoxy(24+strlen(bas)-w,32);printf("%c",gas[strlen(bas)-w]);Sleep(2);
         w++;
      }
   }
   char ias[]="  TEKAN APA SAJA UNTUK KEMBALI!";
   for (int c=0;c<=strlen(ias);c++){
 	    gotoxy(68+c,49);cprintf("%c",ias[c]);Sleep(25);
   }
   getch();
   pembahasan_fitrah();
}
void rukun_fitrah(){
	clrscr();
	judulfitrah();
   char aaq[]=" RUKUN-RUKUN ZAKAT FITRAH ";
   char baq[]="1.Niat untuk menunaikan zakat fitrah dengan ikhlas semata - mata ";
   char caq[]="  karena Allah SWT. untuk mengetahui cara niatnya Baca Niat Zakat";
   char daq[]="  Fitah.                                                         ";
   char eaq[]="2.Terdapat pemberi zakat fitrah atau mudzaki.                    ";
   char faq[]="3.Terdapat penerima zakat fitrah atau mustahik.                  ";
   char gaq[]="4.Terdapat makanan pokok yang dizakatkan.                        ";
   char haq[]="5.Besar zakat fitrah yang dikeluarkan sesuai agama islam.        ";
   char iaq[]=" TEKAN APA SAJA UNTUK KEMBALI!";
   q=w=0;
   for (int c=0;c<=strlen(aaq);c++){
 	    gotoxy(45+c,19);printf("%c",aaq[c]);Sleep(25);
   }
   for (int z=0;z<=strlen(baq)*2+1;z++){
   	if(z%2==0){
         gotoxy(24+q,22);printf("%c",baq[q]);Sleep(2);
      	gotoxy(24+q,26);printf("%c",daq[q]);Sleep(2);
         gotoxy(24+q,30);printf("%c",faq[q]);Sleep(2);
         gotoxy(24+q,34);printf("%c",haq[q]);Sleep(2);
         q++;
      }else{
      	gotoxy(24+strlen(baq)-w,24);printf("%c",caq[strlen(baq)-w]);Sleep(2);
         gotoxy(24+strlen(baq)-w,28);printf("%c",eaq[strlen(baq)-w]);Sleep(2);
      	gotoxy(24+strlen(baq)-w,32);printf("%c",gaq[strlen(baq)-w]);Sleep(2);
         w++;
      }
   }
   for (int c=0;c<=strlen(iaq);c++){
 	    gotoxy(68+c,49);cprintf("%c",iaq[c]);Sleep(25);
   }
   getch();
   pembahasan_fitrah();
}
void mudzaki(){
	clrscr();
	judulzakat();
   char a[]="                       MUDZAQI ZAKAT                                   ";
   char b[]="1.Orang-orang fakir                                                    ";
   char c[]="      Adalah orang-orang yang benar-benar tidak mampu secara materil.  ";
   char d[]="2.Orang-Orang Miskin                                                   ";
   char e[]="      Adalah Orang-orang yang tidak mampu secara materil namun masih   ";
   char f[]="  punya sedikit harta.                                                 ";
   char g[]="3.Para Amil Zakat                                                      ";
   char h[]="      Adalah orang-orang yang bertugas menarik dan mengumpulkan  zakat.";
   char i[]="4.Orang-orang Muallaf                                                  ";
   char j[]="      Adalah orang-orang yang baru memeluk agama Islam.                ";
   char k[]="5.Untuk memerdekakan Budak                                             ";
   char l[]="      Adalah harta zakat yang digunakan untuk memerdekaan budak yang   ";
   char m[]="  beragama islam atau agar masuk islam.                                ";
   char n[]="6.Orang-orang yang Berhutang                                           ";
   char o[]="      Adalah orang yang mempunyai tanggungan berupa harta.             ";
   char p[]="7.para mujahid                                                         ";
   char qq[]="     Adalah orang yang sukarela berkorban dijalan Allah namun yang    ";
   char r[]="  tidak memiliki bagian atau gaji yang tetap dari kas negara.          ";
   char s[]="8.Musafir                                                              ";
   char t[]="      Adalah seorang yang musafir melintas di suatu negeri tanpa memba-";
   char u[]="  wa bekal yang cukup untuk kepentingan perjalanannya, maka dia pantas ";
   char v[]="  mendapat alokasi dari bagian zakat yang cukup hingga kembali ke nege-";
   char x[]="  rinya sendiri, meskipun ia seorang yang mempunyai harta.             ";
   char y[]="  TEKAN APA SAJA UNTUK KEMBALI!";
   for (int c=0;c<=strlen(a);c++){
 	    gotoxy(24+c,17);printf("%c",a[c]);Sleep(15);
   }
   q=w=0;
   for (int z=0;z<=strlen(b)*2+1;z++){
   	if(z%2==0){
         gotoxy(24+q,19);printf("%c",b[q]);Sleep(0.9);
      	gotoxy(24+q,22);printf("%c",d[q]);Sleep(1);
         gotoxy(24+q,24);printf("%c",f[q]);Sleep(1);
         gotoxy(24+q,27);printf("%c",h[q]);Sleep(1);
         gotoxy(24+q,30);printf("%c",j[q]);Sleep(0.9);
         gotoxy(24+q,33);printf("%c",l[q]);Sleep(1);
         gotoxy(24+q,36);printf("%c",n[q]);Sleep(0.9);
         gotoxy(24+q,39);printf("%c",p[q]);Sleep(1);
         gotoxy(24+q,41);printf("%c",r[q]);Sleep(0.9);
         gotoxy(24+q,44);printf("%c",t[q]);Sleep(1);
         gotoxy(24+q,46);printf("%c",v[q]);Sleep(1);
         q++;
      }else{
      	gotoxy(24+strlen(a)-w,20);printf("%c",c[strlen(a)-w]);Sleep(1);
         gotoxy(24+strlen(a)-w,23);printf("%c",e[strlen(a)-w]);Sleep(1);
      	gotoxy(24+strlen(a)-w,26);printf("%c",g[strlen(a)-w]);Sleep(0.9);
         gotoxy(24+strlen(a)-w,29);printf("%c",i[strlen(a)-w]);Sleep(1);
         gotoxy(24+strlen(a)-w,32);printf("%c",k[strlen(a)-w]);Sleep(1);
         gotoxy(24+strlen(a)-w,34);printf("%c",m[strlen(a)-w]);Sleep(1);
         gotoxy(24+strlen(a)-w,37);printf("%c",o[strlen(a)-w]);Sleep(0.9);
         gotoxy(24+strlen(a)-w,40);printf("%c",qq[strlen(a)-w]);Sleep(1);
         gotoxy(24+strlen(a)-w,43);printf("%c",s[strlen(a)-w]);Sleep(1);
         gotoxy(24+strlen(a)-w,45);printf("%c",u[strlen(a)-w]);Sleep(0.9);
         gotoxy(24+strlen(a)-w,47);printf("%c",x[strlen(a)-w]);Sleep(1);
         w++;
      }
   }
   for (int c=0;c<=strlen(y);c++){
 	    gotoxy(68+c,49);cprintf("%c",y[c]);Sleep(15);
   }
   getch();
   pembahasan();
}
void pembahasan_emas(){
	judulemas();
   char aaa[]=" PEMBAHASAN ZAKAT EMAS ";
   char baa[]=" Zakat ini hukum nya wajib, Orang yang mempunyai emas wajib       ";
   char caa[]=" mengeluarkan zakat ketika sudah sampai pada nishabnya, Nishab    ";
   char daa[]=" emas sebesar 20 dinar (85 gram), Dan zakat ini dikeluarkan ketika";
   char eaa[]=" sudah mencapai haul (setahun sekali), maksudnya ketika seseorang ";
   char faa[]=" mempunyai emas yang sudah mencapai nishab (85 gram) dan disimpan ";
   char gaa[]=" atau dipunyai selama satu tahun, maka wajib mengeluarkan zakat.  ";
   q=w=0;
   for (int c=0;c<=strlen(aaa);c++){
 	    gotoxy(45+c,19);printf("%c",aaa[c]);Sleep(25);
   }
   for (int z=0;z<=strlen(baa)*2+1;z++){
   	if(z%2==0){
         gotoxy(24+q,22);printf("%c",baa[q]);Sleep(2);
      	gotoxy(24+q,26);printf("%c",daa[q]);Sleep(2);
         gotoxy(24+q,30);printf("%c",faa[q]);Sleep(2);q++;
      }else{
      	gotoxy(24+strlen(baa)-w,24);printf("%c",caa[strlen(baa)-w]);Sleep(2);
         gotoxy(24+strlen(baa)-w,28);printf("%c",eaa[strlen(baa)-w]);Sleep(2);
      	gotoxy(24+strlen(baa)-w,32);printf("%c",gaa[strlen(baa)-w]);Sleep(2);
         w++;
      }
   }
   char iaa[]="  TEKAN APA SAJA UNTUK KEMBALI!";
   for (int c=0;c<=strlen(iaa);c++){
 	    gotoxy(68+c,49);cprintf("%c",iaa[c]);Sleep(25);
   }getch();
   emas();
}
void pembahasan_perak(){
	judulperak();
   textcolor(15);
   char a[]=" PEMBAHASAN ZAKAT PERAK ";
   char b[]=" Zakat ini hukum nya wajib, Orang yang mempunyai perak wajib     ";
   char c[]=" mengeluarkan zakat ketika sudah sampai pada nishabnya, Nishab   ";
   char d[]=" perak sebesar 200 dirham (595 gram),  Dan zakat ini dikeluarkan ";
   char e[]=" ketika sudah mencapai haul (setahun sekali), maksudnya ketika   ";
   char f[]=" seseorang mempunyai perak yang sudah mencapai nishab (595 gram) ";
   char g[]=" dan disimpan/dipunyai selama satu tahun, maka wajib mengeluarkan";
   char h[]=" zakat.                                                          ";
   char i[]="  TEKAN APA SAJA UNTUK KEMBALI!";
   q=w=0;
   for (int c=0;c<=strlen(a);c++){
 	    gotoxy(45+c,19);printf("%c",a[c]);Sleep(25);
   }
   for (int z=0;z<=strlen(b)*2+1;z++){
   	if(z%2==0){
         gotoxy(24+q,22);printf("%c",b[q]);Sleep(2);
      	gotoxy(24+q,26);printf("%c",d[q]);Sleep(2);
         gotoxy(24+q,30);printf("%c",f[q]);Sleep(2);
         gotoxy(24+q,34);printf("%c",h[q]);Sleep(2);
         q++;
      }else{
      	gotoxy(24+strlen(b)-w,24);printf("%c",c[strlen(b)-w]);Sleep(2);
         gotoxy(24+strlen(b)-w,28);printf("%c",e[strlen(b)-w]);Sleep(2);
      	gotoxy(24+strlen(b)-w,32);printf("%c",g[strlen(b)-w]);Sleep(2);
         w++;
      }
   }
   textcolor(10);
   for (int c=0;c<=strlen(i);c++){
 	    gotoxy(68+c,49);cprintf("%c",i[c]);Sleep(25);
   }
   getch();
   perak();
}
void pembahasan_maadin(){
	judulmaadin();
   char a[]=" PEMBAHASAN ZAKAT MAADIN ";
   char b[]="     Yang dimaksud ma'adin (barang galian) yaitu segala yang dari ";
   char c[]=" bumi yang berharga seperti timah, besi,emas, perak,dll.          ";
   char d[]="     Adapula yang berpendapat bahwa yang dimaksud dengan ma'adin  ";
   char e[]=" adalah segala sesuatu yang dikeluakan (didapatkan) oleh seseorang";
   char f[]=" dari laut atau darat (bumi), selain tumbuh-tumbuhan dan makhluk  ";
   char g[]=" bernyawa.                                                        ";
   char h[]="     Zakat ma'adin dikeluarkan setiap mendapatkannya tanpa nishab,";
   char i[]=" kadar zakatnya adalah 2,5%.                                      ";
   char j[]="  TEKAN APA SAJA UNTUK KEMBALI!";
   q=w=0;
   for (int c=0;c<=strlen(a);c++){
 	    gotoxy(40+c,19);printf("%c",a[c]);Sleep(20);
   }
   for (int z=0;z<=strlen(b)*2+1;z++){
   	if(z%2==0){
         gotoxy(20+q,22);printf("%c",b[q]);Sleep(2);
      	gotoxy(20+q,26);printf("%c",d[q]);Sleep(2);
         gotoxy(20+q,30);printf("%c",f[q]);Sleep(2);
         gotoxy(20+q,34);printf("%c",h[q]);Sleep(2);
         q++;
      }else{
      	gotoxy(20+strlen(b)-w,24);printf("%c",c[strlen(b)-w]);Sleep(2);
         gotoxy(20+strlen(b)-w,28);printf("%c",e[strlen(b)-w]);Sleep(2);
      	gotoxy(20+strlen(b)-w,32);printf("%c",g[strlen(b)-w]);Sleep(2);
         gotoxy(20+strlen(b)-w,36);printf("%c",i[strlen(b)-w]);Sleep(2);
         w++;
      }
   }
   textcolor(10);
   for (int c=0;c<=strlen(j);c++){
 	    gotoxy(68+c,49);cprintf("%c",j[c]);Sleep(25);
   }
   getch();
	maadin();
}
void pembahasan_rikaz(){
	judulrikaz();
   char a[]="PEMBAHASAN ZAKAT RIKAZ";
   char b[]=" Yang dimaksud rikaz adalah harta (barang temuan) yang sering ";
   char c[]=" dikenal dengan istilah harta karun. Tidak ada nishab dan haul";
   char d[]=" besar zakatnya 20%                                           ";
   char e[]="  TEKAN APA SAJA UNTUK KEMBALI!";
   q=w=0;
   for (int c=0;c<=strlen(a);c++){
 	    gotoxy(40+c,19);printf("%c",a[c]);Sleep(20);
   }
   for (int z=0;z<=strlen(b)*2+1;z++){
   	if(z%2==0){
         gotoxy(24+q,22);printf("%c",b[q]);Sleep(3);
      	gotoxy(24+q,26);printf("%c",d[q]);Sleep(3);
         q++;
      }else{
      	gotoxy(24+strlen(b)-w,24);printf("%c",c[strlen(b)-w]);Sleep(3);
         w++;
      }
   }
   textcolor(10);
   for (int c=0;c<=strlen(e);c++){
 	    gotoxy(68+c,49);cprintf("%c",e[c]);Sleep(25);
   }
   getch();
   rikaz();
}
void pembahasan_ziroah(){
	judulziroah();
	textcolor(15);
   char a[]="PEMBAHASAN ZAKAT ZIROAH";
   char b[]=" Hasil bumi wajib dikeluarkan zakatnya jika sudah mencapai";
   char c[]=" nishab yaitu 5 wasaq (650 Kg).                           ";
   char d[]=" Adapun kadar zakatnya ada dua macam, yaitu:              ";
   char e[]="   1.jika pengairannya alamiah (oleh hujan atau mata air) ";
   char f[]="     maka kadar zakatnya adalah 10%.                      ";
   char g[]="   2.jika pengairannya oleh tenaga manusia atau binatang  ";
   char h[]="     maka kadar zakatnya adalah 5%.                       ";
   char i[]="  TEKAN APA SAJA UNTUK KEMBALI!";
   q=w=0;
   for (int c=0;c<=strlen(a);c++){
 	    gotoxy(40+c,19);printf("%c",a[c]);Sleep(20);
   }
   for (int z=0;z<=strlen(b)*2+1;z++){
   	if(z%2==0){
         gotoxy(24+q,22);printf("%c",b[q]);Sleep(2);
      	gotoxy(24+q,27);printf("%c",d[q]);Sleep(2);
         gotoxy(24+q,31);printf("%c",f[q]);Sleep(2);
         gotoxy(24+q,35);printf("%c",h[q]);Sleep(2);
         q++;
      }else{
      	gotoxy(24+strlen(b)-w,24);printf("%c",c[strlen(b)-w]);Sleep(2);
         gotoxy(24+strlen(b)-w,29);printf("%c",e[strlen(b)-w]);Sleep(2);
      	gotoxy(24+strlen(b)-w,33);printf("%c",g[strlen(b)-w]);Sleep(2);
         w++;
      }
   }
   textcolor(10);
   for (int c=0;c<=strlen(i);c++){
 	    gotoxy(68+c,49);cprintf("%c",i[c]);Sleep(25);
   }
   getch();
	ziroah();
}
void pembahasan_tizaroh(){
	judultizaroh();
   textcolor(15);
   char a[]="PEMBAHASAN ZAKAT TIZAROH";
   char b[]=" Zakat tizaroh adalah semua yang diperuntukkan untuk diperjual belikan     ";
   char c[]=" dalam berbagai jenisnya, baik berupa barang seperti alat - alat, pakaian, ";
   char d[]=" makanan, perhiasan, dll. Perniagaan disini termasuk yang diusahakan secara";
   char e[]=" perorangan maupun kelompok/koporasi.                                      ";
   char f[]=" Zakat Tizaroh (perdagangan) Ketentuan zakat ini adalah tidak ada nishab,  ";
   char g[]=" diambil dari modal (harga beli), dihitung dari harga barang yang terjual  ";
   char h[]=" sebesar 2,5%.                                                             ";
   char i[]="  TEKAN APA SAJA UNTUK KEMBALI!";
   q=w=0;
   for (int c=0;c<=strlen(a);c++){
 	    gotoxy(40+c,19);printf("%c",a[c]);Sleep(20);
   }
   for (int z=0;z<=strlen(b)*2+1;z++){
   	if(z%2==0){
         gotoxy(20+q,22);printf("%c",b[q]);Sleep(2);
      	gotoxy(20+q,26);printf("%c",d[q]);Sleep(2);
         gotoxy(20+q,30);printf("%c",f[q]);Sleep(2);
         gotoxy(20+q,34);printf("%c",h[q]);Sleep(2);
         q++;
      }else{
      	gotoxy(20+strlen(b)-w,24);printf("%c",c[strlen(b)-w]);Sleep(2);
         gotoxy(20+strlen(b)-w,28);printf("%c",e[strlen(b)-w]);Sleep(2);
      	gotoxy(20+strlen(b)-w,32);printf("%c",g[strlen(b)-w]);Sleep(2);
         w++;
      }
   }
   textcolor(10);
   for (int c=0;c<=strlen(i);c++){
 	    gotoxy(68+c,49);cprintf("%c",i[c]);Sleep(25);
   }
   getch();
   tizaroh();
}
void pembahasan_profesi(){
	judul_profesi();
   char a[]="PEMBAHASAN ZAKAT PROFESI";
   char b[]=" Zakat profesi adalah zakat pndapatan dari hasil pekerjaann dengan    ";
   char c[]=" hitungan gaji perbulan ditambah bonus pendapatan lain-lain per bulan ";
   char d[]=" dikurangi pngeluaran kebutuhan pokok ( termasuk hutang jatuh tempo)  ";
   char e[]=" per bulan dan hasilnya dikalikan 2.5%                                ";
   char f[]="  TEKAN APA SAJA UNTUK KEMBALI!";
   q=w=0;
   for (int c=0;c<=strlen(a);c++){
 	    gotoxy(40+c,19);printf("%c",a[c]);Sleep(20);
   }
   for (int z=0;z<=strlen(b)*2+1;z++){
   	if(z%2==0){
         gotoxy(20+q,22);printf("%c",b[q]);Sleep(2);
      	gotoxy(20+q,26);printf("%c",d[q]);Sleep(2);
         q++;
      }else{
      	gotoxy(20+strlen(b)-w,24);printf("%c",c[strlen(b)-w]);Sleep(2);
         gotoxy(20+strlen(b)-w,28);printf("%c",e[strlen(b)-w]);Sleep(2);
         w++;
      }
   }
   textcolor(10);
   for (int c=0;c<=strlen(f);c++){
 	    gotoxy(68+c,49);cprintf("%c",f[c]);Sleep(25);
   }
   getch();
   profesi();
}
//////////////////////////////////P E M B E R I T A H U A N__S A L A H///////////////////////////
void salah(){
   int r=0,k=0;
   gotoxy(25,14); printf("                                                    ");
   for (int a=1;a<=70;a++){
   	textcolor(r+9);
      if(a%2==0){
      	gotoxy(11+k,14);cprintf(" Masukan"); Sleep(10);
         k++;
      }
      else{
      	textcolor(r+10);
      	gotoxy(94-r,14);cprintf("Benar! "); Sleep(10);
         gotoxy(54,14);cprintf("Tidak"); Sleep(10);
         r++;
      }
   }
}
void salah1(){
   int r=0,k=0;
   gotoxy(25,14); printf("                                                    ");
   for (int a=1;a<=53;a++){
   	textcolor(r+2);
      if(a%2==0){
      	gotoxy(11+k,14);cprintf(" Nilai Tertinggi"); Sleep(10);
         k++;
      }
      else{
      	textcolor(r+2);
      	gotoxy(86-r,14);cprintf("Triliun Rupiah "); Sleep(10);
         gotoxy(53,14);cprintf("Ribuan"); Sleep(10);
         r++;
      }
   }
}
void salah2(){
   int r=0,k=0;
   gotoxy(25,14); printf("                                                    ");
   for (int a=1;a<=56;a++){
   	textcolor(r);
      if(a%2==0){
      	gotoxy(11+k,14);cprintf(" maksimal"); Sleep(10);
         k++;
      }
      else{
      	textcolor(r+1);
      	gotoxy(86-r,14);cprintf("karakter "); Sleep(10);
         gotoxy(48,14);cprintf("lima belas"); Sleep(10);
         r++;
      }
   }
}
void salah3(){
   int r=0,k=0;
   gotoxy(25,14); printf("                                                    ");
   for (int a=1;a<=60;a++){
   	textcolor(r+14);
      if(a%2==0){
      	gotoxy(11+k,14);cprintf(" jumlah"); Sleep(10);
         k++;
      }
      else{
      	textcolor(r+15);
      	gotoxy(86-r,14);cprintf("ribuan jiwa  "); Sleep(10);
         gotoxy(48,14);cprintf("maksimal"); Sleep(10);
         r++;
      }
   }
}
void salah4(){
   int r=0,k=0;
   gotoxy(25,14); printf("                                                    ");
   for (int a=1;a<=47;a++){
   	textcolor(r+21);
      if(a%2==0){
      	gotoxy(11+k,14);cprintf(" maximal empat"); Sleep(10);
         k++;
      }
      else{
      	textcolor(r+21);
      	gotoxy(83-r,14);cprintf("angka jika float  "); Sleep(10);
         gotoxy(48,14);cprintf("belas digit"); Sleep(10);
         r++;
      }
   }
}
void salah5(){
   int r=0,k=0;
   gotoxy(25,14); printf("                                                    ");
   for (int a=1;a<=52;a++){
   	textcolor(r+18);
      if(a%2==0){
      	gotoxy(11+k,14);cprintf(" tidak boleh"); Sleep(10);
         k++;
      }
      else{
      	textcolor(r+19);
      	gotoxy(83-r,14);cprintf("simbol titik  "); Sleep(10);
         gotoxy(49,14);cprintf("diakhiri"); Sleep(10);
         r++;
      }
   }
}

void hapus_salah(){
  gotoxy(25,14); printf("                                                    ");
}
/////////////////////////////// V A L I D A S I/////////////////////////////////////
float rumus(char tamp1[100]){
	s=0;
   for (int a=0;a<=strlen(tamp1);a++){
      if(tamp1[a]>='0'&&tamp1[a]<='9')
   		s++;
   }
   while(s!=strlen(tamp1) || strlen(tamp1)==0 || tamp1[0]==' ' || strlen(tamp1)>16){
      if(strlen(tamp1)>16 && s==strlen(tamp1)){
        salah1();
   	}
   	else salah();
      int q=strlen(tamp1);
      for(int a=0;a<=q;a++){
      	gotoxy(86+a,23);printf(" ");
      }
      if(strlen(tamp1)>16) bingkai();
      gotoxy(86,23);gets(tamp1);
      s=0;
   	for (int a=0;a<=strlen(tamp1);a++){
         if(tamp1[a]>='0'&&tamp1[a]<='9')
   			s++;
   	}
   }
	return atof(tamp1);
}
float rumus1(char tamp1[100]){
   s=0;
   for (int a=0;a<=strlen(tamp1);a++){
      if(tamp1[a]>='0'&&tamp1[a]<='9')
   		s++;
   }while(s!=strlen(tamp1) || strlen(tamp1)==0 || tamp1[0]==' '|| strlen(tamp1)>16){
   	if(strlen(tamp1)>16 && s==strlen(tamp1)){
        salah1();
   	}
   	else salah();
      for(int a=0;a<=strlen(tamp1);a++){
      	gotoxy(83+a,25);printf(" ");
      }
      if(strlen(tamp1)>16) bingkai();
      gotoxy(83,25);gets(tamp1);
      s=0;
   	for (int a=0;a<=strlen(tamp1);a++){
         if(tamp1[a]>='0'&&tamp1[a]<='9')
   			s++;
   	}
   }return atof(tamp1);
}
float rumus4(char tamp1[100]){
	s=0;
   q=0;
   for (int a=0;a<=strlen(tamp1);a++){
   	if(tamp1[a]>='0'&&tamp1[a]<='9')
   		s++;
      else if (tamp1[a]=='.')
      	q++;
   }while(s+q!=strlen(tamp1) || strlen(tamp1)==0||strlen(tamp1)>16||tamp1[0]=='.'||tamp1[strlen(tamp1)-1]=='.'||q>1){
   	if(strlen(tamp1)>16 && s==strlen(tamp1)){
        salah1();
   	}else if(tamp1[strlen(tamp1)-1]=='.')
      	salah5();
      else if(1+s==strlen(tamp1))
      	salah4();
   	else salah();
      for(int a=0;a<=strlen(tamp1);a++){
      	gotoxy(83+a,23);printf(" ");
      }
      if(strlen(tamp1)>16) bingkai();
      gotoxy(83,23);gets(tamp1);
      s=0;
      q=0;
   	for (int a=0;a<=strlen(tamp1);a++){
         if(tamp1[a]>='0'&&tamp1[a]<='9')
   			s++;
         else if (tamp1[a]=='.')
      		q++;
   	}
   }return atof(tamp1);
}
float rumus3(char tamp2[100]){
	s=0;
   for (int a=0;a<=strlen(tamp2);a++){
   	if(tamp2[a]>='0'&&tamp2[a]<='9')
   		s++;
   }while(s!=strlen(tamp2) || strlen(tamp2)==0||strlen(tamp2)>16){
   	if(strlen(tamp2)>16 && s==strlen(tamp2)){
        salah1();
   	}
   	else salah();
      for(int a=0;a<=strlen(tamp2);a++){
      	gotoxy(83+a,23);printf(" ");
      }
      if(strlen(tamp2)>16) bingkai();
      gotoxy(83,23);gets(tamp2);
      s=0;
   	for (int a=0;a<=strlen(tamp2);a++){
         if(tamp2[a]>='0'&&tamp2[a]<='9')
   			s++;
   	}
   }return atof(tamp2);
}
char rumus2(char tamp1[100]){
   s=0;
   for (int a=0;a<=strlen(tamp1);a++){
      if (tamp1[a]==' '&&tamp1[a+1]==' ')
   			s++;
      if(tamp1[a]>='a'&&tamp1[a]<='z'||tamp1[a]>='A'&&tamp1[a]<='Z'||tamp1[a]==' ')
   		s++;
   }
   while(s!=strlen(tamp1) || strlen(tamp1)==0 ||tamp1[strlen(tamp1)-1]==' ' || tamp1[0]==' '||strlen(tamp1)>16 ){
      for(int a=0;a<=strlen(tamp1);a++){
      	gotoxy(83+a,23);printf(" ");
      }
      if(strlen(tamp1)>16){
      	bingkai();
         salah2();
      }else salah();
      gotoxy(83,23); gets(tamp1);
      s=0;
   	for (int a=0;a<=strlen(tamp1);a++){
         if (tamp1[a]==' '&&tamp1[a+1]==' ')
   			s++;
         if(tamp1[a]>='a'&&tamp1[a]<='z'||tamp1[a]>='A'&&tamp1[a]<='Z'||tamp1[a]==' ')
   			s++;
   	}
   }
   return atof(tamp1);
}
void pembahasan(){
	clrscr();
   judulzakat();
   bingkai();
   for (int c=10;c<=102;c++){
   	textcolor(9);
      gotoxy(c,19);cprintf("%c",219);Sleep(5);
      if (c<14){
      	gotoxy(78,c+6);cprintf("%c",219);Sleep(5);
         gotoxy(34,c+6);cprintf("%c",219);Sleep(5);
         gotoxy(55,c+6);cprintf("%c",219);Sleep(5);
      }
   }
   textcolor(10);
   gotoxy(13,17);cprintf("1.Pengertian Zakat");
   gotoxy(38,17);cprintf("2.Mudzaqi Zakat");
   gotoxy(63,17);cprintf("0.Kembali");
   gotoxy(84,17);cprintf("99.Keluar Akun");
   gotoxy(34,34);cprintf(" Masukan Pilihan : ");
   bungkus_input();
   gotoxy(52,34);gets(pilih);
   while (true){
   	if(strcmp(pilih,"1")==0){
      	pengertian_zakat();
   	}else if (strcmp(pilih,"2")==0){
      	mudzaki();
   	}else if (strcmp(pilih,"0")==0){
      	menu();
   	}else if (strcmp(pilih,"99")==0){
   		keluar_masuk();
		}else
         spasi(pilih);
         gotoxy(52,34); gets(pilih);
   }
}
//////////////////////// M E N U ___ I S I /////////////////////////////////////////
void pembahasan_fitrah(){
	judulfitrah();
   for (int c=10;c<=102;c++){
   	textcolor(9);
      gotoxy(c,19);cprintf("%c",219);Sleep(5);
      if (c<14){
      	gotoxy(78,c+6);cprintf("%c",219);Sleep(5);
         gotoxy(34,c+6);cprintf("%c",219);Sleep(5);
         gotoxy(55,c+6);cprintf("%c",219);Sleep(5);
      }
   }
   textcolor(10);
   gotoxy(12,17);cprintf("1.Syarat Zakat Fitrah");
   gotoxy(35,17);cprintf("2.Rukun Zakat Fitrah");
   gotoxy(63,17);cprintf("0.Kembali");
   gotoxy(84,17);cprintf("99.Keluar Akun");
   bungkus_input();
   gotoxy(34,34);cprintf(" Masukan Pilihan :");
   gotoxy(52,34);gets(pilih);
   while (true){
   	if(strcmp(pilih,"1")==0){
      	syarat_fitrah();
   	}else if (strcmp(pilih,"2")==0){
      	rukun_fitrah();
   	}else if (strcmp(pilih,"0")==0){
      	fitrah();
   	}else if (strcmp(pilih,"99")==0){
   		keluar_masuk();
		}else
      	spasi(pilih);
      gotoxy(52,34); gets(pilih);
   }
}
void fitrah(){
	judulfitrah();
	pembahasan_isi();
   gotoxy(52,34);gets(pilih);
   while (true){
   	if(strcmp(pilih,"1")==0){
      	pembahasan_fitrah();
   	}else if (strcmp(pilih,"2")==0){
   		hitung_fitrah();
   	}else if (strcmp(pilih,"0")==0){
   		menu();
		}else if (strcmp(pilih,"99")==0){
   		keluar_masuk();
   	}else
      	spasi(pilih);
         gotoxy(52,34); gets(pilih);
   }
}
void hitung_fitrah(){
 judulfitrah();
 gotoxy(12,23);printf("masukan jumlah jiwa");
 gotoxy(78,23);printf(":");
 gotoxy(83,23);gets(tamp1);
 s=0;
 for (int a=0;a<=strlen(tamp1);a++){
 	if(tamp1[a]>='0'&&tamp1[a]<='9')
   	s++;
 }while(s!=strlen(tamp1) || strlen(tamp1)==0 || tamp1[0]==' '||strlen(tamp1)>4){
   	if(strlen(tamp1)>4 && s==strlen(tamp1)){
        salah3();
   	}
   	else salah();
      for(int a=0;a<=strlen(tamp1);a++){
      	gotoxy(83+a,23);printf(" ");
      }
      if(strlen(tamp1)>16) bingkai();
      gotoxy(83,23);gets(tamp1);
      s=0;
   	for (int a=0;a<=strlen(tamp1);a++){
         if(tamp1[a]>='0'&&tamp1[a]<='9')
   			s++;
   	}
 	}
 hapus_salah();
 tm=atof(tamp1);
 gotoxy(12,25);printf("masukan harga barang pokok perkilo");
 gotoxy(78,25);printf(":");
 gotoxy(80,25);printf("Rp.");gets(tamp2);
 rumus1(tamp2);
 hapus_salah();
 float tam=atof(tamp2);
 gotoxy(15,32); printf("Zakat fitrah = jumlah jiwa x 2.5kg atau jumlah jiwa x harga perkilogram x 2.5kg ");
 gotoxy(15,35); printf("Zakat Emas = %.2f x 2.5kg ",tm);
 gotoxy(40+strlen(tamp1),35); printf("atau %.f x Rp.%.f-, x 2.5kg",tm,tam);
 gotoxy(15,38);printf("Jumlah zakat  yang harus dibayar adalah %.1fgr",tm*25/10);
 gotoxy(15,40);printf("atau setara dengan Rp.%.f,-",tam*tm*25/10);

 tampilanhitung();
   textcolor(10);
   gotoxy(60,17);cprintf("   98.Menu  ");
   gotoxy(52,44);gets(pilih);
    while (true){
   	if (strcmp(pilih,"1")==0){
   		hitung_fitrah();
   	}else if (strcmp(pilih,"0")==0){
   		fitrah();
		}else if (strcmp(pilih,"98")==0){
   		menu();
		}else if (strcmp(pilih,"99")==0){
   		keluar_masuk();
   	}else
      	spasi1(pilih);
         gotoxy(52,44);gets(pilih);
    }
}
void hitung_profesi(){
	judul_profesi();
	gotoxy(12,23); printf("masukan gaji per bulan");
   gotoxy(78,23); printf(":");
   gotoxy(80,23); printf("Rp.");gets(tamp1);
   s=0;
   for (int a=0;a<=strlen(tamp1);a++){
      if(tamp1[a]>='0'&&tamp1[a]<='9')
   		s++;
   }while(s!=strlen(tamp1) || strlen(tamp1)==0 || strlen(tamp1)>16){
   	if(strlen(tamp1)>16 && s==strlen(tamp1)){
        salah1();
   	}
   	else salah();
      for(int a=0;a<=strlen(tamp1);a++){
      	gotoxy(83+a,23);printf(" ");
      }
      if(strlen(tamp1)>16) bingkai();
      gotoxy(83,23);gets(tamp1);
      s=0;
   	for (int a=0;a<=strlen(tamp1);a++){
         if(tamp1[a]>='0'&&tamp1[a]<='9')
   			s++;
   	}
   }hapus_salah();
   gotoxy(12,25); printf("bonus pendapatan dan lain - lain per bulan ");
   gotoxy(78,25); printf(":");
   gotoxy(80,25); printf("Rp.");gets(tamp2);
   s=0;
   for (int z=0;z<=strlen(tamp2);z++){
      if(tamp2[z]>='0'&&tamp2[z]<='9')
   		s++;
   }while(s!=strlen(tamp2) || strlen(tamp2)==0 || strlen(tamp2)>16){
   	if(strlen(tamp2)>16 && s==strlen(tamp2)){
        salah1();
   	}
   	else salah();
      for(int z=0;z<=strlen(tamp2);z++){
      	gotoxy(83+z,25);printf(" ");
      }
      if(strlen(tamp2)>16) bingkai();
      gotoxy(83,25);gets(tamp2);
      s=0;
   	for (int z=0;z<=strlen(tamp2);z++){
         if(tamp2[z]>='0'&&tamp2[z]<='9')
   			s++;
   	}
   }hapus_salah();
   gotoxy(80,26); printf("_____________+");
   gotoxy(12,28); printf("penghasilan kotor perbualan adalah");
   gotoxy(78,28); printf(":");
   gotoxy(80,28); printf("Rp.%.lf",atof(tamp1)+atof(tamp2));
   gotoxy(12,30); printf("pengluaran kebutuhan pokok (termasuk hutang jatuh tempo)per bulan");
   gotoxy(78,30); printf(":");
   gotoxy(80,30); printf("Rp.");gets(log);
   s=0;
   for (int z=0;z<=strlen(log);z++){
      if(log[z]>='0'&&log[z]<='9')
   		s++;
   }while(s!=strlen(log) || strlen(log)==0 || strlen(log)>16){
   	if(strlen(log)>16 && s==strlen(log)){
        salah1();
   	}
   	else salah();
      for(int z=0;z<=strlen(log);z++){
      	gotoxy(83+z,30);printf(" ");
      }
      if(strlen(log)>16) bingkai();
      gotoxy(83,30);gets(log);
      s=0;
   	for (int z=0;z<=strlen(log);z++){
         if(log[z]>='0'&&log[z]<='9')
   			s++;
   	}
   }
   hapus_salah();
   float tzm=(atoi(tamp1)+atof(tamp2)-atof(log));
   gotoxy(80,32); printf("_____________-");
   gotoxy(12,34); printf("penghasilan bersih perbualan adalah");
   gotoxy(78,34); printf(":");
   gotoxy(80,34); printf("Rp.%.f",tzm);
   gotoxy(12,36); printf("harga beras per kilogram saat ini Rp.11449-, Nishab (520 kilogram)");
   gotoxy(78,36); printf(":");
   gotoxy(80,36); printf("Rp.5953480-,");
   gotoxy(12,38); printf("zakat profesi = penghasilan bersih X pengeluaran pokok (termasuk hutang jatuh tempo)");
   if(tzm>=5953480){
   	gotoxy(12,40);printf("Zakat yang harus anda bayar per bulan Rp.%.f-,",(tzm*25/1000));
      gotoxy(12,42);printf("atau pertahunya adalah Rp.%.f-,",tzm*25/1000*12);
   }else{
   	gotoxy(35,41);printf("Anda tidak cukup nishab!");
   }
   tampilanhitung();
   gotoxy(60,17);cprintf("    98.Menu      ");
   gotoxy(53,44);gets(pilih);
   while (true){
   	if(strcmp(pilih,"1")==0){
      	hitung_profesi();
   	}else if (strcmp(pilih,"0")==0){
   		profesi();
   	}else if (strcmp(pilih,"98")==0){
   		menu();
   	}else if (strcmp(pilih,"99")==0){
   		keluar_masuk();
		}else
         spasi1(pilih);
         gotoxy(53,44);gets(pilih);
   }
}
void profesi(){
	judul_profesi();
   pembahasan_isi();
   gotoxy(52,34);gets(pilih);
   while (true){
   	if(strcmp(pilih,"1")==0){
   		pembahasan_profesi();
   	}else if (strcmp(pilih,"2")==0){
         hitung_profesi();
   	}else if (strcmp(pilih,"0")==0){
   		menu();
   	}else if (strcmp(pilih,"99")==0){
   		keluar_masuk();
		}else
         spasi(pilih);
         gotoxy(52,34);gets(pilih);
   }
}
void satu(){
	judulzakat();
   for (int c=10;c<=102;c++){
   	textcolor(9);
      gotoxy(c,19);cprintf("%c",219);Sleep(5);
      if (c<14){
      	gotoxy(55,c+6);cprintf("%c",219);Sleep(5);
         gotoxy(32,c+6);cprintf("%c",219);Sleep(5);
         gotoxy(79,c+6);cprintf("%c",219);Sleep(5);
      }
   }
   bungkus_input();
   textcolor(10);
   gotoxy(16,17);cprintf("1. Zakat Emas");
   gotoxy(38,17);cprintf("2. Zakat perak");
   gotoxy(60,17);cprintf("0.Kembali");
   gotoxy(83,17);cprintf("99. keluar akun");
   gotoxy(34,34);cprintf(" Masukan Pilihan :                          ");
   gotoxy(52,34); gets(pilih);
   while (true){
   	if(strcmp(pilih,"1")==0){
      	emas();
   	}else if (strcmp(pilih,"2")==0){
   		perak();
   	}else if (strcmp(pilih,"0")==0){
   		mall();
   	}else if (strcmp(pilih,"99")==0){
   		keluar_masuk();
		}else
      spasi(pilih);
      gotoxy(52,34); gets(pilih);
   }
}
void hitungemas(){
	judulemas();
	gotoxy(12,23);  printf("masukan berat emas dalam bentuk gram :");
   gotoxy(83,23); gets(tamp1);
   rumus4(tamp1);
   hapus_salah();
   tm=atof(tamp1);
   if(tm>=0 && tm<=84){
   	gotoxy(25,33); printf("Anda tidak wajib jakat karna belum mencapai nishab sebesar 85gram");
   }else if (tm>=85){
   	gotoxy(12,25); printf("masukan harga emas per gram terkini  :");
    	gotoxy(80,25); printf("Rp."); gets(tamp2);
      rumus1(tamp2);
      hapus_salah();
    	gotoxy(77,26); printf(" ______________x");
    	gotoxy(12,27); printf("Total harga emas jika diuangkan      :");
    	gotoxy(79,28); printf("Rp.%.f",tm*atof(tamp2));
    	gotoxy(30,32); printf("Zakat Emas = Berat Emas x 2.5% atau Harga Emas x 2.5%");
    	gotoxy(30,35); printf("Zakat Emas =    %.2f x 2.5% ",tm);
    	gotoxy(58+strlen(tamp1),35); printf("atau Rp.%.f-, x 2.5%",tm*atof(tamp2));
    	gotoxy(15,38);printf("Jumlah zakat  yang harus dibayar adalah %.2fgr",tm*25/1000);
      gotoxy(15,40);printf("atau setara dengan Rp.%.f,-",atof(tamp2)*tm*25/1000);
	}
   tampilanhitung();
   textcolor(10);
   gotoxy(52,44);gets(pilih);
    while (true){
   	if (strcmp(pilih,"1")==0){
   		hitungemas();
   	}else if (strcmp(pilih,"0")==0){
   		emas();
		}else if (strcmp(pilih,"98")==0){
   		mall();
		}else if (strcmp(pilih,"99")==0){
   		keluar_masuk();
   	}else
      spasi1(pilih);
      gotoxy(52,44);gets(pilih);

    }
}
void emas(){
	judulemas();
   pembahasan_isi();
   gotoxy(52,34);gets(pilih);
   while (true){
   	if(strcmp(pilih,"1")==0){
      	pembahasan_emas();
   	}else if (strcmp(pilih,"2")==0){
   		hitungemas();
   	}else if (strcmp(pilih,"0")==0){
   		satu();
		}else if (strcmp(pilih,"99")==0){
   		keluar_masuk();
   	}else
      spasi(pilih);
      gotoxy(52,34); gets(pilih);
   }
}
void hitungperak(){
	judulperak();
	gotoxy(12,23);  printf("masukan berat perak dalam bentuk gram :");
   gotoxy(83,23); gets(tamp1);
   rumus4(tamp1);
   hapus_salah();
   tm=atof(tamp1);
   if(tm>=0 && tm<=594){
   	gotoxy(25,33); printf("Anda tidak wajib jakat karna belum mencapai nishab sebesar 595gram");
   }else if (tm>=595){
   	gotoxy(12,25); printf("masukan harga perak per gram terkini   :");
    	gotoxy(80,25); printf("Rp."); gets(tamp2);
      rumus1(tamp2);
      hapus_salah();
    	gotoxy(77,26); printf(" ______________x");
    	gotoxy(12,27); printf("Total harga perak jika diungkan        :");
    	gotoxy(79,28); printf("Rp.%.f",tm*atof(tamp2));
    	gotoxy(30,32); printf("Zakat perak = Berat Emas x 2.5% atau Harga Emas x 2.5%");
    	gotoxy(30,35); printf("Zakat perak =    %.2f x 2.5% ",tm);
    	gotoxy(59+strlen(tamp1),35); printf("atau Rp.%.f-, x 2.5%",tm*atof(tamp2));
    	gotoxy(15,38);printf("Jumlah zakat  yang harus dibayar adalah %.2fgr",tm*25/1000);
      gotoxy(15,40);printf("atau setara dengan Rp.%.f,-",atof(tamp2)*tm*25/1000);
	}else{
   	salah();
      hitungemas();
   }
   tampilanhitung();
   textcolor(10);
   gotoxy(52,44);gets(pilih);
    while (true){
   	if (strcmp(pilih,"1")==0){
   		hitungperak();
   	}else if (strcmp(pilih,"0")==0){
   		perak();
		}else if (strcmp(pilih,"98")==0){
   		mall();
		}else if (strcmp(pilih,"99")==0){
   		keluar_masuk();
   	}else
      spasi1(pilih);
      gotoxy(52,44);gets(pilih);
    }
}
void perak(){
	judulperak();
   pembahasan_isi();
   gotoxy(52,34);gets(pilih);
   while (true){
   	if(strcmp(pilih,"1")==0){
      	pembahasan_perak();
   	}else if (strcmp(pilih,"2")==0){
   		hitungperak();
   	}else if (strcmp(pilih,"0")==0){
   		satu();
		}else if (strcmp(pilih,"99")==0){
   		keluar_masuk();
   	}else
     	spasi(pilih);
      gotoxy(52,34); gets(pilih);
   }
}
void ziroah_hitung(){
	clrscr();
   judulziroah();
	gotoxy(12,23); printf("masukan berat barang hasil pertanian dalam bentuk kiligram(Kg) :");
   gotoxy(83,23);gets(log);
   w=strlen(log);
   s=0;
   q=0;
   for (int a=0;a<=w;a++){
   	if(log[a]>='0'&&log[a]<='9')
   		s++;
      else if (log[a]=='.')
      	q++;
   }while(s+q!=w || w==0||w>16||log[0]=='.'||log[w-1]=='.'||q>1){
   	if(w>16 && s==w){
        salah1();
   	}else if(log[w-1]=='.')
      	salah5();
      else if(1+s==w)
      	salah4();
   	else salah();
      for(int a=0;a<=w;a++){
      	gotoxy(83+a,23);printf(" ");
      }
      if(w>16) bingkai();
      gotoxy(83,23);gets(log);
      w=strlen(log);
      s=0;
      q=0;
   	for (int a=0;a<=w;a++){
         if(log[a]>='0'&&log[a]<='9')
   			s++;
         else if (log[a]=='.')
      		q++;
   	}
   }
   hapus_salah();
   float tam=atof(log);
   if (tam>=650){
   	gotoxy(12,25); printf("masukan harga pokok pertanian per kilogram (kg)                :");
      gotoxy(80,25); printf("Rp.");gets(pasw);
      q=strlen(pasw);
      s=0;
   	for (int z=0;z<=q;z++){
      	if(pasw[z]>='0'&&pasw[z]<='9')
   			s++;
   	}while(s!=q || q==0 || q>15){
   		if(q>15 && s==q){
        		salah1();
   		}
   		else salah();
      	for(int z=0;z<=q;z++){
      		gotoxy(83+z,25);printf(" ");
      	}
      	if(q>15) bingkai();
      	gotoxy(83,25);gets(pasw);
      	q=strlen(pasw);
         s=0;
   		for (int z=0;z<=q;z++){
         	if(pasw[z]>='0'&&pasw[z]<='9')
   				s++;
   		}
   	}
      hapus_salah();
    	gotoxy(34,29); printf("metode pengairan yang digunakan");
    	gotoxy(37,31); printf("1. pengairan alami");
    	gotoxy(37,33); printf("2. pengairan pribadi");
    	gotoxy(12,37);printf("masukan pilihan dengan angka 1 atau 2 :");gets(tamp1);
      uang=atof(pasw);
      while(true){
    		if(strcmp(tamp1,"1")==0){
   			gotoxy(15,40);printf("jumlah zakat yang harus dibayar adalah %.2f Kg",tam*10/100);
         	gotoxy(15,41);printf("atau setara dengan Rp.%.f,-",tam*uang*10/100); break;
         }else if (strcmp(tamp1,"2")==0){
        			gotoxy(15,40);printf("jumlah zakat yang harus dibayar adalah %.2f Kg",tam*10/100);
         		gotoxy(15,41);printf("atau setara dengan Rp.%.f,-",tam*uang*10/100); break;
         	for (int a=1;a<=20;a++){
            	textcolor(a);
               if (a<=10){
      				gotoxy(40+a,40);cprintf("pilihan tidak valid!"); Sleep(10);
               }
         	}
            gotoxy(12,37);printf("masukan pilihan dengan angka 1 atau 2 :  ");
            gotoxy(12,37);printf("masukan pilihan dengan angka 1 atau 2 :");gets(tamp1);
      	}
      }
   }else{
   	gotoxy(25,33);printf("anda tidak wajib jakat karna belum mencapai nishab sebesar 650 Kilogram");
   }
   tampilanhitung();
   gotoxy(52,44);gets(pilih);
   while (true){
   	if (strcmp(pilih,"1")==0){
   		ziroah_hitung();
   	}else if (strcmp(pilih,"0")==0){
   		ziroah();
		}else if (strcmp(pilih,"98")==0){
   		mall();
		}else if (strcmp(pilih,"99")==0){
   		keluar_masuk();
   	}else
      spasi1(pilih);
      gotoxy(52,44);gets(pilih);
    }
}
void ziroah(){
	judulziroah();
   pembahasan_isi();
   gotoxy(52,34);gets(pilih);
   while (true){
   	if(strcmp(pilih,"1")==0){
      	pembahasan_ziroah();
   	}else if (strcmp(pilih,"2")==0){
   		ziroah_hitung();
   	}else if (strcmp(pilih,"0")==0){
   		mall();
		}else if (strcmp(pilih,"99")==0){
   		keluar_masuk();
   	}else
      spasi(pilih);
      gotoxy(52,34);gets(pilih);
   }
}

void hitungmaadin(){
	judulmaadin();
	gotoxy(12,23); printf("masukan nama barang hasil galian   ");
   gotoxy(78,23); printf(":");
   gotoxy(83,23); gets(tamp1);
   rumus2(tamp1);
   hapus_salah();
   gotoxy(12,25); printf("masukan nilai %s dalam rupiah ",tamp1);
   gotoxy(78,25); printf(":");
   gotoxy(80,25); printf("Rp.");
   gotoxy(83,25); gets(tamp2);
   rumus1(tamp2);
   hapus_salah();
   gotoxy(30,32); printf("Zakat maadin %s = %s x 2.5%",tamp1,tamp1);
   gotoxy(30,35); printf("Zakat maadin %s = %.f x 2.5% ",tamp1,atof(tamp2));
   gotoxy(20,38);printf("zakat ma'adin yang harus dibayar dari barang %s adalah Rp.%.f,-",tamp1,atof(tamp2)*25/1000);
   tampilanhitung();
   gotoxy(53,44);gets(pilih);
   while (true){
   	if (strcmp(pilih,"1")==0){
   		hitungmaadin();
   	}else if (strcmp(pilih,"0")==0){
   		maadin();
		}else if (strcmp(pilih,"98")==0){
   		mall();
		}else if (strcmp(pilih,"99")==0){
   		keluar_masuk();
   	}else
      	spasi1(pilih);
         gotoxy(53,44);gets(pilih);
    }

}
void maadin(){
	judulmaadin();
   for (int c=10;c<=102;c++){
   	textcolor(9);
      gotoxy(c,19);cprintf("%c",219);Sleep(5);
      if (c<14){
      	gotoxy(55,c+6);cprintf("%c",219);Sleep(5);
         gotoxy(32,c+6);cprintf("%c",219);Sleep(5);
         gotoxy(79,c+6);cprintf("%c",219);Sleep(5);
      }
   }for (int c=1;c<=50;c++){
   	for (int d=1;d<=3;d++){
      	if (c==1 || d==1 || d==3 || c==50|| c+d<7 || c+d>47){
         	gotoxy(c+30,d+32);printf("%c",219);

         }else
				gotoxy(c+30,d+32);printf(" ");
   	}printf("\n");
   }textcolor(10);
   gotoxy(16,17);cprintf("1.Pembahasan");
   gotoxy(38,17);cprintf("2.Hitungan");
   gotoxy(60,17);cprintf("0.Kembali");
   gotoxy(87,17);cprintf("99. keluar akun");
   gotoxy(34,34);cprintf(" Masukan Pilihan :                          ");
   gotoxy(52,34);gets(pilih);
    while (true){
   	if(strcmp(pilih,"1")==0){
      	pembahasan_maadin();
   	}else if (strcmp(pilih,"2")==0){
   		hitungmaadin();
   	}else if (strcmp(pilih,"0")==0){
   		mall();
		}else if (strcmp(pilih,"99")==0){
   		keluar_masuk();
   	}else
         spasi(pilih);
         gotoxy(52,34);gets(pilih);
   }
}
void hitungrikaz(){
	judulrikaz();
	gotoxy(12,23); printf("masukan nama barang temuan");
   gotoxy(80,23); printf(":");
   gotoxy(83,23);gets(tamp1);
   rumus2(tamp1);
   hapus_salah();
   gotoxy(12,25); printf("masukan nilai %s dalam rupiah",tamp1);
   gotoxy(78,25); printf(":");
   gotoxy(80,25); printf("Rp.");gets(tamp2);
   rumus1(tamp2);
   hapus_salah();
   gotoxy(30,32); printf("Zakat rikaz %s = %s x 20%",tamp1,tamp1);
   gotoxy(30,35); printf("Zakat rikaz %s = %.f x 20% ",tamp1,atof(tamp2));
   gotoxy(20,38);printf("zakat rikaz yang harus dibayar dari barang %s adalah Rp.%.f,-",tamp1,atof(tamp2)*20/100);
   tampilanhitung();
   gotoxy(53,44);gets(pilih);
   while (true){
   	if(strcmp(pilih,"1")==0){
      	hitungrikaz();
   	}else if (strcmp(pilih,"0")==0){
   		rikaz();
   	}else if (strcmp(pilih,"98")==0){
   		mall();
   	}else if (strcmp(pilih,"99")==0){
   		keluar_masuk();
		}else
         spasi1(pilih);
         gotoxy(53,44);gets(pilih);
   }
}
void rikaz(){
	judulrikaz();
   pembahasan_isi();
   gotoxy(52,34);gets(pilih);
    while (true){
   	if(strcmp(pilih,"1")==0){
      	pembahasan_rikaz();
   	}else if (strcmp(pilih,"2")==0){
   		hitungrikaz();
   	}else if (strcmp(pilih,"0")==0){
   		mall();
   	}else if (strcmp(pilih,"99")==0){
   		keluar_masuk();
		}else
      spasi(pilih);
      gotoxy(52,34);gets(pilih);
   }
}
void mall(){
	judulmall();
	for (int c=10;c<44;c++){
   	textcolor(9);
      gotoxy(29,c+6);cprintf("%c",219); Sleep(10);
   }for (int c=10;c<29;c++){
      textcolor(9);
      gotoxy(c+1,20);cprintf("%c",219); Sleep(10);
      gotoxy(c+1,25);cprintf("%c",219); Sleep(10);
      gotoxy(c+1,30);cprintf("%c",219); Sleep(10);
      gotoxy(c+1,35);cprintf("%c",219); Sleep(10);
      gotoxy(c+1,40);cprintf("%c",219); Sleep(10);
      gotoxy(c+1,45);cprintf("%c",219); Sleep(10);
   }
   textcolor(10);
   gotoxy(12,17);cprintf("1.Zakat Emas ");
   gotoxy(12,18);cprintf("  Dan Perak ");
   gotoxy(12,22);cprintf("2.Zakat Ziroah");
   gotoxy(12,23);cprintf("(Hasil Pertanian)");
   gotoxy(12,27);cprintf("3.Zakat Maadin");
   gotoxy(12,28);cprintf("(Barang Galian)");
   gotoxy(12,32);cprintf("4.Zakat Rikaz");
   gotoxy(12,33);cprintf("(Barang Temuan)");
   gotoxy(12,37);cprintf("5.zakat Tijaroh");
   gotoxy(12,38);cprintf("(Barang Dagang)");
   gotoxy(12,42);cprintf("0.Kembali");
   gotoxy(12,47);cprintf("99.Keluar akun");
   for (int c=1;c<=50;c++){
   	for (int d=1;d<=3;d++){
      	if (c==1 || d==1 || d==3 || c==50|| c+d<7 || c+d>47){
         	gotoxy(c+45,d+33);printf("%c",219);
         }else{
				gotoxy(c+44,d+33);printf(" ");
         }
   	}printf("\n");
   }gotoxy(50,35);cprintf("Masukan No Pilihan :            ");
   gotoxy(70,35);gets(pilih);
   q=strlen(pilih);
   while (true){
   	if(strcmp(pilih,"1")==0){
      	satu();
   	}else if (strcmp(pilih,"2")==0){
      	ziroah();
   	}else if (strcmp(pilih,"3")==0){
      	maadin();
   	}else if (strcmp(pilih,"4")==0){
   		rikaz();
		}else if (strcmp(pilih,"5")==0){
   		tizaroh();
		}else if (strcmp(pilih,"0")==0){
   		menu();
		}else if (strcmp(pilih,"99")==0){
   		keluar_masuk();
		}else{
         salah();
      }for (int a=0;a<=q;a++){
      	gotoxy(70+a,35);printf(" ");
      }
      if(strlen(pilih)>20){
      	for (int c=1;c<=50;c++){
   			for (int d=1;d<=3;d++){
      			if (c==1 || d==1 || d==3 || c==50|| c+d<7 || c+d>47){
         			gotoxy(c+45,d+33);printf("%c",219);
         		}else{
						gotoxy(c+44,d+33);printf(" ");
         		}
   			}printf("\n");
   		}
      }if(strlen(pilih)>31)bingkai();
      textcolor(10);
      gotoxy(50,35);cprintf("Masukan No Pilihan :            ");
      gotoxy(70,35); gets(pilih);
   }
}
void hitung_tizaroh(){
	char hutang[100],kerugian[100];
	judultizaroh();
	gotoxy(12,21); printf("masukan nama barang yang di jual");
   gotoxy(50,21); printf(":");
   gotoxy(52,21); gets(tamp1);
   s=0;
   for (int a=0;a<=strlen(tamp1);a++){
   	if (tamp1[a]==' '&&tamp1[a+1]==' ')
   		s++;
      if(tamp1[a]>='a'&&tamp1[a]<='z'||tamp1[a]>='A'&&tamp1[a]<='Z'||tamp1[a]==' ')
   		s++;
   }while(s!=strlen(tamp1) || strlen(tamp1)==0 ||tamp1[strlen(tamp1)-1]==' ' || tamp1[0]==' '||strlen(tamp1)>16){
      for(int a=0;a<=strlen(tamp1);a++){
      	gotoxy(52+a,21);printf(" ");
      }
      if(strlen(tamp1)>16){
      	bingkai();
         salah2();
      }else salah();
      gotoxy(52,21); gets(tamp1);
      s=0;
   	for (int a=0;a<=strlen(tamp1);a++){
         if (tamp1[a]==' '&&tamp1[a+1]==' ')
   			s++;
         if(tamp1[a]>='a'&&tamp1[a]<='z'||tamp1[a]>='A'&&tamp1[a]<='Z'||tamp1[a]==' ')
   			s++;
   	}
   }
   hapus_salah();
   gotoxy(12,23); printf("modal %s yang diputar selama satu tahun",tamp1);
   gotoxy(78,23); printf(":");
   gotoxy(80,23); printf("Rp.");gets(tamp2);
   rumus3(tamp2);
   hapus_salah();
   gotoxy(12,25); printf("keuntungan %s selama satu tahun",tamp1);
   gotoxy(63,25); printf(":");
   gotoxy(65,25); printf("Rp.");gets(log);
   s=0;
   for (int a=0;a<=strlen(log);a++){
      if(log[a]>='0'&&log[a]<='9')
   		s++;
   }while(s!=strlen(log) || strlen(log)==0 || strlen(log)>16){
   	if(strlen(log)>16 && s==strlen(log)){
        salah1();
   	}
   	else salah();
      for(int a=0;a<=strlen(log);a++){
      	gotoxy(68+a,25);printf(" ");
      }
      if(strlen(log)>16) bingkai();
      gotoxy(68,25);gets(log);
      s=0;
   	for (int a=0;a<=strlen(log);a++){
         if(log[a]>='0'&&log[a]<='9')
   			s++;
   	}
   }hapus_salah();
   gotoxy(12,27); printf("piutang dagang");
   gotoxy(63,27); printf(":");
   gotoxy(65,27); printf("Rp.");gets(pasw);
   s=0;
   q=strlen(pasw);
   for (int a=0;a<=q;a++){
   	if(pasw[a]>='0'&&pasw[a]<='9')
   		s++;
   }while(s!=q || q==0||q>16){
   	if(q>16 && s==q){
        salah1();
   	}
   	else salah();
      for(int a=0;a<=q;a++){
      	gotoxy(68+a,27);printf(" ");
      }
      if(strlen(pasw)>16) bingkai();
      gotoxy(68,27);gets(pasw);
      q=strlen(pasw);
      s=0;
   	for (int a=0;a<=q;a++){
         if(pasw[a]>='0'&&pasw[a]<='9')
   			s++;
   	}
   }hapus_salah();
   gotoxy(63,28); printf("_____________+");
   gotoxy(12,29); printf("Taksiran penambahan modal");
   gotoxy(78,29); printf(":");
   gotoxy(80,29); printf("Rp.%.lf",atof(log)+atof(pasw));
   gotoxy(12,31); printf("hutang jatuh tempo");
   gotoxy(63,31); printf(":");
   gotoxy(65,31); printf("Rp.");gets(hutang);
   s=0;
   q=strlen(hutang);
   for (int a=0;a<=q;a++){
      if(hutang[a]>='0'&&hutang[a]<='9')
   		s++;
   }while(s!=q|| q==0 || q>16){
   	if(q>16 && s==q){
        salah1();
   	}
   	else salah();
      for(int a=0;a<=q;a++){
      	gotoxy(68+a,31);printf(" ");
      }
      if(q>16) bingkai();
      gotoxy(68,31);gets(hutang);
      s=0;
   	for (int a=0;a<=q;a++){
         if(hutang[a]>='0'&&hutang[a]<='9')
   			s++;
   	}
   }hapus_salah();
   gotoxy(12,33); printf("kerugian selama satu tahun");
   gotoxy(63,33); printf(":");
   gotoxy(65,33); printf("Rp.");gets(kerugian);
   s=0;
   int q=strlen(kerugian);
   for (int a=0;a<=q;a++){
      if(kerugian[a]>='0'&&kerugian[a]<='9')
   		s++;
   }while(s!=q || q==0 || q>16){
   	if(q>16 && s==q){
        salah1();
   	}
   	else salah();
      for(int a=0;a<=q;a++){
      	gotoxy(68+a,33);printf(" ");
      }
      if(q>16) bingkai();
      gotoxy(68,33);gets(kerugian);
      s=0;
      int q=strlen(kerugian);
   	for (int a=0;a<=q;a++){
         if(kerugian[a]>='0'&&kerugian[a]<='9')
   			s++;
   	}
   }hapus_salah();
   gotoxy(63,34); printf("_____________+");
   gotoxy(12,35); printf("Taksiran pengurangan modal");
   gotoxy(78,35); printf(":");
   gotoxy(80,35); printf("Rp.%.lf",atof(hutang)+atof(kerugian));
   gotoxy(78,36); printf("_______________+");
   float tzm=(atoi(tamp2)+atof(log)+atof(pasw))-(atof(hutang)+atof(kerugian));
   gotoxy(12,37); printf("Total modal bersih");
   gotoxy(78,37); printf(":");
   gotoxy(80,37); printf("Rp.%.f",tzm);
   gotoxy(12,39); printf("harga emas saat ini Rp.534649-, Nishab (85 gram)");
   gotoxy(78,39); printf(":");
   gotoxy(80,39); printf("Rp.45445165-,");
   if(tzm>=45445165){
   	gotoxy(12,41);printf("Zakat yang harus anda bayar per bulan Rp.%.f-, atau pertahunya adalah Rp.%.f",(tzm*25/1000)/12,tzm*25/1000);
   }else{
   	gotoxy(35,41);printf("Anda tidak cukup nishab!");
   }
   tampilanhitung();
   gotoxy(53,44);gets(pilih);
   while (true){
   	if(strcmp(pilih,"1")==0){
      	hitung_tizaroh();
   	}else if (strcmp(pilih,"0")==0){
   		tizaroh();
   	}else if (strcmp(pilih,"98")==0){
   		mall();
   	}else if (strcmp(pilih,"99")==0){
   		keluar_masuk();
		}else
         spasi1(pilih);
         gotoxy(53,44);gets(pilih);
   }
}
void tizaroh(){
	judultizaroh();
   pembahasan_isi();
   gotoxy(52,34);gets(pilih);
    while (true){
   	if(strcmp(pilih,"1")==0){
      	pembahasan_tizaroh();
   	}else if (strcmp(pilih,"2")==0){
      	hitung_tizaroh();
   	}else if (strcmp(pilih,"0")==0){
   		mall();
   	}else if (strcmp(pilih,"99")==0){
   		keluar_masuk();
		}else
         spasi(pilih);
         gotoxy(52,34);gets(pilih);
   }
}
/////////////////////////////////M E N U/////////////////////////////////////////////////
void menu(){
	judulzakat();
   textcolor(9);
	for (int c=10;c<=44;c++){
   	if (c<27){
      	gotoxy(c+1,23);cprintf("%c",219); Sleep(5);
         gotoxy(c+1,30);cprintf("%c",219); Sleep(5);
      	gotoxy(c+1,37);cprintf("%c",219); Sleep(5);
      	gotoxy(c+1,43);cprintf("%c",219); Sleep(5);
   	}if (c<44){
      	gotoxy(27,c+6);cprintf("%c",219); Sleep(5);
      }
   }
   textcolor(10);
   gotoxy(12,19);cprintf("1. Pembahasan");
   gotoxy(12,20);cprintf("    Zakat  ");
   gotoxy(12,26);cprintf("2. Zakat     ");
   gotoxy(12,27);cprintf("    Fitrah  ");
   gotoxy(12,33);cprintf("3. Zakat     ");
   gotoxy(12,34);cprintf("    Profesi ");
   gotoxy(12,40);cprintf("4. Zakat     ");
   gotoxy(12,41);cprintf("       Mall  ");
   gotoxy(12,46);cprintf("99. Keluar ");
   gotoxy(12,47);cprintf("        akun");
   gotoxy(34,34);cprintf("Masukan Pilihan :");
   bungkus_input();
   gotoxy(52,34);gets(pilih);
   while (true){
   	if(strcmp(pilih,"1")==0){
      	pembahasan();
   	}else if (strcmp(pilih,"2")==0){
      	fitrah();
   	}else if (strcmp(pilih,"3")==0){
      	profesi();
   	}else if (strcmp(pilih,"4")==0){
   		mall();
		}else if (strcmp(pilih,"99")==0){
   		keluar_masuk();
		}else{
         spasi(pilih);
         for (int c=10;c<=44;c++){
         		textcolor(9);
      			gotoxy(27,c+6);cprintf("%c",219);
         }
      }
      gotoxy(52,34); gets(pilih);
   }
}
main(){
masjid();
keluar_masuk();
}
