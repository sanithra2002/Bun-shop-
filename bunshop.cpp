#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<fstream>
#include<windows.h>
#include<ctime>
#include <stdlib.h>

using namespace std;
int total1=0;
int total=0;
struct temp{
string uname;
string upassword;
};

temp personrec;
void firstpage();
void help();
void login();
void ruser();
void welcome();
void  breakfast();
void Total_bill();
void buns();
void drinks();
void forgot();
void our_details();
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

int main(){
firstpage();
return 0;
}

void firstpage(){
 
 system("cls");   
m:
int arg;
cout << endl;
cout << endl;
cout << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 10);
cout << "\t\t\t\t\t                                  Jgy__                                        " << endl;
cout << "\t\t\t\t\t                            jWW  \"\"9Wf                                       " << endl;
cout << "\t\t\t\t\t                          _#WWW     IW                                         " << endl;
cout << "\t\t\t\t\t                         jWWWWW     IW                                         " << endl;
cout << "\t\t\t\t\t                 __,yyyyyWWWWW     IWyyyy___                                   " << endl;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\t            _jyWWP\"^``\"`.C\"9*,J _.mqD:^^\"WWWWWWQg__                        " << endl;
cout << "\t\t\t\t\t          jgW\"^.C/\"    .C'     I    `D.     'D._\"WQg_                       " << endl;
cout << "\t\t\t\t\t        jWP` .C\"       C'      I     `D._     `D._ \"Qg_                      " << endl;
cout << "\t\t\t\t\t      jQP`  .C    ,d^^b._      I      _.d^^b.   `D._ \"Qg                      " << endl;
cout << "\t\t\t\t\t     jQ^  .C\"   /`   .+\" \\     I     / \"+.   `\\   `D.  XQ                 " << endl;
cout << "\t\t\t\t\t    jQ'  .C'   |`  .\"    )    _I    (     \".  |    `D.  4#                   " << endl;
cout << "\t\t\t\t\t   Qf  .C     (   (    /    / /\\    \\     )  )     `D.  Qg                   " << endl;
cout << "\t\t\t\t\t  jW   C'      \\__\\_.+'    / /  \\    `+._/__/       `D  jQ                  " << endl;
cout << "\t\t\t\t\t  Qf   C         C        /_/    \\         D         D   Qk                   " << endl;
cout << "\t\t\t\t\t  Qf   C      _  C        \\_\\____/         D  _      D   QF                  " << endl;
cout << "\t\t\t\t\t  QL   C      \\\\`+.\\__     _______     ______.+'/     D  QF                 " << endl;
cout << "\t\t\t\t\t  B&   C.      \\   \\|    ||     |    ||      /       D   Qf                  " << endl;
cout << "\t\t\t\t\t  jQ   `C.      \\   |____|/     |____|/__   /      .D'   jW                   " << endl;
cout << "\t\t\t\t\t   TQ   `C.      \\._   `+.__________/___/|_/      .D'   jQ`                   " << endl;
cout << "\t\t\t\t\t    9Q   `C.      C.`+._           |   |/.D'     .D'   jQ'                     " << endl;
cout << "\t\t\t\t\t     \"Qg  `C.     `C.   `\"+-------'   ' .D'     .D'   pW`                    " << endl;
cout << "\t\t\t\t\t       ^WQy `C.     `C.        I        .D'    _.D' yW\"                       " <<endl;
cout << "\t\t\t\t\t         ^9Qy_`C.    `C.       I       .D'   _.Dp@@\"`                         " << endl;
cout << "\t\t\t\t\t            `9WQgC.__ `C.      I      .D'  _.Dp@\"\"`                          " << endl;
cout << "\t\t\t\t\t              `\"\"9WQQggyyyyyygyyyyyQggQWQH\"\"                               " << endl;

