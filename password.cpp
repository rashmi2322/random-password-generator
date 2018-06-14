

#include<algorithm>
#include<iostream>
#include<string>
#include<cstdlib>
#include<time.h>

using namespace std;

string small="aAbBCDcdefgEFGHhijkIJKLMlmnopqrsNOPQRSTtuvwxyzUVWXYZ";
string special="!@#$%^&*";
string digit="0123456789";
int a=112233;

int random() // to generate a random number
{
    time_t seconds;
    seconds = time(NULL);
    int h=seconds/100;
    seconds = seconds % 100;
    seconds=seconds*h;
    seconds=seconds%100;
   int b=4457;
   a=(a*seconds)%b;
	return a;
}

void randompassword() // to generate a random password which contains all three parameters
{string s="";
	for(int i=0;i<a%5+8;i++)
    {

            if(i==3)
            {
                s=s+special[random()%7];
            }
            else if(i==6)
            {
                s=s+digit[random()%10];
            }
            else
            {
                s=s+small[random()%52];
            }

    }
    random_shuffle(s.begin(),s.end());
    cout<<s;
    cout<<endl;
}


void randomn() // to generate a password which contain only number
{

	for(int i=0;i<a%5+8;i++)
	{
		cout<<digit[random()%10];
	}
	cout<<endl;
}


void randomc() // to generate a password which contain only character
{
	for(int i=0;i<a%5+8;i++)
	{
		cout<<small[random()%52];
	}
	cout<<endl;
}


void randomboth() // to generate a password which contain both character and number
{
	for(int i=0;i<a%5+8;i++)
	{
		if(i%2==0)
		cout<<small[random()%52];
		else
		cout<<digit[random()%10];
	}
	cout<<endl;
}


int main()  // MAIN FUNCTION
{
      int opt;
	  do
        {
      		cout<<"\n    MENU\n\nPRESS 1 TO GENERATE A PASSWORD \nPRESS 2 TO GENERATE MULTIPLE PASSWORD\nPRESS 3 TO EXIT THE WINDOW"<<endl;
      		cin>>opt;

      		if(opt==1)
      		{

      			cout<<"PRESS TO GENERATE PASSWORD USING \n1-NUMBER ONLY \n2-CHARACTER ONLY \n3-NUMBER AND CHARACTER \n4-NUMBER, CHARACTER AND SYMBOL"<<endl;
				cin>>opt;
				cout<<"PASSWORD GENERATED IS "<<endl;
				if(opt==1)
				randomn();
				else if(opt==2)
				randomc();
				else if(opt==3)
				randomboth();
				else if(opt==4)
				randompassword();
				else
				cout<<"WRONG CHOICE"<<endl;
			}


			else if(opt==2)
			{
				int n;
      			cout<<"ENTER NUMBER OF PASSWORD TO BE GENERTAED"<<endl;
      			cin>>n;
      			cout<<"PRESS TO GENERATE PASSWORD USING \n1-NUMBER ONLY \n2-CHARACTER ONLY \n3-NUMBER AND CHARACTER \n4-NUMBER,CHARACTER AND SYMBOL"<<endl;
				cin>>opt;
				cout<<"PASSWORD GENERATED IS "<<endl;
				for(int i=0;i<n;i++)
      			{
          		if(opt==1)
				randomn();
				else if(opt==2)
				randomc();
				else if(opt==3)
				randomboth();
				else if(opt==4)
				randompassword();
				else
				cout<<"WRONG CHOICE"<<endl;
      			}
			}


			else if(opt==3)
			{
				cout<<"\n  THANKS FOR USING THIS PASSWORD GENERATOR"<<endl;
				exit(0);
			}

			 cout<<"PRESS 1 TO USE AGAIN OR ANYTHING ELSE TO EXIT"<<endl;
			 cin>>opt;
			 if(opt!=1)
			 exit(0);
	}while(opt==1);
}
