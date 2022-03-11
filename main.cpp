#include<iostream>
using namespace std;

int main(){
    int quant,choice;
    //quantity
    int qrooms=0, qpasta=0, qburger=0,qnoodles=0,qshake=0,qchicken=0;

    // food items sold
    int srooms=0,spasta=0,sburger=0,snoodles=0,sshake=0,schicken=0;

    // total price of items
    int trooms=0,tpasta=0,tburger=0,tnoodles=0,tshake=0,tchicken=0;

    cout<<"\n\t quantity of items we have";
    cout<<"\n rooms available:";
    cin>>qrooms;
    cout<<"\n quantity of pasta:";
    cin>>qpasta;
    cout<<"\n quantity of burger:";
    cin>>qburger;
    cout<<"\n quantity of noodles:";
    cin>>qnoodles;
    cout<<"\n quantity of shake:";
    cin>>qshake;
    cout<<"\n quantity of chicken:";
    cin>>qchicken;

    m:
    
    cout<<"\n please select from the menu options";
    cout<<"\n 1) Rooms";
    cout<<"\n 2) Pasta";
    cout<<"\n 3) Burger";
    cout<<"\n 4) Noodles";
    cout<<"\n 5) Shake";
    cout<<"\n 6) Chicken";
    cout<<"\n 7) Info regarding sales";
    cout<<"\n 8) Exit";

    cout<<"\n Please enter your choice:";
    cin>>choice;

    switch(choice){
        case 1:
          cout<<"\n Enter the number of rooms you want";
          cin>>quant;
          if(qrooms-srooms>=quant){
              srooms=srooms+quant;
              trooms=trooms+quant*1200;
              cout<<"\n"<<quant<<"rooms have been allotted to you";
          }
          else{
              cout<<"\n only "<<qrooms-srooms<<"remaining in hotel";
              break;
          }


          case 2:
          cout<<"\n Enter pasta quantity";
          cin>>quant;
          if(qpasta-spasta>=quant){
              spasta=spasta+quant;
              tpasta=tpasta+quant*250;
              cout<<"\n"<<quant<<"pasta ordered";
          }
          else{
              cout<<"\n only "<<qpasta-spasta<<"remaining in hotel";
              break;
          }


 case 3:
          cout<<"\n Enter burger quantity";
          cin>>quant;
          if(qburger-sburger>=quant){
              sburger=sburger+quant;
              tburger=tburger+quant*250;
              cout<<"\n"<<quant<<"burger ordered";
          }
          else{
              cout<<"\n only "<<qburger-sburger<<"remaining in hotel";
              break;
          }


          case 4:
          cout<<"\n Enter noodles quantity";
          cin>>quant;
          if(qnoodles-snoodles>=quant){
              snoodles=snoodles+quant;
              tnoodles=tnoodles+quant*250;
              cout<<"\n"<<quant<<"noodles ordered";
          }
          else{
              cout<<"\n only "<<qnoodles-snoodles<<"remaining in hotel";
              break;
          }


          case 5:
          cout<<"\n Enter shake quantity";
          cin>>quant;
          if(qshake-sshake>=quant){
              sshake=sshake+quant;
              tshake=tshake+quant*250;
              cout<<"\n"<<quant<<"shakes ordered";
          }
          else{
              cout<<"\n only"<<qshake-sshake<<"remaining in hotel";
              break;
          }


          case 6:
          cout<<"\n Enter chicken quantity";
          cin>>quant;
          if(qchicken-schicken>=quant){
              schicken=schicken+quant;
              tchicken=tchicken+quant*250;
              cout<<"\n"<<quant<<"chicken ordered";
          }
          else{
              cout<<"\n only "<<qchicken-schicken<<"remaining in hotel";
              break;
          }


          case 7:
          cout<<"\n Deatils of sales:";
          cout<<"\n Number of rooms we had:"<<qrooms;
          cout<<"\n Number of rooms we gave for rent:"<<srooms;
          cout<<"\n Remaining rooms:"<<qrooms-srooms;
          cout<<"\n Total rooms sales:"<<trooms;

          cout<<"\n Number of pasta we had:"<<qpasta;
          cout<<"\n Number of pasta we gave for rent:"<<spasta;
          cout<<"\n Remaining pasta:"<<qpasta-spasta;
          cout<<"\n Total pasta sales:"<<tpasta;

          cout<<"\n Number of burgers we had:"<<qburger;
          cout<<"\n Number of burgers we gave for rent:"<<sburger;
          cout<<"\n Remaining burgers:"<<qburger-sburger;
          cout<<"\n Total burgers sales:"<<tburger;

          cout<<"\n Number of noodles we had:"<<qnoodles;
          cout<<"\n Number of noodles we gave for rent:"<<snoodles;
          cout<<"\n Remaining noodles:"<<qnoodles-snoodles;
          cout<<"\n Total noodles sales:"<<tnoodles;

          cout<<"\n Number of shakes we had:"<<qshake;
          cout<<"\n Number of shakes we gave for rent:"<<sshake;
          cout<<"\n Remaining shakes:"<<qshake-sshake;
          cout<<"\n Total shakes sales:"<<tshake;

          cout<<"\n Number of chickens we had:"<<qchicken;
          cout<<"\n Number of chickens we gave for rent:"<<schicken;
          cout<<"\n Remaining chickens:"<<qchicken-schicken;
          cout<<"\n Total chicken sales:"<<tchicken;

          case 8:
          exit(0);

          cout<<"\n Please select the numbers mentioned above";

    }

    goto m;
}