cout << endl;
SetConsoleTextAttribute(hConsole, 3);
cout <<"\t\t\t\t\t_________________________________________________________________"<< endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 6);
cout <<"\t\t\t\t\t                            BUN TALK                             "<< endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 3);
cout <<"\t\t\t\t\t__________________________________________";
SetConsoleTextAttribute(hConsole, 11);
cout<<"it's your bakery";
SetConsoleTextAttribute(hConsole, 3);
cout <<"_______"<< endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 10);
cout << "\t\t\t\t\t|==============";
SetConsoleTextAttribute(hConsole, 4);
cout << " [1]";
SetConsoleTextAttribute(hConsole, 7);
cout<<" . Login"<< endl;
SetConsoleTextAttribute(hConsole, 10);
cout << "\t\t\t\t\t|==============";
SetConsoleTextAttribute(hConsole, 4);
cout << " [2]";
SetConsoleTextAttribute(hConsole, 7);
cout<<" . Sign up"<< endl;
SetConsoleTextAttribute(hConsole, 10);
cout << "\t\t\t\t\t|==============";
SetConsoleTextAttribute(hConsole, 4);
cout << " [3]";
SetConsoleTextAttribute(hConsole, 7);
cout<<" . Exit"<< endl;
SetConsoleTextAttribute(hConsole, 10);
cout << "\t\t\t\t\t|==============";
SetConsoleTextAttribute(hConsole, 4);
cout << " [4]";
SetConsoleTextAttribute(hConsole, 7);
cout <<" . Help"<< endl;
SetConsoleTextAttribute(hConsole, 10);
cout << "\t\t\t\t\t|==============";
SetConsoleTextAttribute(hConsole, 4);
cout << " [5]";
SetConsoleTextAttribute(hConsole, 7);
cout <<" . Our details"<< endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 3);
cout << "\t\t\t\t\t****************************************************************" << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 14);
cout << "\t\t\t\t\t Please select :                                                "<< endl;
SetConsoleTextAttribute(hConsole, 7);
cout << endl;
cin >> arg;
cout << endl;
switch (arg)
{
case 1:
    login();
    break;
    
case 2:
    ruser();
    break;
    
case 3:
    SetConsoleTextAttribute(hConsole, 13);
    cout << "\t\t\t\t\tThank you for using our service !" << endl;
    SetConsoleTextAttribute(hConsole, 7);
    system("pause");
    exit(0);

case 4:
    help();
    break;   

 case 5:
    our_details();
    break;            

default:
    system("cls");
    SetConsoleTextAttribute(hConsole, 15);
    cout << "\t\t\t\t\t  Please select from the given options..! " << endl;
    goto m; 

}


}

void help(){
 system("cls");   
c:
int se;
cout << endl;
cout << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 11);
cout << "\t\t\t\t\t================================================================" << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 2);
cout << "\t\t\t\t\t                              HELP                              " << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 11);
cout << "\t\t\t\t\t================================================================" << endl;
cout << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 15);
cout << "\t\t\t\t\t                   Need help?  We're";
SetConsoleTextAttribute(hConsole, 11);
cout << " ***************************" << endl;
cout << endl;
cout << endl;
cout << "\t\t\t\t\t******************************";
SetConsoleTextAttribute(hConsole, 15);
cout << "always here for you.              " << endl; 
cout << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 1);
cout << "\t\t\t\t\t|================";
SetConsoleTextAttribute(hConsole, 10);
cout << " [1]";
SetConsoleTextAttribute(hConsole, 6);
cout << ".Forgot password                              " << endl;
SetConsoleTextAttribute(hConsole, 1);
cout << "\t\t\t\t\t|================";
SetConsoleTextAttribute(hConsole, 10);
cout << " [2]";
SetConsoleTextAttribute(hConsole, 6);
cout << ".Back                                         " << endl;

cout << endl;
SetConsoleTextAttribute(hConsole, 3);
cout << "\t\t\t\t\t________________________________________________________________" << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 15);
cout << "\t\t\t\t\t Please select :                                                "<< endl;
cin >> se;
switch (se)
{
case 1:
    forgot();
    break;

case 2:
    firstpage();
    break;
default:
      cout << "ERROR :invalid user input         "<< endl;
      goto c;
    break;
}


}

void ruser(){
//string userid,userpass;
fstream input;
system("cls");
SetConsoleTextAttribute(hConsole, 3);
cout << "\t\t\t\t\t======================================================================\n" << endl;
SetConsoleTextAttribute(hConsole, 4);
cout << "\t\t\t\t\t                         SIGN UP                                      \n" << endl;
SetConsoleTextAttribute(hConsole, 3);
cout << "\t\t\t\t\t======================================================================\n" << endl;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\tEnter your Username : \n " << endl;
SetConsoleTextAttribute(hConsole, 15);
cin >> personrec.uname;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\tEnter your Password :   \n" << endl;
SetConsoleTextAttribute(hConsole, 15);
cin >> personrec.upassword;

input.open("userdetails.txt",ios::app);
 if (input.is_open())
 {
    input<<personrec.uname <<" " << personrec.upassword<< endl;
    input.close();
 }
 cout << endl;
 system("cls");
 SetConsoleTextAttribute(hConsole, 13);
 cout << "\t\t\t\t\t|-------------------------------------------------------|" << endl;
 cout << "\t\t\t\t\t|                                                       |" << endl;
 cout << "\t\t\t\t\t|";
 SetConsoleTextAttribute(hConsole, 2);
 cout<<"   The account has been successfully created !!!";
 SetConsoleTextAttribute(hConsole, 13);
 cout<<"       |" << endl;
 cout << "\t\t\t\t\t|";
 SetConsoleTextAttribute(hConsole, 2);
 cout<<"        Thank you for using our service !";
 SetConsoleTextAttribute(hConsole, 13);
 cout<<"              |" << endl;
 cout << "\t\t\t\t\t|                                                       |" << endl;
 cout << "\t\t\t\t\t|-------------------------------------------------------|" << endl;
 SetConsoleTextAttribute(hConsole, 12);
 system("pause"); 
 firstpage();

}

