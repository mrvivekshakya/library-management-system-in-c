#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<string.h>
void man();
void home();
void account();
void mainacc();
void mainaccfg();
void guestacc();
void login();
void logedin();
FILE *f;
FILE *lg;

struct macc
{
  char fname[20],lname[20],uname[20],pass[20],cpass[20],mob[10],email[30],back[10],data[10],liname[20],atype[20];
};
struct macc ma;
struct login
{
  char uname[20],pass[20];
};
struct login l;
struct date d;
struct time t;
void main()
{
  int i;
  clrscr();
  getdate(&d);
  gettime(&t);
  printf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
  printf("±±€ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€±±");
  printf("±±€                             W E L C O M E    TO                          €±±");
  printf("±±€ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€±±");
  printf("±±€  *********    **********        ****************    ***             ***  €±±");
  printf("±±€  *********    *************     ****************    ****          *****  €±±");
  printf("±±€     ***       ***        ***    ***                 ******      *** ***  €±±");
  printf("±±€     ***       ***         ***   ***                 *** ***    ***  ***  €±±");
  printf("±±€     ***       ***         ***   ***                 ***  ***  ***   ***  €±±");
  printf("±±€     ***       ***        ***    ***                 ***   *****     ***  €±±");
  printf("±±€     ***       *************     *************       ***    ***      ***  €±±");
  printf("±±€     ***       **********        *************       ***             ***  €±±");
  printf("±±€     ***       ***               ***                 ***             ***  €±±");
  printf("±±€     ***       ***               ***                 ***             ***  €±±");
  printf("±±€     ***       ***               ***                 ***             ***  €±±");
  printf("±±€     ***       ***               ***                 ***             ***  €±±");
  printf("±±€  *********    ***               ****************    ***             ***  €±±");
  printf("±±€  *********    ***               ****************    ***             ***  €±±");
  printf("±±€                                                                          €±±");
  printf("±±€                                 Press any key to continue.               €±±");
  printf("±±€ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€±±");
  printf("±±€  STATUS BAR                           Date: %02d/%02d/%04d  Time: %02d/%02d/%02d   €±±",d.da_day,d.da_mon,d.da_year,t.ti_hour,t.ti_min,t.ti_sec);
  printf("±±€‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹€±±");
  printf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
  gotoxy(63,20);
  for(i=0;i<7;i++)
  {
    delay(300);
    printf(".");
  }
  getch();
  home();
}
void man()
{
  clrscr();
  printf("HELLO");
}
void home()
{
  int flag=1,na,ng;
  char c;
  while(1)
  {
    clrscr();
    na=0;
    ng=0;
    getdate(&d);
    gettime(&t);
    printf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
    printf("±±                                                                            ±±");
    printf("±±    M A S T E R J I   L I B R A R Y   M A N A G E M E N T   S Y S T E M     ±±");
    printf("±± €ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ ±±");
    printf("±± €       MAIN MENU        €                   NOTIFICATION                € ±±");
    printf("±± €ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± €  1. Login              €   Last Five Login by                          € ±±");
    printf("±± €  2. Create New Account € ˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛ € ±±");
    printf("±± €  3. Manage Account     €                                               € ±±");
    printf("±± €  4. Setting            €                                               € ±±");
    printf("±± €  5. Rulls & Regulation €                                               € ±±");
    printf("±± €  6. About the Project  €                                               € ±±");
    printf("±± €  0. Exit               €                                               € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± €  Enter Your Choice:    € ˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛ € ±±");
    printf("±± €                        €   Total Administrator Account in Library:    € ±±");
    printf("±± €                        €   Total Guest Account in Library:            € ±±");
    printf("±± €                        € 				                    € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ ±±");
    printf("±±   STATUS BAR                           Date: %02d/%02d/%04d  Time: %02d/%02d/%02d    ±±",d.da_day,d.da_mon,d.da_year,t.ti_hour,t.ti_min,t.ti_sec);
    printf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
    gotoxy(33,10);
    lg=fopen("library_login.dat","rb");
    while(1)
    {
      fread((char *)&l,sizeof(l),1,lg);
      if(feof(lg))
      {
	flag=0;
	break;
      }
      if(flag)
	printf("%s\n",l.uname);
      else
	printf("No Records");
    }
    fclose(lg);
    f=fopen("library.dat","rb");
    while(1)
    {
      fread((char *)&ma,sizeof(ma),1,f);
      if(feof(f))
	break;
      if(strcmpi(ma.atype,"Adminnistrator")==0)
	na++;
      if(strcmpi(ma.atype,"Guest")==0)
	ng++;
    }
    fclose(f);
    gotoxy(74,18);
    printf("%d",na);
    gotoxy(66,19);
    printf("%d",ng);
    gotoxy(26,17);
    c=getche();
    if(c=='1')
      login();
    if(c=='2')
      account();
    if(c=='0')
      break;
    getch();
  }
}


