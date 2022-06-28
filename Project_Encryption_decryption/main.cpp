#include<iostream>
#include<windows.h>
#include<dir.h>
#include<process.h>
#include<string>
#include <conio.h>
#include <stdlib.h>
#include "level1_key.h"

using namespace std;

int main ()
{
	system("color 0A");

	int choice;
	string name, pass;

	string user = "Dhwani";
	string word = "Dhwani";

    cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\tWho's this?   ";
    cin>>name;
    cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
    cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t\tEnter password: ";

    char ch;
    ch = _getch();
    while(ch != 13)
    {
        //character 13 is enter
        pass.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";

    int ask = 1;
    if(user.compare(name)==0 && word.compare(pass)==0)
    {
        while (ask)
        {
            loadingBar( );
            cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
            cout<<"\t\t\t\t\t\t\t\t\t\t\t1.Add a password."<<endl;
            cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
            cout<<"\t\t\t\t\t\t\t\t\t\t\t2.View password."<<endl;
            cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
            cout<<"\t\t\t\t\t\t\t\t\t\t\t3.Delete a password."<<endl;
            cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
            cout<<"\t\t\t\t\t\t\t\t\t\t\tEnter your choice: ";
            cin>>choice;
            cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";

            system("CLS");

            switch(choice)
            {
                case 1:
                    encrypt( );
                    break;

                case 2:
                    decrypt( );
                    break;

                case 3:
                    fdelete();
                    break;

                default:
                    cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
                    cout<<"\t\t\t\t\t\t\t\t\t\t\tINVALID CHOICE! "<<endl;
                    cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
                    Sleep(700);
                    getch();
                    break;
            }

            system("CLS");

            cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
            cout<<"\t\t\t\t\t\t\t\t\t\t\t0.Done with the work here."<<endl;
            cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
            cout<<"\t\t\t\t\t\t\t\t\t\t\t1.Want to spend more time here."<<endl;
            cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
            cout<<"\t\t\t\t\t\t\t\t\t\t\tEnter your choice: ";
            cin>>ask;
            cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
        }
    }

    else
    {
        cout<<"\n\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
        cout<<"\t\t\t\t\t\t\t\t\t\t\tINCORRECT USER NAME OR PASSWORD."<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
        cout<<"\t\t\t\t\t\t\t\t\t\t\tACCESS DENIED."<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t-----------------------------------------------------------------\n";
        Sleep(700);
        getch();
    }

	return 0;
}