void login(){
int a,b;
int i=2;
string uid,upass;
b = 0;
system("cls");
cout << endl;
cout << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 13);
cout << "\t\t\t\t\t==========================================================================\n"<<endl;
SetConsoleTextAttribute(hConsole, 10);
cout << "\t\t\t\t\t                        login to personal account                         \n"<<endl;
SetConsoleTextAttribute(hConsole, 13);
cout << "\t\t\t\t\t==========================================================================\n"<<endl;

while (b<3)
{

SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\tEnter Your Username  : \n"<< endl;
SetConsoleTextAttribute(hConsole, 7);
cin >> personrec.uname;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\tEnter Your Password   : \n"<< endl;
SetConsoleTextAttribute(hConsole, 7);
cin >> personrec.upassword;

fstream input;

input.open("userdetails.txt",ios::in);

while (input>>uid>>upass)
{
    if (uid == personrec.uname && upass == personrec.upassword)
    {
        a = 1;
        system("cls");
    }
    
}
input.close();

            if (a ==  1)
               {
                  system("cls");
                  SetConsoleTextAttribute(hConsole, 13);
                  cout << "\t\t\t\t\t|--------------------------------------|" << endl;
                  cout << "\t\t\t\t\t|                                      |" << endl;
                  cout << "\t\t\t\t\t|";
                  SetConsoleTextAttribute(hConsole, 10);
                  cout << "      Your Login is Successfull";
                  SetConsoleTextAttribute(hConsole, 13);
                  cout << "       |" << endl; 
                  SetConsoleTextAttribute(hConsole, 13);
                  cout << "\t\t\t\t\t|";
                  SetConsoleTextAttribute(hConsole, 10);
                  cout << "        Thanks for Login in !";
                  SetConsoleTextAttribute(hConsole, 13);
                  cout <<"         |" << endl;
                  cout << "\t\t\t\t\t|                                      |" << endl;
                  cout << "\t\t\t\t\t|--------------------------------------|" << endl;
                  SetConsoleTextAttribute(hConsole, 7);
                  system("pause");
                  welcome();
    
                }else
              {
                  b++;
                  system("cls");
                  //SetConsoleTextAttribute(hConsole, 4);
                  cout << endl;
                  cout << endl;
                  cout << endl;
                  SetConsoleTextAttribute(hConsole, 11);
                  cout << "\t\t\t\t|--------------------------------------------------------|" << endl;
                  cout << "\t\t\t\t|                                                        |" << endl;
                  cout << "\t\t\t\t|";
                  SetConsoleTextAttribute(hConsole, 4);
                  cout << "     Incorrect Login Credentials.Please try again  !";
                  SetConsoleTextAttribute(hConsole, 11);
                  cout << "    |" << endl;
                  cout << "\t\t\t\t|";
                  SetConsoleTextAttribute(hConsole, 4);
                  cout << "      you have "<< i-- << "attempts to login";
                  SetConsoleTextAttribute(hConsole, 11);
                  cout << "                       |"<< endl;
                  
                  
                  cout << "\t\t\t\t|                                                        |" << endl;
                  cout << "\t\t\t\t|--------------------------------------------------------|" << endl;
                 system("pause");
                  cout << endl;
                  cout << endl;
              }
}
firstpage();
}

