#include<iostream>
#include<windows.h>

using namespace std;

class Movie
{
public :
    int a;
    char Name[50];
    char name[50];
    long long No;

    void getMovie();
    void getId();
};
void Movie::getMovie()
{
    cout<<"\n\n   Trending Movies   "<<endl<<endl;
    cout<<"1.Avenger Endgame"<<endl<<endl;
    cout<<"2.KGF Chapter 2"<<endl<<endl;
    cout<<"3.RRR"<<endl<<endl;
    cout<<"4.Puspa"<<endl<<endl;
    cout<<"5.Doctor Strange in the Multiverse of Madness"<<endl<<endl<<endl;

    cout<<"Select(Number) of Movie You Want to Show"<<endl<<"~>";
    cin>>a;
    cout<<endl;

}
void Movie::getId()
{
    cout<<"enter Your first Name : ";
    cin>>Name;
    cout<<"enter Your Last Name : ";
    cin>>name;
    cout<<"enter Your Number : ";
    cin>>No;
    cout<<endl;
}
class Time
{
public:
    int x;
    int y;

    void getData();
};
void Time::getData()
{
    cout<<"~> 1. Cosmoplex Multiplex "<<endl<<endl;
    cout<<"\t 1.|11:00 AM|\t 2.|02:00 PM|\t 3.|04:15 PM|"<<endl;
    cout<<"\t 4.|07:15 PM|\t 5.|10:15 PM|\t 6.|11:00 PM|"<<endl<<endl;

    cout<<"~> 2. Inox R World "<<endl<<endl;
    cout<<"\t 1.|11:00 AM|\t 2.|02:00 PM|\t 3.|04:15 PM|"<<endl;
    cout<<"\t 4.|07:15 PM|\t 5.|10:15 PM|\t 6.|11:00 PM|"<<endl<<endl;

    cout<<"~> 3. Galaxy Cinema "<<endl<<endl;
    cout<<"\t 1.|11:00 AM|\t 2.|02:00 PM|\t 3.|04:15 PM|"<<endl;
    cout<<"\t 4.|07:15 PM|\t 5.|10:15 PM|\t 6.|11:00 PM|"<<endl<<endl;

    cout<<"~> 4. Rajshree Cinema "<<endl<<endl;
    cout<<"\t 1.|11:00 AM|\t 2.|02:00 PM|\t 3.|04:15 PM|"<<endl;
    cout<<"\t 4.|07:15 PM|\t 5.|10:15 PM|\t 6.|11:00 PM|"<<endl<<endl;

    cout<<"Select Cinema(No): ";
    cin>>x;
    cout<<"Select Your Time(No): ";
    cin>>y;
    cout<<endl;
}
class SeatType
{
public:
    int c;
    int n;
    int p,q,r;
    int s[50];
    int Total;
    int Max;

