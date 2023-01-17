#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include "biodata.h"
main()
{
char pass[100]="fazri",user[100],wadah,notif[100]="";
int x,y;
bool value;
login:
clrscr();
biodata("BIODATA");
y=0;
value=false;
cout<<notif;
strcpy(notif,"");
cout<<"Silakan Login!!"<<endl;
cout<<"Username	:";gets(user);
cout<<"Password	:";
for(x=0;x<=100;x++) {
wadah=getch();
if(wadah==pass[x]) {
cout<<'*';
y++;
value=true;
}
else if(wadah=='\r') {
x=100;
}
else if(wadah=='\b') {
cout<<"\b \b";
x=x-2;
if(value==true) {
y--;
}
}
else {
value=false;
cout<<'*';
}
}
if((strcmp(user,"maulidan")==0) && y==strlen(pass)) {
strcpy(notif,"Selamat Datang");
goto selesai;
}
else {
strcpy(notif,"Upaya Login Gagal\n");
goto login;
}
selesai:
clrscr();
cout<<notif<<ends<<user;
getch();
}