void welcome(){
c:    
system("cls");
int chise;
cout << endl;
cout << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 10);
cout << "\t\t\t\t\t                                  Jgy__                                        " << endl;
cout << "\t\t\t\t\t                            jWW  \"\"9Wf                                       " << endl;
cout << "\t\t\t\t\t                          _#WWW     IW                                         " << endl;
cout << "\t\t\t\t\t                         jWWWWW     IW                                         " << endl;
cout << "\t\t\t\t\t                 __,yyyyyWWWWW     IWyyyy___                                   " << endl;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\t            _jyWWP\"^``\"`.C\"9*,J _.mqD:^^\"WWWWWWQg__                        " << endl;
cout << "\t\t\t\t\t          jgW\"^.C/\"    .C'     I    `D.     'D._\"WQg_                       " << endl;
cout << "\t\t\t\t\t        jWP` .C\"       C'      I     `D._     `D._ \"Qg_                      " << endl;
cout << "\t\t\t\t\t      jQP`  .C    ,d^^b._      I      _.d^^b.   `D._ \"Qg                      " << endl;
cout << "\t\t\t\t\t     jQ^  .C\"   /`   .+\" \\     I     / \"+.   `\\   `D.  XQ                 " << endl;
cout << "\t\t\t\t\t    jQ'  .C'   |`  .\"    )    _I    (     \".  |    `D.  4#                   " << endl;
cout << "\t\t\t\t\t   Qf  .C     (   (    /    / /\\    \\     )  )     `D.  Qg                   " << endl;
cout << "\t\t\t\t\t  jW   C'      \\__\\_.+'    / /  \\    `+._/__/       `D  jQ                  " << endl;
cout << "\t\t\t\t\t  Qf   C         C        /_/    \\         D         D   Qk                   " << endl;
cout << "\t\t\t\t\t  Qf   C      _  C        \\_\\____/         D  _      D   QF                  " << endl;
cout << "\t\t\t\t\t  QL   C      \\\\`+.\\__     _______     ______.+'/      D   QF               " << endl;
cout << "\t\t\t\t\t  B&   C.      \\   \\|    ||     |    ||      /       D   Qf                  " << endl;
cout << "\t\t\t\t\t  jQ   `C.      \\   |____|/     |____|/__   /      .D'   jW                   " << endl;
cout << "\t\t\t\t\t   TQ   `C.      \\._   `+.__________/___/|_/      .D'   jQ`                   " << endl;
cout << "\t\t\t\t\t    9Q   `C.      C.`+._           |   |/.D'     .D'   jQ'                     " << endl;
cout << "\t\t\t\t\t     \"Qg  `C.     `C.   `\"+-------'   ' .D'     .D'   pW`                    " << endl;
cout << "\t\t\t\t\t       ^WQy `C.     `C.        I        .D'    _.D' yW\"                       " <<endl;
cout << "\t\t\t\t\t         ^9Qy_`C.    `C.       I       .D'   _.Dp@@\"`                         " << endl;
cout << "\t\t\t\t\t            `9WQgC.__ `C.      I      .D'  _.Dp@\"\"`                          " << endl;
cout << "\t\t\t\t\t           ilmk `\"\"9WQQggyyyyyygyyyyyQggQWQH\"\"                             " << endl;
cout << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 3);
cout << "\t\t\t\t\t__________________________________________________________________\n"<< endl;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\t                   Welcome To Bun Talk Bakery                     \n"<< endl;
SetConsoleTextAttribute(hConsole, 3);
cout << "\t\t\t\t\t__________________________________________________________________\n"<< endl;
SetConsoleTextAttribute(hConsole, 10); 
cout << "\t\t\t\t\t|=============";
SetConsoleTextAttribute(hConsole, 4);
cout << "  [1]";
SetConsoleTextAttribute(hConsole, 13);
cout <<".Show bakery items & place your order               "<< endl;
SetConsoleTextAttribute(hConsole, 10);
cout << "\t\t\t\t\t|=============";
SetConsoleTextAttribute(hConsole, 4);
cout << "  [2]";
SetConsoleTextAttribute(hConsole, 13);
cout << ".Total bill amount                                  "<< endl;
SetConsoleTextAttribute(hConsole, 10); 
cout << "\t\t\t\t\t|=============";
SetConsoleTextAttribute(hConsole, 4);
cout << "  [3]";
SetConsoleTextAttribute(hConsole, 13);
cout << ".logout                                             "<< endl;    
cout << endl;
SetConsoleTextAttribute(hConsole, 14);
cout << "\t\t\t\t\t Please select :                                                "<< endl;
cout << endl;
cin >> chise;
    switch (chise)
    {
    case 1:
        breakfast();
        break;
     case 2:
        Total_bill();
        break;    
     case 3:
        system("cls");
        firstpage();
        break;
    default:
        cout << "\t\t\t\t\t Invalid user input! Please select from the given options.. " << endl; 
        system("pause");
        goto  c;
        break;
    }    
}

