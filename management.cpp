#include <iostream>
using namespace std; 

int main()
{
    int quant;
    int choice;

    //Quantity
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qdrinks=0, Qpie=0;
    //Food Items sold
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sdrinks=0, Spie=0;
    //Total Price of Items
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_drinks=0, Total_pie=0;

    cout<<"\n Quantity of Items in Hotel";
    cout<<"\n Rooms Avaliable: ";
    cin>>Qrooms;
    cout<<"\n Quantity of Pasta: ";
    cin>>Qpasta;
    cout<<"\n Quantity of Burger: ";
    cin>>Qburger;
    cout<<"\n Quantity of Noodles: ";
    cin>>Qnoodles;
    cout<<"\n Quantity of Drinks: ";
    cin>>Qdrinks;
    cout<<"\n Quantity of Pie: ";
    cin>>Qpie;

    cout<<"\n Please selct from the menu options: ";
    cout<<"\n\n 1) Rooms";
    cout<<"\n 2) Pasta";
    cout<<"\n 3) Burger";
    cout<<"\n 4) Noodles";
    cout<<"\n 5) Drinks";
    cout<<"\n 6) Pie";
    cout<<"\n 7) Information regarding sales/collection";
    cout<<"\n 8) Exit";

    cout<<"\n\n Please Enter your Choice:";
    cin>>choice;

    switch(choice)
    {
      case 1:
        cout<<"\n\n Enter the number of rooms you want: ";
        cin>>quant;
        if(Qrooms-Srooms >= quant)
        {
            Srooms=Srooms+quant;
            Total_rooms = Total_rooms+quant*1200;
            cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you.";
        }
        else
        {
            cout<<"\n\t Only"<<Qrooms-Srooms<<"Rooms Remaining in Hotel";
            break;
        }

      case 2:
        cout<<"\n\n Enter Servings of Pasta: ";
        cin>>quant;
        if(Qpasta-Spasta >= quant)
        {
            Spasta=Spasta+quant;
            Total_pasta = Total_pasta+quant*250;
            cout<<"\n\n\t\t"<<quant<<"Servings of Pasta is the order.";
        }
        else
        {
            cout<<"\n\t Only"<<Qpasta-Spasta<<"Pasta Servings Remaining in the Hotel";
            break;
        }

      case 3:
        cout<<"\n\n Enter Servings of burger: ";
        cin>>quant;
        if(Qburger-Sburger >= quant)
        {
            Sburger=Sburger+quant;
            Total_burger = Total_burger+quant*120;
            cout<<"\n\n\t\t"<<quant<<"Burgers is the order.";
        }
        else
        {
            cout<<"\n\t Only"<<Qburger-Sburger<<"Burgers Remaining in the Hotel";
            break;
        }

      case 4:
        cout<<"\n\n Enter Servings of Noodles: ";
        cin>>quant;
        if(Qnoodles-Snoodles >= quant)
        {
            Snoodles=Snoodles+quant;
            Total_noodles = Total_noodles+quant*140;
            cout<<"\n\n\t\t"<<quant<<"Servings of Noodles is the order.";
        }
        else
        {
            cout<<"\n\t Only"<<Qnoodles-Snoodles<<"Noodle Servings Remaining in the Hotel";
            break;
        }

      case 5:
        cout<<"\n\n Enter Servings of drinks: ";
        cin>>quant;
        if(Qdrinks-Sdrinks >= quant)
        {
            Sdrinks=Sdrinks+quant;
            Total_drinks = Total_drinks+quant*120;
            cout<<"\n\n\t\t"<<quant<<"Drinks is the order.";
        }
        else
        {
            cout<<"\n\t Only"<<Qdrinks-Sdrinks<<"Drinks Remaining in the Hotel";
            break;
        }

      case 6:
        cout<<"\n\n Enter Servings of Pie: ";
        cin>>quant;
        if(Qpie-Spie >= quant)
        {
            Spie=Spie+quant;
            Total_pie = Total_pie+quant*150;
            cout<<"\n\n\t\t"<<quant<<"Servings of Pie is the order.";
        }
        else
        {
            cout<<"\n\t Only"<<Qpie-Spie<<"Pie Servings Remaining in the Hotel";
            break;
        }
    }

} 
