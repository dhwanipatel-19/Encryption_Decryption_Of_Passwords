#include<iostream>
#include<string>
#include<fstream>
#include<cstdio>
#include "loadbar.h"
#include<windows.h>

using namespace std;

void encrypt( )
{
    string filename;
    string str;
    int len;

    cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\tEnter title: ";
    cin>>filename;
    cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\tEnter password to encrypt and save: ";
	cin>>str;
	cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
    ofstream write( filename, ios::out);

    if(!write)
   {
      cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
      cout<<"\t\t\t\t\t\t\t\t\t\t\tERROR IN OPENING THE FILE"<<endl;
      cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
      Sleep(700);
      getch();
   }
   else
   {
       len = str.length();

	for(int i=0 ; i<len; i++)
	{
		if(str[i]=='!')
		{
			str[i]='w';
		}
		else if(str[i]=='"')
		{
			str[i]='i';
		}
		else if(str[i]=='#')
		{
			str[i]='K';
		}
		else if(str[i]=='$')
		{
			str[i]='B';
		}
		else if(str[i]=='%')
		{
			str[i]='d';
		}
		else if(str[i]=='&')
		{
			str[i]='a';
		}
		else if(str[i]==39)
		{
			str[i]='O';
		}
		else if(str[i]=='(')
		{
			str[i]='E';
		}
		else if(str[i]==')')
		{
			str[i]='r';
		}
		else if(str[i]=='*')
		{
			str[i]='h';
		}
		else if(str[i]=='+')
		{
			str[i]='W';
		}
		else if(str[i]==',')
		{
			str[i]='V';
		}
		else if(str[i]=='-')
		{
			str[i]='n';
		}
		else if(str[i]=='.')
		{
			str[i]='R';
		}
		else if(str[i]=='/')
		{
			str[i]='L';
		}
		else if(str[i]=='0')
		{
			str[i]='#';
		}
		else if(str[i]=='1')
		{
			str[i]='~';
		}
		else if(str[i]=='2')
		{
			str[i]='%';
		}
		else if(str[i]=='3')
		{
			str[i]='}';
		}
		else if(str[i]=='4')
		{
			str[i]='=';
		}
		else if(str[i]=='5')
		{
			str[i]='{';
		}
		else if(str[i]=='6')
		{
			str[i]=92 ;
		}
		else if(str[i]=='7')
		{
			str[i]='<';
		}
		else if(str[i]=='8')
		{
			str[i]='|';
		}
		else if(str[i]=='9')
		{
			str[i]='[';
		}
		else if(str[i]==':')
		{
			str[i]='x';
		}
		else if(str[i]==';')
		{
			str[i]='y';
		}
		else if(str[i]=='<')
		{
			str[i]='k';
		}
		else if(str[i]=='=')
		{
			str[i]='z';
		}
		else if(str[i]=='>')
		{
			str[i]='G';
		}
		else if(str[i]=='?')
		{
			str[i]='o';
		}
		else if(str[i]=='@')
		{
			str[i]='A';
		}
		else if(str[i]=='A')
		{
			str[i]='5';
		}
		else if(str[i]=='B')
		{
			str[i]=',';
		}
		else if(str[i]=='C')
		{
			str[i]='&';
		}
		else if(str[i]=='D')
		{
			str[i]='/';
		}
		else if(str[i]=='E')
		{
			str[i]='U';
		}
		else if(str[i]=='F')
		{
			str[i]='$';
		}
		else if(str[i]=='G')
		{
			str[i]='+';
		}
		else if(str[i]=='H')
		{
			str[i]='!';
		}
		else if(str[i]=='I')
		{
			str[i]='_';
		}
		else if(str[i]=='J')
		{
			str[i]='s';
		}
		else if(str[i]=='K')
		{
			str[i]='*';
		}
		else if(str[i]=='L')
		{
			str[i]='"';
		}
		else if(str[i]=='M')
		{
			str[i]=39;
		}
		else if(str[i]=='N')
		{
			str[i]='(';
		}
		else if(str[i]=='O')
		{
			str[i]='t';
		}
		else if(str[i]=='P')
		{
			str[i]='>';
		}
		else if(str[i]=='Q')
		{
			str[i]=')';
		}
		else if(str[i]=='R')
		{
			str[i]='7';
		}
		else if(str[i]=='S')
		{
			str[i]='m';
		}
		else if(str[i]=='T')
		{
			str[i]=']';
		}
		else if(str[i]=='U')
		{
			str[i]='q';
		}
		else if(str[i]=='V')
		{
			str[i]='0';
		}
		else if(str[i]=='W')
		{
			str[i]=':';
		}
		else if(str[i]=='X')
		{
			str[i]='`';
		}
		else if(str[i]=='Y')
		{
			str[i]='Q';
		}
		else if(str[i]=='Z')
		{
			str[i]='J';
		}
		else if(str[i]=='[')
		{
			str[i]='c';
		}
		else if(str[i]==92)
		{
			str[i]='Y';
		}
		else if(str[i]==']')
		{
			str[i]='D';
		}
		else if(str[i]=='^')
		{
			str[i]='p';
		}
		else if(str[i]=='_')
		{
			str[i]='Z';
		}
		else if(str[i]=='`')
		{
			str[i]='N';
		}
		else if(str[i]=='a')
		{
			str[i]='@';
		}
		else if(str[i]=='b')
		{
			str[i]='H';
		}
		else if(str[i]=='c')
		{
			str[i]='4';
		}
		else if(str[i]=='d')
		{
			str[i]='1';
		}
		else if(str[i]=='e')
		{
			str[i]='u';
		}
		else if(str[i]=='f')
		{
			str[i]='M';
		}
		else if(str[i]=='g')
		{
			str[i]='3';
		}
		else if(str[i]=='h')
		{
			str[i]='^';
		}
		else if(str[i]=='i')
		{
			str[i]='f';
		}
		else if(str[i]=='j')
		{
			str[i]='6';
		}
		else if(str[i]=='k')
		{
			str[i]=';';
		}
		else if(str[i]=='l')
		{
			str[i]='2';
		}
		else if(str[i]=='m')
		{
			str[i]='-';
		}
		else if(str[i]=='n')
		{
			str[i]='F';
		}
		else if(str[i]=='o')
		{
			str[i]='?';
		}
		else if(str[i]=='p')
		{
			str[i]='8';
		}
		else if(str[i]=='q')
		{
			str[i]='9';
		}
		else if(str[i]=='r')
		{
			str[i]='C';
		}
		else if(str[i]=='s')
		{
			str[i]='b';
		}
		else if(str[i]=='t')
		{
			str[i]='I';
		}
		else if(str[i]=='u')
		{
			str[i]='X';
		}
		else if(str[i]=='v')
		{
			str[i]='T';
		}
		else if(str[i]=='w')
		{
			str[i]='S';
		}
		else if(str[i]=='x')
		{
			str[i]='P';
		}
		else if(str[i]=='y')
		{
			str[i]='g';
		}
		else if(str[i]=='z')
		{
			str[i]='e';
		}
		else if(str[i]=='{')
		{
			str[i]='j';
		}
		else if(str[i]=='|')
		{
			str[i]='l';
		}
		else if(str[i]=='}')
		{
			str[i]='v';
		}
		else if(str[i]=='~')
		{
			str[i]='.';
		}
	}

	cout<<"\n";
	enloadingBar();

	write<<str<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t\tYOUR PASSWORD HAS BEEN SAVED."<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
	Sleep(700);
	getch();

    write.close();
   }
}