    int getPerson();
};
int SeatType::getPerson()
{
    cout<<"* Which Type of Ticket You Want *"<<endl<<endl;
    cout<<"\t\t\t 1.platinum         PRICE 500$"<<endl;
    cout<<"\t\t\t 2.golden           PRICE 400$"<<endl;
    cout<<"\t\t\t 3.silver           PRICE 300$"<<endl<<endl;
    cout<<"Choose Your Comfortable Ticket(No):";
    cin>>c;
    cout<<endl;
    cout<<"How many Tickets You Want: ";
    cin>>n;

    if(c==1)
    {
        int p=500;
        Total=p*n;
    }

    else if(c==2)
    {
        int q=400;
        Total=q*n;
    }
    else if(c==3)
    {
        int r=300;
        Total=r*n;
    }
    else
        {
            cout<<"Please Choose A initialized Number"<<endl<<endl;
        }

    int k=1,g=1,f=1;

    cout<<"\t\t\t-------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t                        Screen This Side                           "<<endl;
    cout<<"\t\t\t-------------------------------------------------------------------"<<endl<<endl;
    cout<<"\t";

     for(int i=1;i<=5;i++)
    {
       for(int j=1;j<=10;j++)
        {
            cout<<"\t A["<<k<<"]";
            k++;
        }
        cout<<endl<<"\t";
    }
    cout<<endl<<endl<<"\t";
     for(int i=1;i<=5;i++)
    {
       for(int j=1;j<=10;j++)
        {
            cout<<"\t B["<<g<<"]";
            g++;
        }
        cout<<endl<<"\t";
    }
    cout<<endl<<endl<<"\t";
     for(int i=1;i<=5;i++)
    {
       for(int j=1;j<=10;j++)

        {
            cout<<"\t C["<<f<<"]";
            f++;
        }
        cout<<endl<<"\t";
    }
    cout<<endl<<endl;

    cout<<"choice your seat Number(Should Be Different): ";

    for(int i=0;i<n;i++)
    {
        if(c==1)
        {
            cout<<"C~>";
            cin>>s[i];
        }
        else if(c==2)
        {
            cout<<"B~>";
            cin>>s[i];
        }

        else if(c==3)
        {
            cout<<"A~>";
            cin>>s[i];
        }
       cout<<"\t\t\t\t\t      ";
    }

    Max=s[0];
    for(int i=0;i<n;i++)
    {
        if(s[i]>Max)
            Max=s[i];
    }
    cout<<endl;
}
class Ticket : public Movie,public Time,public SeatType
{
public:
    void Display();
};
void Ticket::Display()
{
    cout<<"\t  |--------------------------------------------------------------------------------|"<<endl;
    cout<<"\t  |                                                                                |"<<endl;
    cout<<"\t  |                                                                                |"<<endl;
    cout<<"\t  |\t\tCongratulation,                                                    |"<<endl;
    cout<<"\t  |\t\t\tYour Ticket has been Booked                                |"<<endl;
    cout<<"\t  |                                                                                |"<<endl;

    cout<<"\t\tYour Name : "<<Name<<" "<<name<<endl;

    cout<<"\t\t";
    if(a==1)
    {
        cout<<"Selected Movie : Avengers Endgame ";
    }
    if(a==2)
    {
        cout<<"Selected Movie : KGF Chapter 2    ";
    }
    if(a==3)
    {
        cout<<"Selected Movie : RRR              ";
    }
    if(a==4)
    {
        cout<<"Selected Movie : Puspa            ";
    }
    if(a==5)
    {
        cout<<"Selected Movie : Doctor Strange   ";
    }

    if(c==1)
    {
         cout<<"\t\tTicket Type: Platinum"<<endl;
    }
    if(c==2)
    {
         cout<<"\t\tTicket Type: Golden"<<endl;
    }
    if(c==3)
    {
         cout<<"\t\tTicket Type: Silver"<<endl;
    }

    cout<<"\t\tYour Contact Number : "<<No;
    cout<<"\t\tTotal Bill : "<<Total<<"$"<<endl;
    cout<<"\t\tNumber Of Tickets:"<<n;
    cout<<"\t\t\t\tSeat Number:";
    for(int i=0;i<n;i++)
    {
        if(s[i]<51)
        cout<<" "<<s[i];
    }
    cout<<endl<<endl;

    cout<<"\t  |\tYour Location of Cinema : ";

    switch(x)
    {
        case 1:
        cout<<"Cosmoplex Multiplex ";
        break;
         case 2:
        cout<<"Inox R World        ";
        break;
         case 3:
        cout<<"Galaxy Cinema       ";
        break;
         case 4:
        cout<<"Rajshree Cinema     ";
        break;
    }
    cout<<"\t\t BarCODE: @#$      |"<<endl;

    cout<<"\t  |\tYour Suitable Time :";
    switch(y)
    {
        case 1:
        cout<<" |11:00 AM|  ";
        break;
         case 2:
        cout<<" |02:00 PM|  ";
        break;
         case 3:
        cout<<" |04:15 PM|  ";
        break;
         case 4:
        cout<<" |07:15 PM|  ";
        break;
         case 5:
        cout<<" |10:15 PM|  ";
        break;
        case 6:
        cout<<" |11:00 PM|  ";
        break;
    }
    cout<<"\t\t\t\t  &*!      |"<<endl;

    cout<<"\t  |                                                                                |"<<endl;
    cout<<"\t  |         Thank You For Booked Ticket From Our Site,                             |"<<endl;
    cout<<"\t  |                                                   Enjoy Your Time.             |"<<endl;
    cout<<"\t  |--------------------------------------------------------------------------------|"<<endl;
}

