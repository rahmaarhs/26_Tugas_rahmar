#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <fstream.h>
#include <time.h>
#include "head.h"

main(){
	char kode[20],u[10],p[50],lk,pilih_menu,notif[20]="";
   login:
   head("LOGIN APLIKASI");
   cout<<notif;
   strcpy(notif,"");
   cout<<"silahkan login!"<<endl;
   cout<<"username  : ";gets(u);
   cout<<"password  : ";

   char str [100]="abcdefghijklmnopqrstuvwxyz1234567890";
	char karakter;
   for(int a=0;a<50;a++){
   	karakter=getch();
      if(karakter=='\r'){
			p[a]=NULL;break;
		}else if(karakter=='\b'){
			if(a!=0)
         cout<<"\b \b";
			p[a]=NULL;
			p[a-1]=NULL;
			a-=2;

         if(a<-1)a=-1;
         continue;
		}else if(strchr(strupr(str),karakter)-str<=35&&strchr(strupr(str),karakter)-str>=0){
      	cout<<"*";
         p[a]=karakter;
      }else if(strchr(strlwr(str),karakter)-str<=35&&strchr(strlwr(str),karakter)-str>=0){
      	cout<<"*";
         p[a]=karakter;
      }else{
         if(a>0){
           a-=1;
         }
      }
	}

   if((strcmp(u,"rahmaa")==0)&&(strcmp(p,"aiueold")==0)){
      clrscr();
      goto menu;
   }else{
      clrscr();
      strcpy(notif,"login gagal!!!\n");
      goto login;
   }
   menu:
   clrscr();
   head("MENU PEGADAIAN");
   cout<<notif;
   strcpy(notif,"");
   cout<<"selamat datang "<<u<<"!!"<<endl;
   cout<<"silahkan pilih menu "<<endl;
   cout<<"1. kepesertaan pegadaian syariah"<<endl;
   cout<<"0. logout"<<endl;
   cout<<"menu pilihan anda adalah : ";cin>>pilih_menu;
   if(pilih_menu=='0'){
   	goto akhir;
   }else if(pilih_menu=='1'){
   	clrscr();
      goto menu;
   }else{
   	strcpy(notif,"menu tidak tersedia!!\n");
      goto menu;
   }
   akhir:
   clrscr();
   head("LOGOUT APLIKASI");
   cout<<"logout berhasil!!"<<endl;
   cout<<"ingin login kembali??? [Y/y] : ";cin>>lk;
   if(lk=='Y'||lk=='y'){
   	clrscr();
   	goto login;
   }
   cout<<"sampai jumpa!!"<<endl;
   getch();
}