void decrypt()
{
	string str,filename;
	int len;

	cout<<"\t\t\t\t\t\t\t\t\t----------------------------------------------------------------\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t\tEnter title: ";
	cin>>filename;
	cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";

	ifstream read(filename,ios::in);

    if(!read)
   {
      cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
      cout<<"\t\t\t\t\t\t\t\t\t\t\tFILE DOESN'T EXIST."<<endl;
      cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
      Sleep(700);
      getch();
   }
   else
   {
       read>>str;
       	len = str.length();

	for(int i=0 ; i<len; i++)
	{
		if(str[i]=='w')
		{
			str[i]='!';
		}
		else if(str[i]=='i')
		{
			str[i]='"';
		}
		else if(str[i]=='K')
		{
			str[i]='#';
		}
		else if(str[i]=='B')
		{
			str[i]='$';
		}
		else if(str[i]=='d')
		{
			str[i]='%';
		}
		else if(str[i]=='a')
		{
			str[i]='&';
		}
		else if(str[i]=='O')
		{
			str[i]=39;
		}
		else if(str[i]=='E')
		{
			str[i]='(';
		}
		else if(str[i]=='r')
		{
			str[i]=')';
		}
		else if(str[i]=='h')
		{
			str[i]='*';
		}
		else if(str[i]=='W')
		{
			str[i]='+';
		}
		else if(str[i]=='V')
		{
			str[i]=',';
		}
		else if(str[i]=='n')
		{
			str[i]='-';
		}
		else if(str[i]=='R')
		{
			str[i]='.';
		}
		else if(str[i]=='L')
		{
			str[i]='/';
		}
		else if(str[i]=='#')
		{
			str[i]='0';
		}
		else if(str[i]=='~')
		{
			str[i]='1';
		}
		else if(str[i]=='%')
		{
			str[i]='2';
		}
		else if(str[i]=='}')
		{
			str[i]='3';
		}
		else if(str[i]=='=')
		{
			str[i]='4';
		}
		else if(str[i]=='{')
		{
			str[i]='5';
		}
		else if(str[i]==92)
		{
			str[i]='6' ;
		}
		else if(str[i]=='<')
		{
			str[i]='7';
		}
		else if(str[i]=='|')
		{
			str[i]='8';
		}
		else if(str[i]=='[')
		{
			str[i]='9';
		}
		else if(str[i]=='x')
		{
			str[i]=':';
		}
		else if(str[i]=='y')
		{
			str[i]=':';
		}
		else if(str[i]=='k')
		{
			str[i]='<';
		}
		else if(str[i]=='z')
		{
			str[i]='=';
		}
		else if(str[i]=='G')
		{
			str[i]='>';
		}
		else if(str[i]=='o')
		{
			str[i]='?';
		}
		else if(str[i]=='A')
		{
			str[i]='@';
		}
		else if(str[i]=='5')
		{
			str[i]='A';
		}
		else if(str[i]==',')
		{
			str[i]='B';
		}
		else if(str[i]=='&')
		{
			str[i]='C';
		}
		else if(str[i]=='/')
		{
			str[i]='D';
		}
		else if(str[i]=='U')
		{
			str[i]='E';
		}
		else if(str[i]=='$')
		{
			str[i]='F';
		}
		else if(str[i]=='+')
		{
			str[i]='G';
		}
		else if(str[i]=='!')
		{
			str[i]='H';
		}
		else if(str[i]=='_')
		{
			str[i]='I';
		}
		else if(str[i]=='s')
		{
			str[i]='J';
		}
		else if(str[i]=='*')
		{
			str[i]='K';
		}
		else if(str[i]=='"')
		{
			str[i]='L';
		}
		else if(str[i]==39)
		{
			str[i]='M';
		}
		else if(str[i]=='(')
		{
			str[i]='N';
		}
		else if(str[i]=='t')
		{
			str[i]='O';
		}
		else if(str[i]=='>')
		{
			str[i]='P';
		}
		else if(str[i]==')')
		{
			str[i]='Q';
		}
		else if(str[i]=='7')
		{
			str[i]='R';
		}
		else if(str[i]=='m')
		{
			str[i]='S';
		}
		else if(str[i]==']')
		{
			str[i]='T';
		}
		else if(str[i]=='q')
		{
			str[i]='U';
		}
		else if(str[i]=='0')
		{
			str[i]='V';
		}
		else if(str[i]==':')
		{
			str[i]='W';
		}
		else if(str[i]=='`')
		{
			str[i]='X';
		}
		else if(str[i]=='Q')
		{
			str[i]='Y';
		}
		else if(str[i]=='J')
		{
			str[i]='Z';
		}
		else if(str[i]=='c')
		{
			str[i]='[';
		}
		else if(str[i]=='Y')
		{
			str[i]=92;
		}
		else if(str[i]=='D')
		{
			str[i]=']';
		}
		else if(str[i]=='p')
		{
			str[i]='^';
		}
		else if(str[i]=='Z')
		{
			str[i]='_';
		}
		else if(str[i]=='N')
		{
			str[i]='`';
		}
		else if(str[i]=='@')
		{
			str[i]='a';
		}
		else if(str[i]=='H')
		{
			str[i]='b';
		}
		else if(str[i]=='4')
		{
			str[i]='c';
		}
		else if(str[i]=='1')
		{
			str[i]='d';
		}
		else if(str[i]=='u')
		{
			str[i]='e';
		}
		else if(str[i]=='M')
		{
			str[i]='f';
		}
		else if(str[i]=='3')
		{
			str[i]='g';
		}
		else if(str[i]=='^')
		{
			str[i]='h';
		}
		else if(str[i]=='f')
		{
			str[i]='i';
		}
		else if(str[i]=='6')
		{
			str[i]='j';
		}
		else if(str[i]==';')
		{
			str[i]='k';
		}
		else if(str[i]=='2')
		{
			str[i]='l';
		}
		else if(str[i]=='-')
		{
			str[i]='m';
		}
		else if(str[i]=='F')
		{
			str[i]='n';
		}
		else if(str[i]=='?')
		{
			str[i]='o';
		}
		else if(str[i]=='8')
		{
			str[i]='p';
		}
		else if(str[i]=='9')
		{
			str[i]='q';
		}
		else if(str[i]=='C')
		{
			str[i]='r';
		}
		else if(str[i]=='b')
		{
			str[i]='s';
		}
		else if(str[i]=='I')
		{
			str[i]='t';
		}
		else if(str[i]=='X')
		{
			str[i]='u';
		}
		else if(str[i]=='T')
		{
			str[i]='v';
		}
		else if(str[i]=='S')
		{
			str[i]='w';
		}
		else if(str[i]=='P')
		{
			str[i]='x';
		}
		else if(str[i]=='g')
		{
			str[i]='y';
		}
		else if(str[i]=='e')
		{
			str[i]='z';
		}
		else if(str[i]=='j')
		{
			str[i]='{';
		}
		else if(str[i]=='l')
		{
			str[i]='|';
		}
		else if(str[i]=='v')
		{
			str[i]='}';
		}
		else if(str[i]=='.')
		{
			str[i]='~';
		}
	}

	cout<<"\n";
	deloadingBar();

	cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t\tFile name: "<<filename<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t\t\tPassword that you had saved: "<<str<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
	Sleep(700);
	getch();
    }
    read.close();
   }

   void fdelete()
   {
        char filename[50];
            cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
            cout<<"\t\t\t\t\t\t\t\t\t\t\tEnter title to delete: ";
            cin>>filename;
            cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";

            int ask = 1;

            cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
            cout<<"\t\t\t\t\t\t\t\t\t\t\t0.Let me think once again "<<endl;
            cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
            cout<<"\t\t\t\t\t\t\t\t\t\t\t1.I'm sure delete it. "<<endl;
            cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
            cout<<"\t\t\t\t\t\t\t\t\t\t\tEnter your choice: ";
            cin>>ask;
            cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
            system("CLS");

            if (ask == 1)
            {
                if( remove( filename ) != 0 )
                {
                    cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
                    cout<<"\t\t\t\t\t\t\t\t\t\t\tINVALID TITLE"<<endl;
                    cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
                    Sleep(700);
                    fdelete();
                }
                else
                {
                    cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
                    cout<<"\t\t\t\t\t\t\t\t\t\t\tDELETED SUCCESSFULLY."<<endl;
                    cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
                    Sleep(700);
                    getch();
                }
            }

            else
            {
                fdelete();
            }
   }