int main()
{
   system("Color 2");
   int n;
   cout<<"#     # ##### #     ##### ###### ##   ## #####"<<endl;
   cout<<"#     # #     #     #     #    # # # # # #    "<<endl;
   cout<<"#  #  # ####  #     #     #    # #  #  # #####"<<endl;
   cout<<"# # # # #     #     #     #    # #     # #    "<<endl;
   cout<<"##   ## ##### ##### ##### ###### #     # #####"<<endl<<endl;

   cout<<"|------------------------------|"<<endl;
   cout<<"|*Press Enter to Book A Ticket*|"<<endl;
   cout<<"|------------------------------|"<<endl;
   cin.get();

   Ticket t;

           do
            {
                t.getMovie();
                if(t.a>5)
                {
                    cout<<"\n\t\t Please Enter Valid Choice "<<endl<<endl<<endl;
                }
            } while(t.a>=6);

            t.getId();
           do
            {
                t.getData();
                if(t.x>=5 || t.y>=7)
                {
                    cout<<"\n\t\t Please Enter Valid Choice "<<endl<<endl<<endl;
                }
            }while(t.x>=5 || t.y>=7);

           do
            {
                t.getPerson();
                if(t.Max>=51 || t.c>=4 || t.Max<=51 && t.c>=4 || t.Max>=51 && t.c<=4)
                {
                     cout<<"\n\t\t Please Enter Valid Choice "<<endl<<endl<<endl;
                }
            }while(t.Max>=51 && t.c>=4 || t.Max<=51 && t.c>=4 || t.Max>=51 && t.c<=4);

            t.Display();

do
{
    cout<< "\n\n1 Book More Tickets"<<endl<<"2 Display Trending Movies"<<endl<<"3 View Ticket"<<endl<<"4 Exit"<<endl<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>n;

   switch(n)
   {
       case 1:
           do
            {
                t.getMovie();
                 if(t.a>5)
                {
                    cout<<"\n\t\t Please Enter Valid Choice "<<endl<<endl<<endl;
                }

            } while(t.a>=6);

            t.getId();

           do
            {
                t.getData();
                if(t.x>=5 || t.y>=7)
                {
                    cout<<"\n\t\t Please Enter Valid Choice "<<endl<<endl<<endl;
                }
            }while(t.x>=5 || t.y>=7);

           do
            {
                t.getPerson();
                if(t.Max>=51 && t.c>=4 || t.Max<=51 && t.c>=4 || t.Max>=51 && t.c<=4)
                {
                     cout<<"\n\t\t Please Enter Valid Choice "<<endl<<endl<<endl;
                }
            }while(t.Max>=51 && t.c>=4 || t.Max<=51 && t.c>=4 || t.Max>=51 && t.c<=4);

            t.Display();
            break;

        case 2:
            cout<<"\n\n   Trending Movies   "<<endl<<endl;
            cout<<"1.Avenger Endgame"<<endl<<endl;
            cout<<"2.KGF Chapter 2"<<endl<<endl;
            cout<<"3.RRR"<<endl<<endl;
            cout<<"4.Puspa"<<endl<<endl;
            cout<<"5.Doctor Strange in the Multiverse of Madness"<<endl;
            break;
      case 3:
            t.Display();
            break;
      case 4:
            cout<<"\nThank You"<<endl;
			cout<<"Have a Nice Day!!"<<endl;
			break;
    }
}while(n!=4);
return 0;
}