void breakfast(){
 system("cls");
 z:
 int cht;
 cout << endl;
 cout << endl;
 cout << endl;
 cout << endl;
 SetConsoleTextAttribute(hConsole, 9);
cout << "\t\t\t\t\t==============================================================\n"<< endl;
 SetConsoleTextAttribute(hConsole, 4);
cout << "\t\t\t\t\t                      Buns & Drinks                           \n"<< endl;
 SetConsoleTextAttribute(hConsole, 9);
cout << "\t\t\t\t\t==============================================================\n"<< endl;
cout << endl;
 SetConsoleTextAttribute(hConsole, 11);
cout << "\t\t\t\t\t|";
 SetConsoleTextAttribute(hConsole, 1);
cout << "__________________";
 SetConsoleTextAttribute(hConsole, 5);
cout <<" [1]";
 SetConsoleTextAttribute(hConsole, 10);
cout << " .Buns                                     " << endl;
 SetConsoleTextAttribute(hConsole, 11);
cout << "\t\t\t\t\t|";
 SetConsoleTextAttribute(hConsole, 1);
cout << "__________________";
 SetConsoleTextAttribute(hConsole, 5);
cout <<" [2]";
 SetConsoleTextAttribute(hConsole, 10);
cout << " .Drinks                                     " << endl;
 SetConsoleTextAttribute(hConsole, 11);
cout << "\t\t\t\t\t|";
 SetConsoleTextAttribute(hConsole, 1);
cout << "__________________";
 SetConsoleTextAttribute(hConsole, 5);
cout <<" [3]";
 SetConsoleTextAttribute(hConsole, 10);
cout << " .Back                                     " << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\t Please select the number :                                                "<< endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 7);
cin >> cht;
    switch (cht)
    {
    case 1:
        buns();
        break;
    case 2:
        drinks();
        break;    
    case 3:
        welcome();
        break;
    default:
    cout << "\t\t\t\t\t Invalid user input! Please select from the given options.. " << endl; 
    goto  z;
        break;
    }
 }

void buns(){
   
system("cls");
string foods[11]={"","American sub","Bacon,egg and cheese","Bagel toast","Baked bean","British Rail","Dinner Rolls","Cinnamon Buns","Hot Cross Buns","Pizza Bun","Sub Bun"};
int price[11]={0,53,90,20,33,65,36,42,69,63,10};
int chs=0;
int g,q,qunt;

//int total=0;
cout << endl;
SetConsoleTextAttribute(hConsole, 9);
cout << "\t\t\t\t\t________________________________________________________________\n"<< endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 11);
cout << "\t\t\t\t\t                          PICK";
SetConsoleTextAttribute(hConsole, 4);
cout << " YOUR";
SetConsoleTextAttribute(hConsole, 10);
cout << " FAVORITES                   \n"<< endl;
SetConsoleTextAttribute(hConsole, 9);
cout << "\t\t\t\t\t________________________________________________________________\n"<< endl;

cout << endl;
SetConsoleTextAttribute(hConsole, 10);
cout << "\t\t\t\t\t_______________________";
SetConsoleTextAttribute(hConsole, 11);
cout << "Sandwich";
SetConsoleTextAttribute(hConsole, 10);
cout << "__________________________________\n" << endl;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\t                  [1]";
SetConsoleTextAttribute(hConsole, 5);
cout << ".American sub";
SetConsoleTextAttribute(hConsole, 4);
cout << "              53$            "  << endl;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\t                  [2]";
SetConsoleTextAttribute(hConsole, 5);
cout << ".Bacon, egg and cheese";
SetConsoleTextAttribute(hConsole, 4);
cout << "     90$            "  << endl;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\t                  [3]";
SetConsoleTextAttribute(hConsole, 5);
cout << ".Bagel toast";
SetConsoleTextAttribute(hConsole, 4);
cout << "               20$            "  << endl;

SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\t                  [4]";
SetConsoleTextAttribute(hConsole, 5);
cout << ".Baked bean ";
SetConsoleTextAttribute(hConsole, 4);
cout << "               33$            "  << endl;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\t                  [5]";
SetConsoleTextAttribute(hConsole, 5);
cout << ".British Rail ";
SetConsoleTextAttribute(hConsole, 4);
cout << "             65$            "  << endl;


SetConsoleTextAttribute(hConsole, 10);
cout << "\t\t\t\t\t___________________________";
SetConsoleTextAttribute(hConsole, 11);
cout << "Buns";
SetConsoleTextAttribute(hConsole, 10);
cout << "____________________________________\n"<< endl;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\t                  [6]";
SetConsoleTextAttribute(hConsole, 5);
cout << ".Dinner Rolls";
SetConsoleTextAttribute(hConsole, 4);
cout << "              36$             " << endl;
SetConsoleTextAttribute(hConsole, 6); 
cout << "\t\t\t\t\t                  [7]";
SetConsoleTextAttribute(hConsole, 5);
cout << ".Cinnamon Buns";
SetConsoleTextAttribute(hConsole, 4);
cout << "             42$             " << endl;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\t                  [8]";
SetConsoleTextAttribute(hConsole, 5);
cout << ".Hot Cross Buns";
SetConsoleTextAttribute(hConsole, 4);
cout << "            69$             " << endl;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\t                  [9]";
SetConsoleTextAttribute(hConsole, 5);
cout << ".Pizza Bun";
SetConsoleTextAttribute(hConsole, 4);
cout << "                 63$             " << endl;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\t                  [10]";
SetConsoleTextAttribute(hConsole, 5);
cout << ".Sub Bun";
SetConsoleTextAttribute(hConsole, 4);
cout << "                  10$             " << endl;