void account()
{
  char c;
  while(1)
  {
    clrscr();
    printf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
    printf("±±                                                                            ±±");
    printf("±±    M A S T E R J I   L I B R A R Y   M A N A G E M E N T   S Y S T E M     ±±");
    printf("±± €ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ ±±");
    printf("±± €       MAIN MENU        €                CHOOSE ACCOUNT TYPE            € ±±");
    printf("±± €ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± €   Login                €   1. Create New Account for Library	    € ±±");
    printf("±± €   Create New Account   €                                               € ±±");
    printf("±± €   Manage Account       €   2. Create Guest Account of Main Account     € ±±");
    printf("±± €   Setting              €                                               € ±±");
    printf("±± €   Rulls & Regulation   €   3. Go to Previous Menu	                    € ±±");
    printf("±± €   About the Project    €                                               € ±±");
    printf("±± €   Exit                 €   0. Exit   				    € ±±");
    printf("±± €                        €        		     		            € ±±");
    printf("±± €                        € ˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛ € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± €                        €  Enter your choice:                           € ±±");
    printf("±± €                        €         				            € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ ±±");
    printf("±±   STATUS BAR                           Date: %02d/%02d/%04d  Time: %02d/%02d/%02d    ±±",d.da_day,d.da_mon,d.da_year,t.ti_hour,t.ti_min,t.ti_sec);
    printf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
    gotoxy(51,18);
    c=getche();
	    if(c=='1')
      mainacc();
    if(c=='2')
      guestacc();
    if(c=='3')
      break;
    if(c=='0')
      exit();
  }
}
void mainacc()
{
  int i,j;
  char c;
  strcpy(ma.atype,"Administrator");
    clrscr();
    getdate(&d);
    gettime(&t);
    printf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
    printf("±±                                                                            ±±");
    printf("±±    M A S T E R J I   L I B R A R Y   M A N A G E M E N T   S Y S T E M     ±±");
    printf("±± €ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ ±±");
    printf("±± €      INSTRUCTIONS      €                CREATE NEW ACCOUNT             € ±±");
    printf("±± €ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± €   All  Fields  are    €  FIRST NAME   :                               € ±±");
    printf("±± €        required.       €  LAST NAME    :                               € ±±");
    printf("±± €                        €  USER NAME    :                               € ±±");
    printf("±± €   Password  and       €  PASSWORD     :                               € ±±");
    printf("±± €    Confirm  Password   €  CONFIRM PASS.:                               € ±±");
    printf("±± €    must  be  same.     €  MOBILE NUMBER:                               € ±±");
    printf("±± €                        €  EMAIL        :                               € ±±");
    printf("±± €   Backup  key  and    €  BACKUP KEY   :          DATAKEY:             € ±±");
    printf("±± €    Data  key  must be  €  LIBRARY NAME :                               € ±±");
    printf("±± €    different.          €  ACCOUNT TYPE :                               € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ ±±");
    printf("±±   STATUS BAR                           Date: %02d/%02d/%04d  Time: %02d/%02d/%02d    ±±",d.da_day,d.da_mon,d.da_year,t.ti_hour,t.ti_min,t.ti_sec);
    printf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
    gotoxy(47,8);
    gets(ma.fname);
    gotoxy(47,9);
    gets(ma.lname);
    gotoxy(47,10);
    gets(ma.uname);
  p:gotoxy(47,11);
/*    while(1)
    {
      c=getch();
      if(c==13)
	break;
      ma.pass[i]=c;
      printf("*");
      i++;
    }
    ma.pass[i]='\0';       */
    gets(ma.pass);
    gotoxy(47,12);
  /*  while(1)
    {
      c=getch();
      if(c==13)
	break;
      ma.cpass[i]=c;
      printf("*");
      i++;
    }
    ma.cpass[i]='\0'; */
    gets(ma.cpass);
    gotoxy(47,13);
    gets(ma.mob);
    gotoxy(47,14);
    gets(ma.email);
    gotoxy(47,15);
    gets(ma.back);
    gotoxy(65,15);
    gets(ma.data);
    gotoxy(47,16);
    gets(ma.liname);
    gotoxy(47,17);
    printf("Administrator");
    f=fopen("library.dat","ab");
    fwrite((char *)&ma,sizeof(ma),1,f);
    fclose(f);
    if(strcmp(ma.pass,ma.cpass)==0)
    {
      gotoxy(35,19);
      printf("Account Created Successfully.");
      for(i=0;i<8;i++)
      {
	printf(".");
	delay(300);
      }
    }
    else
    {
      printf("                ");
      gotoxy(47,12);
      printf("                ");
      gotoxy(47,11);
      goto p;
    }
    getch();
}
void mainaccfg()
{
  int i,j;
  char c;
  strcpy(ma.atype,"Guest");
    clrscr();
    getdate(&d);
    gettime(&t);
    printf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
    printf("±±                                                                            ±±");
    printf("±±    M A S T E R J I   L I B R A R Y   M A N A G E M E N T   S Y S T E M     ±±");
    printf("±± €ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ ±±");
    printf("±± €      INSTRUCTIONS      €                CREATE GUEST ACCOUNT           € ±±");
    printf("±± €ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± €   All  Fields  are    €  FIRST NAME   :                               € ±±");
    printf("±± €        required.       €  LAST NAME    :                               € ±±");
    printf("±± €                        €  USER NAME    :                               € ±±");
    printf("±± €   Password  and       €  PASSWORD     :                               € ±±");
    printf("±± €    Confirm  Password   €  CONFIRM PASS.:                               € ±±");
    printf("±± €    must  be  same.     €  MOBILE NUMBER:                               € ±±");
    printf("±± €                        €  EMAIL        :                               € ±±");
    printf("±± €   Backup  key  and    €  BACKUP KEY   :          DATAKEY:             € ±±");
    printf("±± €    Data  key  must be  €  LIBRARY NAME :                               € ±±");
    printf("±± €    different.          €  ACCOUNT TYPE :                               € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ ±±");
    printf("±±   STATUS BAR                           Date: %02d/%02d/%04d  Time: %02d/%02d/%02d    ±±",d.da_day,d.da_mon,d.da_year,t.ti_hour,t.ti_min,t.ti_sec);
    printf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
    gotoxy(47,8);
    gets(ma.fname);
    gotoxy(47,9);
    gets(ma.lname);
    gotoxy(47,10);
    gets(ma.uname);
  p:gotoxy(47,11);
/*    while(1)
    {
      c=getch();
      if(c==13)
	break;
      ma.pass[i]=c;
      printf("*");
      i++;
    }
    ma.pass[i]='\0';       */
    gets(ma.pass);
    gotoxy(47,12);
  /*  while(1)
    {
      c=getch();
      if(c==13)
	break;
      ma.cpass[i]=c;
      printf("*");
      i++;
    }
    ma.cpass[i]='\0'; */
    gets(ma.cpass);
    gotoxy(47,13);
    gets(ma.mob);
    gotoxy(47,14);
    gets(ma.email);
    gotoxy(47,15);
    gets(ma.back);
    gotoxy(65,15);
    gets(ma.data);
    gotoxy(47,16);
    gets(ma.liname);
    gotoxy(47,17);
    printf("Guest");
    f=fopen("library.dat","ab");
    fwrite((char *)&ma,sizeof(ma),1,f);
    fclose(f);
    if(strcmp(ma.pass,ma.cpass)==0)
    {
      gotoxy(35,19);
      printf("Account Created Successfully.");
      for(i=0;i<8;i++)
      {
	printf(".");
	delay(300);
      }
    }
    else
    {
      printf("                ");
      gotoxy(47,12);
      printf("                ");
      gotoxy(47,11);
      goto p;
    }
    getch();
}
void guestacc()
{
    int ctr=0,i,j;
    char c;
    clrscr();
    getdate(&d);
    gettime(&t);
    printf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
    printf("±±                                                                            ±±");
    printf("±±    M A S T E R J I   L I B R A R Y   M A N A G E M E N T   S Y S T E M     ±±");
    printf("±± €ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ ±±");
    printf("±± €      INFORMATION       €               CREATE  GUEST ACCOUNT           € ±±");
    printf("±± €ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ ±±");
    printf("±± €  You can create a     €                                               € ±±");
    printf("±± €   Guest Account if you €                                               € ±±");
    printf("±± €   are a Administrator  €                                               € ±±");
    printf("±± €                        €   USERNAME:                                   € ±±");
    printf("±± €  In this system Guest €                                               € ±±");
    printf("±± €   can also manage all  €   PASSWORD:                                   € ±±");
    printf("±± €   Accounts  in   this  €                                               € ±±");
    printf("±± €   Program              €                                               € ±±");
    printf("±± €                        €  Warning: Username and Password would match   € ±±");
    printf("±± €                        €           with case [Case Sensitive].         € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± €    	            € 				                    € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ ±±");
    printf("±±   STATUS BAR                           Date: %02d/%02d/%04d  Time: %02d/%02d/%02d    ±±",d.da_day,d.da_mon,d.da_year,t.ti_hour,t.ti_min,t.ti_sec);
    printf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
  l:gotoxy(43,10);
    gets(l.uname);
    gotoxy(43,12);
  /*  while(1)
    {
      c=getch();
      if(c==13)
	break;
      l.pass[j]=c;
      printf("*");
      j++;
    }
    l.pass[j]='\0';    */
    gets(l.pass);
    f=fopen("library.dat","rb");
    ctr++;
    while(1)
    {
      fread((char *)&ma,sizeof(ma),1,f);
      if(feof(f))break;
      if(strcmp(l.uname,ma.uname)==0 && strcmp(l.pass,ma.pass)==0)
      {
	mainaccfg();
      }
      else
      {
	gotoxy(43,10);
	printf("                    ");
	gotoxy(43,12);
	printf("                    ");
	gotoxy(31,18);
	printf("Sorry Your Username or Password is incorrect.");
	if(ctr==3)
	{
	  gotoxy(32,20);
	  printf("Press any key for revious menu.");
	  for(i=0;i<8;i++)
	  {
	    printf(".");
	    delay(300);
	  }
	  break;
	}
	goto l;
      }
      getch();
    }
    fclose(f);

}
void login()
{
    int ctr=0,i,j;
    char c;
    clrscr();
    getdate(&d);
    gettime(&t);
    printf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
    printf("±±                                                                            ±±");
    printf("±±    M A S T E R J I   L I B R A R Y   M A N A G E M E N T   S Y S T E M     ±±");
    printf("±± €ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ ±±");
    printf("±± €       MAIN MENU        €                LOGIN TO YOUR ACCOUT           € ±±");
    printf("±± €ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± €    Login               €                                               € ±±");
    printf("±± €    Create New Account  €                                               € ±±");
    printf("±± €    Manage Account      €   USERNAME:                                   € ±±");
    printf("±± €    Setting             €                                               € ±±");
    printf("±± €    Rulls & Regulation  €   PASSWORD:                                   € ±±");
    printf("±± €    About the Project   €                                               € ±±");
    printf("±± €    Exit                €                                               € ±±");
    printf("±± €                        €  Warning: Username and Password would match   € ±±");
    printf("±± €                        €           with case [Case Sensitive].         € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± €                        € 				                    € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ ±±");
    printf("±±   STATUS BAR                           Date: %02d/%02d/%04d  Time: %02d/%02d/%02d    ±±",d.da_day,d.da_mon,d.da_year,t.ti_hour,t.ti_min,t.ti_sec);
    printf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
  l:gotoxy(43,10);
    gets(l.uname);
    gotoxy(43,12);
/*    while(1)
    {
      c=getch();d
      if(c==13)
	break;
      l.pass[j]=c;
      printf("*");
      j++;
    }
    l.pass[j]='\0'; */
    gets(l.pass);
    f=fopen("library.dat","rb");
    ctr++;

    while(1)
    {
      fread((char *)&ma,sizeof(ma),1,f);
      if(feof(f))
	break;
      if(strcmpi(l.uname,ma.uname)==0 && strcmp(l.pass,ma.pass)==0)
      {
	lg=fopen("library_login.dat","ab");
	fwrite((char *)&l,sizeof(l),1,lg);
	fclose(lg);
	logedin();
      }
      else
      {
	gotoxy(43,10);
	printf("                    ");
	gotoxy(43,12);
	printf("                    ");
	gotoxy(31,18);
	printf("Sorry Your Username or Password is incorrect.");
	if(ctr==3)
	{
	  gotoxy(32,20);
	  printf("Press any key for revious menu.");
	  for(i=0;i<8;i++)
	  {
	    printf(".");
	    delay(300);
	  }
	  break;
	}
	goto l;
      }
      getch();
    }
    fclose(f);
}
void logedin()
{
  char c;
  while(1)
  {
    clrscr();
    printf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
    printf("±±                                                                            ±±");
    printf("±±    M A S T E R J I   L I B R A R Y   M A N A G E M E N T   S Y S T E M     ±±");
    printf("±± €ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ ±±");
    printf("±± €      IBRARY MENU       €                   NOTIFICATIONS               € ±±");
    printf("±± €ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ€ ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± €  1. Book Management    €  Library Information                	    € ±±");
    printf("±± €  2. Book Transaction   € ˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛˛ € ±±");
    printf("±± €  3. Students Manag.    €                                               € ±±");
    printf("±± €  4. Categories Manag.  €                                               € ±±");
    printf("±± €  5. Profile            €   Total Book's in Library   :                € ±±");
    printf("±± €  6. Logout             €   Total Students in Library :                € ±±");
    printf("±± €  0. Exit               €   Total issued Book's       :                € ±±");
    printf("±± €                        €   Total category in Library :                € ±±");
    printf("±± €                        €   Total no. of Invoice      :                € ±±");
    printf("±± €  Enter Your Choice:    €                                               € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± €                        €         				            € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± €                        €                                               € ±±");
    printf("±± ﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂﬂ ±±");
    printf("±±   STATUS BAR                           Date: %02d/%02d/%04d  Time: %02d/%02d/%02d    ±±",d.da_day,d.da_mon,d.da_year,t.ti_hour,t.ti_min,t.ti_sec);
    printf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
    gotoxy(26,17);
    c=getche();
//    if(c=='1')
//      bookmanagement();
//    if(c=='2')
//      booktransaction();
//    if(c=='3')
//      studentmanagement();
//    if(c=='4')
//      categoriesmanagement();
//    if(c=='5')
//      profile();
    if(c=='6')
      home();
    if(c=='0')
      exit(0);
    getch();
  }
}
