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
  printf("北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北");
  printf("北圻哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌咣北");
  printf("北�                             W E L C O M E    TO                          郾�");
  printf("北圻哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌咣北");
  printf("北�  *********    **********        ****************    ***             ***  郾�");
  printf("北�  *********    *************     ****************    ****          *****  郾�");
  printf("北�     ***       ***        ***    ***                 ******      *** ***  郾�");
  printf("北�     ***       ***         ***   ***                 *** ***    ***  ***  郾�");
  printf("北�     ***       ***         ***   ***                 ***  ***  ***   ***  郾�");
  printf("北�     ***       ***        ***    ***                 ***   *****     ***  郾�");
  printf("北�     ***       *************     *************       ***    ***      ***  郾�");
  printf("北�     ***       **********        *************       ***             ***  郾�");
  printf("北�     ***       ***               ***                 ***             ***  郾�");
  printf("北�     ***       ***               ***                 ***             ***  郾�");
  printf("北�     ***       ***               ***                 ***             ***  郾�");
  printf("北�     ***       ***               ***                 ***             ***  郾�");
  printf("北�  *********    ***               ****************    ***             ***  郾�");
  printf("北�  *********    ***               ****************    ***             ***  郾�");
  printf("北�                                                                          郾�");
  printf("北�                                 Press any key to continue.               郾�");
  printf("北圻哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌咣北");
  printf("北�  STATUS BAR                           Date: %02d/%02d/%04d  Time: %02d/%02d/%02d   郾�",d.da_day,d.da_mon,d.da_year,t.ti_hour,t.ti_min,t.ti_sec);
  printf("北圮苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苒北");
  printf("北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北");
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
    printf("北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北");
    printf("北                                                                            北");
    printf("北    M A S T E R J I   L I B R A R Y   M A N A G E M E N T   S Y S T E M     北");
    printf("北 圻哌哌哌哌哌哌哌哌哌哌哌咣哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌咣 北");
    printf("北 �       MAIN MENU        �                   NOTIFICATION                � 北");
    printf("北 圻哌哌哌哌哌哌哌哌哌哌哌咣哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌咣 北");
    printf("北 �                        �                                               � 北");
    printf("北 �  1. Login              �   Last Five Login by                          � 北");
    printf("北 �  2. Create New Account � � � 北");
    printf("北 �  3. Manage Account     �                                               � 北");
    printf("北 �  4. Setting            �                                               � 北");
    printf("北 �  5. Rulls & Regulation �                                               � 北");
    printf("北 �  6. About the Project  �                                               � 北");
    printf("北 �  0. Exit               �                                               � 北");
    printf("北 �                        �                                               � 北");
    printf("北 �                        �                                               � 北");
    printf("北 �  Enter Your Choice:    � � � 北");
    printf("北 �                        �   Total Administrator Account in Library:    � 北");
    printf("北 �                        �   Total Guest Account in Library:            � 北");
    printf("北 �                        � 				                    � 北");
    printf("北 �                        �                                               � 北");
    printf("北 哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌 北");
    printf("北   STATUS BAR                           Date: %02d/%02d/%04d  Time: %02d/%02d/%02d    北",d.da_day,d.da_mon,d.da_year,t.ti_hour,t.ti_min,t.ti_sec);
    printf("北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北");
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
    printf("北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北");
    printf("北                                                                            北");
    printf("北    M A S T E R J I   L I B R A R Y   M A N A G E M E N T   S Y S T E M     北");
    printf("北 圻哌哌哌哌哌哌哌哌哌哌哌咣哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌咣 北");
    printf("北 �       MAIN MENU        �                CHOOSE ACCOUNT TYPE            � 北");
    printf("北 圻哌哌哌哌哌哌哌哌哌哌哌咣哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌咣 北");
    printf("北 �                        �                                               � 北");
    printf("北 �   Login                �   1. Create New Account for Library	    � 北");
    printf("北 �   Create New Account   �                                               � 北");
    printf("北 �   Manage Account       �   2. Create Guest Account of Main Account     � 北");
    printf("北 �   Setting              �                                               � 北");
    printf("北 �   Rulls & Regulation   �   3. Go to Previous Menu	                    � 北");
    printf("北 �   About the Project    �                                               � 北");
    printf("北 �   Exit                 �   0. Exit   				    � 北");
    printf("北 �                        �        		     		            � 北");
    printf("北 �                        � � � 北");
    printf("北 �                        �                                               � 北");
    printf("北 �                        �  Enter your choice:                           � 北");
    printf("北 �                        �         				            � 北");
    printf("北 �                        �                                               � 北");
    printf("北 �                        �                                               � 北");
    printf("北 哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌 北");
    printf("北   STATUS BAR                           Date: %02d/%02d/%04d  Time: %02d/%02d/%02d    北",d.da_day,d.da_mon,d.da_year,t.ti_hour,t.ti_min,t.ti_sec);
    printf("北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北");
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
    printf("北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北");
    printf("北                                                                            北");
    printf("北    M A S T E R J I   L I B R A R Y   M A N A G E M E N T   S Y S T E M     北");
    printf("北 圻哌哌哌哌哌哌哌哌哌哌哌咣哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌咣 北");
    printf("北 �      INSTRUCTIONS      �                CREATE NEW ACCOUNT             � 北");
    printf("北 圻哌哌哌哌哌哌哌哌哌哌哌咣哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌咣 北");
    printf("北 �                        �                                               � 北");
    printf("北 �   All  Fields  are    �  FIRST NAME   :                               � 北");
    printf("北 �        required.       �  LAST NAME    :                               � 北");
    printf("北 �                        �  USER NAME    :                               � 北");
    printf("北 �   Password  and       �  PASSWORD     :                               � 北");
    printf("北 �    Confirm  Password   �  CONFIRM PASS.:                               � 北");
    printf("北 �    must  be  same.     �  MOBILE NUMBER:                               � 北");
    printf("北 �                        �  EMAIL        :                               � 北");
    printf("北 �   Backup  key  and    �  BACKUP KEY   :          DATAKEY:             � 北");
    printf("北 �    Data  key  must be  �  LIBRARY NAME :                               � 北");
    printf("北 �    different.          �  ACCOUNT TYPE :                               � 北");
    printf("北 �                        �                                               � 北");
    printf("北 �                        �                                               � 北");
    printf("北 �                        �                                               � 北");
    printf("北 �                        �                                               � 北");
    printf("北 哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌 北");
    printf("北   STATUS BAR                           Date: %02d/%02d/%04d  Time: %02d/%02d/%02d    北",d.da_day,d.da_mon,d.da_year,t.ti_hour,t.ti_min,t.ti_sec);
    printf("北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北");
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
    printf("北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北");
    printf("北                                                                            北");
    printf("北    M A S T E R J I   L I B R A R Y   M A N A G E M E N T   S Y S T E M     北");
    printf("北 圻哌哌哌哌哌哌哌哌哌哌哌咣哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌咣 北");
    printf("北 �      INSTRUCTIONS      �                CREATE GUEST ACCOUNT           � 北");
    printf("北 圻哌哌哌哌哌哌哌哌哌哌哌咣哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌咣 北");
    printf("北 �                        �                                               � 北");
    printf("北 �   All  Fields  are    �  FIRST NAME   :                               � 北");
    printf("北 �        required.       �  LAST NAME    :                               � 北");
    printf("北 �                        �  USER NAME    :                               � 北");
    printf("北 �   Password  and       �  PASSWORD     :                               � 北");
    printf("北 �    Confirm  Password   �  CONFIRM PASS.:                               � 北");
    printf("北 �    must  be  same.     �  MOBILE NUMBER:                               � 北");
    printf("北 �                        �  EMAIL        :                               � 北");
    printf("北 �   Backup  key  and    �  BACKUP KEY   :          DATAKEY:             � 北");
    printf("北 �    Data  key  must be  �  LIBRARY NAME :                               � 北");
    printf("北 �    different.          �  ACCOUNT TYPE :                               � 北");
    printf("北 �                        �                                               � 北");
    printf("北 �                        �                                               � 北");
    printf("北 �                        �                                               � 北");
    printf("北 �                        �                                               � 北");
    printf("北 哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌 北");
    printf("北   STATUS BAR                           Date: %02d/%02d/%04d  Time: %02d/%02d/%02d    北",d.da_day,d.da_mon,d.da_year,t.ti_hour,t.ti_min,t.ti_sec);
    printf("北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北");
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
    printf("北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北");
    printf("北                                                                            北");
    printf("北    M A S T E R J I   L I B R A R Y   M A N A G E M E N T   S Y S T E M     北");
    printf("北 圻哌哌哌哌哌哌哌哌哌哌哌咣哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌咣 北");
    printf("北 �      INFORMATION       �               CREATE  GUEST ACCOUNT           � 北");
    printf("北 圻哌哌哌哌哌哌哌哌哌哌哌咣哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌咣 北");
    printf("北 �  You can create a     �                                               � 北");
    printf("北 �   Guest Account if you �                                               � 北");
    printf("北 �   are a Administrator  �                                               � 北");
    printf("北 �                        �   USERNAME:                                   � 北");
    printf("北 �  In this system Guest �                                               � 北");
    printf("北 �   can also manage all  �   PASSWORD:                                   � 北");
    printf("北 �   Accounts  in   this  �                                               � 北");
    printf("北 �   Program              �                                               � 北");
    printf("北 �                        �  Warning: Username and Password would match   � 北");
    printf("北 �                        �           with case [Case Sensitive].         � 北");
    printf("北 �                        �                                               � 北");
    printf("北 �                        �                                               � 北");
    printf("北 �                        �                                               � 北");
    printf("北 �    	            � 				                    � 北");
    printf("北 �                        �                                               � 北");
    printf("北 哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌 北");
    printf("北   STATUS BAR                           Date: %02d/%02d/%04d  Time: %02d/%02d/%02d    北",d.da_day,d.da_mon,d.da_year,t.ti_hour,t.ti_min,t.ti_sec);
    printf("北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北");
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
    printf("北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北");
    printf("北                                                                            北");
    printf("北    M A S T E R J I   L I B R A R Y   M A N A G E M E N T   S Y S T E M     北");
    printf("北 圻哌哌哌哌哌哌哌哌哌哌哌咣哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌咣 北");
    printf("北 �       MAIN MENU        �                LOGIN TO YOUR ACCOUT           � 北");
    printf("北 圻哌哌哌哌哌哌哌哌哌哌哌咣哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌咣 北");
    printf("北 �                        �                                               � 北");
    printf("北 �    Login               �                                               � 北");
    printf("北 �    Create New Account  �                                               � 北");
    printf("北 �    Manage Account      �   USERNAME:                                   � 北");
    printf("北 �    Setting             �                                               � 北");
    printf("北 �    Rulls & Regulation  �   PASSWORD:                                   � 北");
    printf("北 �    About the Project   �                                               � 北");
    printf("北 �    Exit                �                                               � 北");
    printf("北 �                        �  Warning: Username and Password would match   � 北");
    printf("北 �                        �           with case [Case Sensitive].         � 北");
    printf("北 �                        �                                               � 北");
    printf("北 �                        �                                               � 北");
    printf("北 �                        �                                               � 北");
    printf("北 �                        � 				                    � 北");
    printf("北 �                        �                                               � 北");
    printf("北 哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌 北");
    printf("北   STATUS BAR                           Date: %02d/%02d/%04d  Time: %02d/%02d/%02d    北",d.da_day,d.da_mon,d.da_year,t.ti_hour,t.ti_min,t.ti_sec);
    printf("北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北");
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
    printf("北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北");
    printf("北                                                                            北");
    printf("北    M A S T E R J I   L I B R A R Y   M A N A G E M E N T   S Y S T E M     北");
    printf("北 圻哌哌哌哌哌哌哌哌哌哌哌咣哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌咣 北");
    printf("北 �      IBRARY MENU       �                   NOTIFICATIONS               � 北");
    printf("北 圻哌哌哌哌哌哌哌哌哌哌哌咣哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌咣 北");
    printf("北 �                        �                                               � 北");
    printf("北 �  1. Book Management    �  Library Information                	    � 北");
    printf("北 �  2. Book Transaction   � � � 北");
    printf("北 �  3. Students Manag.    �                                               � 北");
    printf("北 �  4. Categories Manag.  �                                               � 北");
    printf("北 �  5. Profile            �   Total Book's in Library   :                � 北");
    printf("北 �  6. Logout             �   Total Students in Library :                � 北");
    printf("北 �  0. Exit               �   Total issued Book's       :                � 北");
    printf("北 �                        �   Total category in Library :                � 北");
    printf("北 �                        �   Total no. of Invoice      :                � 北");
    printf("北 �  Enter Your Choice:    �                                               � 北");
    printf("北 �                        �                                               � 北");
    printf("北 �                        �         				            � 北");
    printf("北 �                        �                                               � 北");
    printf("北 �                        �                                               � 北");
    printf("北 哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌哌 北");
    printf("北   STATUS BAR                           Date: %02d/%02d/%04d  Time: %02d/%02d/%02d    北",d.da_day,d.da_mon,d.da_year,t.ti_hour,t.ti_min,t.ti_sec);
    printf("北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北北");
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