cout << endl;

while (chs == 0)
{   
    SetConsoleTextAttribute(hConsole, 15);
     cout << "\t\t\t\t\t Please select the food number :                                                "<< endl;
     cout << endl;
     cin   >> g;
     cout  << endl;
     SetConsoleTextAttribute(hConsole, 6);
     cout  << "you selected ";
     SetConsoleTextAttribute(hConsole, 5);
     cout << foods[g] <<"." <<"    " ;
     SetConsoleTextAttribute(hConsole, 4);
     cout <<price[g]<< "$" <<endl;
     cout  << endl;
     SetConsoleTextAttribute(hConsole, 15);
     cout  << "Enter quntity " << endl;
     cout  << endl;
     cin   >> qunt;
     total += price[g] * qunt;
     cout  << endl;
     SetConsoleTextAttribute(hConsole, 3);
     cout  << "your total bill ";
     SetConsoleTextAttribute(hConsole, 4);
     cout  << total << endl;
     cout  << endl;
     SetConsoleTextAttribute(hConsole, 9);
     cout  << "If you want to order more foods press";
     SetConsoleTextAttribute(hConsole, 4);
     cout << " 0 ";
     SetConsoleTextAttribute(hConsole, 9);
     cout << "or if you want to go back press any number" << endl;
     SetConsoleTextAttribute(hConsole, 15);
     cin   >> chs;
}

time_t ct = time(0);
string currenttime = ctime(&ct); 

fstream receipt;
system("cls");
receipt.open("bill.txt",ios::out);
 if(receipt.is_open()){
    SetConsoleTextAttribute(hConsole, 6);
     receipt << "\t\t\t\t\t******************* Receipt for Buns************************\n\n"<< endl;
     receipt << endl;
     receipt << endl;
     SetConsoleTextAttribute(hConsole, 11);
     receipt << "\t\t\t\t\t  your total amount is " << total << "$"<<  endl;
     receipt << endl;
     receipt << endl;
     SetConsoleTextAttribute(hConsole, 10); 
     receipt <<"\t\t\t\t\t"<< currenttime << endl;
     receipt.close();
 }
receipt.open("bill.txt",ios::in);
 if (receipt.is_open())
 {
    string line;
    while (getline(receipt, line)){
       cout << line << endl;
    }
    receipt.close();
 } 
  cout << endl; 
  SetConsoleTextAttribute(hConsole, 15);         
  cout << "\t\t\t\t\tPress 0 to go back                         " << endl;
  cout << endl;
  cin >> q;
  switch (q)
  {
  case 0:
    breakfast();
    break;
  
  default:
    SetConsoleTextAttribute(hConsole, 4);
     cout << "\t\t\t\t\t Invalid user input! Please select from the given options.. " << endl; 
     system("pause");
 
    break;
  }
 
}



void drinks(){
system("cls");
string foods[11]={"","Swiss chocolate","Coffee shakes","Oreo cookie","Barista blast","Hot chocolate","Classic mojito","Kiwi mojito","Red apple fizz","Lemon fizz","Lime soda"};
int price[11]={0,15,13,16,10,17,18,20,16,12,19};
string cho="0";
int qunti;
int y,h;
//int total1=0;
cout << endl;
SetConsoleTextAttribute(hConsole, 9);
cout << "\t\t\t\t\t________________________________________________________________\n"<< endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 11);
cout << "\t\t\t\t\t                          PICK";
SetConsoleTextAttribute(hConsole, 4);
cout << " YOUR";
SetConsoleTextAttribute(hConsole, 10);
cout << " FAVORITES                   \n"<< endl;
SetConsoleTextAttribute(hConsole, 9);
cout << "\t\t\t\t\t________________________________________________________________\n"<< endl;

cout << endl;
SetConsoleTextAttribute(hConsole, 10);
cout << "\t\t\t\t\t_______________________";
SetConsoleTextAttribute(hConsole, 11);
cout << "Shakes";
SetConsoleTextAttribute(hConsole, 10);
cout << " _______________________________\n" << endl;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\t                  [1]";
SetConsoleTextAttribute(hConsole, 5);
cout << ".Swiss chocolate";
SetConsoleTextAttribute(hConsole, 4);
cout << "               15$           "  << endl;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\t                  [2]";
SetConsoleTextAttribute(hConsole, 5);
cout << ".Coffee shakes";
SetConsoleTextAttribute(hConsole, 4);
cout << "                 13$           "  << endl;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\t                  [3]";
SetConsoleTextAttribute(hConsole, 5);
cout << ".Oreo cookie";
SetConsoleTextAttribute(hConsole, 4);
cout << "                   16$           "  << endl;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\t                  [4]";
SetConsoleTextAttribute(hConsole, 5);
cout << ".Barista blast";
SetConsoleTextAttribute(hConsole, 4);
cout << "                 10$           "  << endl;
SetConsoleTextAttribute(hConsole, 6); 
cout << "\t\t\t\t\t                  [5]";
SetConsoleTextAttribute(hConsole, 5);
cout << ".Hot chocolate";
SetConsoleTextAttribute(hConsole, 4);
cout << "                 17$           "  << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 10);
cout << "\t\t\t\t\t___________________________";
SetConsoleTextAttribute(hConsole, 11);
cout << "Fizzy Drinks";
SetConsoleTextAttribute(hConsole, 10);
cout << "_____________________\n"<< endl;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\t                  [6]";
SetConsoleTextAttribute(hConsole, 5);
cout << ".Classic mojito";
SetConsoleTextAttribute(hConsole, 4);
cout << "                 18$             " << endl; 
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\t                  [7]";
SetConsoleTextAttribute(hConsole, 5);
cout << ".Kiwi mojito";
SetConsoleTextAttribute(hConsole, 4);
cout << "                    20$             " << endl;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\t                  [8]";
SetConsoleTextAttribute(hConsole, 5);
cout << ".Red apple fizz";
SetConsoleTextAttribute(hConsole, 4);
cout << "                 16$             " << endl;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\t                  [9]";
SetConsoleTextAttribute(hConsole, 5);
cout << ".Lemon fizz";
SetConsoleTextAttribute(hConsole, 4);
cout << "                     12$             " << endl;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\t                  [10]";
SetConsoleTextAttribute(hConsole, 5);
cout << ".Lime soda";
SetConsoleTextAttribute(hConsole, 4);
cout << "                     19$             " << endl;

cout << endl;
SetConsoleTextAttribute(hConsole, 15);
cout << "\t\t\t\t\t Please select :                                                "<< endl;
cout << endl;
time_t ct = time(0);
string currentti = ctime(&ct); 

while (cho == "0")
{
    cin >> y;
     cout << endl;
     SetConsoleTextAttribute(hConsole, 6);
    cout << "you selected ";
    SetConsoleTextAttribute(hConsole, 5);
    cout << foods[y] <<".";
    SetConsoleTextAttribute(hConsole, 4);
    cout << price[y]<< "$" <<endl;
     cout << endl;
     SetConsoleTextAttribute(hConsole, 15);
    cout << "Enter quntity " << endl;

    cin >> qunti;
    total1 += price[y] * qunti;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 3);
    cout << "your total bill ";
    SetConsoleTextAttribute(hConsole, 4);
    cout  << total1 << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 9);
    cout << "If you want to order more foods press";
    SetConsoleTextAttribute(hConsole, 4);
    cout << " 0" << endl;
    SetConsoleTextAttribute(hConsole, 15);
    cin >> cho;
}
 system("cls");
fstream receipt;

receipt.open("bill.txt",ios::out);

 if(receipt.is_open()){
    SetConsoleTextAttribute(hConsole, 6);
     receipt << "\t\t\t\t\t******************* Receipt for Drinks************************\n\n"<< endl;
     receipt << endl;
     SetConsoleTextAttribute(hConsole, 11);
     receipt << "\t\t\t\t\tyour total amount is " << total1 << "$"<<  endl;
     receipt << endl;
     receipt << endl;
     SetConsoleTextAttribute(hConsole, 10);
     receipt <<"\t\t\t\t\t"<< currentti << endl;
     receipt.close();
 }


receipt.open("bill.txt",ios::in);
 if (receipt.is_open())
 {
    string line;
    while (getline(receipt, line)){
       cout << line << endl;

    }
    receipt.close();
 }
  cout << endl;
  SetConsoleTextAttribute(hConsole, 15);          
  cout << "\t\t\t\t\tPress 0 to go back                         " << endl;
  cout << endl;
  cin >> h;
  switch (h)
  {
  case 0:
    breakfast();
    break;
  
  default:
  SetConsoleTextAttribute(hConsole, 4);
     cout << "\t\t\t\t\t Invalid user input! Please select from the given options.. " << endl; 
     system("pause");
 
    break;
  }

 //Total_bill(total1);

}

void Total_bill(){
m:
int u;
system("cls");  
time_t ct = time(0);
string currenttim = ctime(&ct); 
int TOTAL= 0 ;
TOTAL=total1+total;
cout << endl;
cout << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 11);
cout << "\t\t\t\t\t=======================================================================================     \n"<< endl;
SetConsoleTextAttribute(hConsole, 1);
cout << "\t\t\t\t\t                                   Total bill                                               \n"<< endl;
SetConsoleTextAttribute(hConsole, 11);
cout << "\t\t\t\t\t=======================================================================================     \n"<< endl;
cout << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 15);
cout << "\t\t\t\t\t Your total amount is  " << TOTAL << "$" <<  endl;
cout << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 15);
cout << "\t\t\t\t\t"<< currenttim<< endl;
cout << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 5);
cout << "\t\t\t\t\t  press 0  to go back                                                       " << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 15);
cin >> u;
cout << endl;
switch (u)
{
case 0:
    welcome();
    break;

default:
    goto m;
    break;
}
}


void forgot(){
 string uid,upass,uname;
 int a; 
 cout << endl;
 cout << endl;  
system("cls");
SetConsoleTextAttribute(hConsole, 9);
cout << "\t\t\t\t\t          Enter your username for find your user password !         " << endl;
SetConsoleTextAttribute(hConsole, 4);
cout << "\t\t\t\t\t_________________________________________________________________\n "  << endl;
cout << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\t Enter your username:  " << endl;
SetConsoleTextAttribute(hConsole, 15);
cin >> uname;

fstream input;

input.open("userdetails.txt",ios::in);
while(input>>uid>>upass){
          if (uid == uname)
          {
            a = 1;
            system("cls");
          }

}
 input.close();
          
           if (a == 1)
           {
            system("cls");
            SetConsoleTextAttribute(hConsole, 13);
            cout << "\t\t\t\t\t|-------------------------------------------|"<< endl;
            cout << "\t\t\t\t\t|";
            SetConsoleTextAttribute(hConsole, 10);
            cout << "  your account has been found !!!";
            SetConsoleTextAttribute(hConsole, 13);
            cout << "          |" << endl;
            cout << "\t\t\t\t\t|";
            SetConsoleTextAttribute(hConsole, 10);
            cout << "  your account  user password is " << upass << endl;
            SetConsoleTextAttribute(hConsole, 13);
            cout << "\t\t\t\t\t|-------------------------------------------|"<< endl;
            system("pause");
            main();

            

           }
           else
           {
            system("cls");
            cout << endl;
            cout << endl;
            SetConsoleTextAttribute(hConsole, 4);
            cout << "check your username and try again" << endl;
            system("pause");
            main();

             }
           

}

void our_details(){
    a:
    string g;
system("cls");
cout << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 13);
cout << "\t\t\t\t\t|----------------------------------------------------------|"<< endl;
cout << "\t\t\t\t\t|";
SetConsoleTextAttribute(hConsole, 10);
cout << "                      Our Details !!!";
SetConsoleTextAttribute(hConsole, 13);
cout << "                     |"<< endl;
cout << "\t\t\t\t\t|----------------------------------------------------------|"<< endl;
cout << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 11);
cout << "\t\t\t\t\t Bun Talk   -";
SetConsoleTextAttribute(hConsole, 1);
cout << " The Restaurant                   " << endl;
SetConsoleTextAttribute(hConsole, 11);
cout << "\t\t\t\t\t Address    -";
SetConsoleTextAttribute(hConsole, 1);
cout << " No 119, bun talk raod,colombo 1  " << endl;
SetConsoleTextAttribute(hConsole, 11); 
cout << "\t\t\t\t\t Contact no -";
SetConsoleTextAttribute(hConsole, 1);
cout << " 0112772295,0115858369            " << endl;
SetConsoleTextAttribute(hConsole, 11);
cout << "\t\t\t\t\t Email      -";
SetConsoleTextAttribute(hConsole, 1);
cout << " info@buntalk.com                 " << endl;
SetConsoleTextAttribute(hConsole, 11);
cout << "\t\t\t\t\t Visit us on-";
SetConsoleTextAttribute(hConsole, 1);
cout << " www.buntalk.com                  " << endl;
cout << endl;
cout << endl;
cout << "\t\t\t\t\t============================================================="<< endl;
cout << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 6);
cout << "\t\t\t\t\tNeed to back to the Main Menu? (Y/N)  " << endl;
cout << endl;
cin >> g;
if(g == "Y" || g == "y")
{
    firstpage();
} else if(g == "N" || g == "n")
{
 goto a;
}else{
    system("cls");
    SetConsoleTextAttribute(hConsole, 4);
    cout << " Wrong user input please check again!!!! " << endl;
    system("pause");
}
}


   