#include <iostream>
using std::cin, std::cout;

int quant;
int choice;
int m=1;

//Prices
int roomPrice=1200, burgerPrice=120, drinkPrice=120;
//Quantity
int Qrooms=0, Qburger=0, Qdrinks=0;
//Food Items sold
int Srooms=0, Sburger=0, Sdrinks=0;
//Total Price of Items
int Total_rooms=0, Total_burger=0, Total_drinks=0;

void Rooms()
{
  cout<<"\n\n Enter the Number of Rooms you want: ";
  cin>>quant;
  if(Qrooms-Srooms >= quant)
    {
      Srooms=Srooms+quant;
      Total_rooms = Total_rooms+quant*roomPrice;
      cout<<"\n\t"<<quant<<" Room/Rooms have been alloted to you.";
    }
  else
    {
      cout<<"\n\t Only "<<Qrooms-Srooms<<"Rooms Remaining in Hotel.";
    }
}

void Burgers()
{
  cout<<"\n\n Enter Servings of Burger: ";
  cin>>quant;
  if(Qburger-Sburger >= quant)
    {
      Sburger=Sburger+quant;
      Total_burger = Total_burger+quant*burgerPrice;
      cout<<"\n\t"<<quant<<" Burgers in the order.";
    }
  else
    {
      cout<<"\n\t Only "<<Qburger-Sburger<<" Burgers Remaining in the Hotel.";
    }
}

void Drinks()
{
  cout<<"\n\n Enter Servings of Drinks: ";
  cin>>quant;
  if(Qdrinks-Sdrinks >= quant)
    {
      Sdrinks=Sdrinks+quant;
      Total_drinks = Total_drinks+quant*drinkPrice;
      cout<<"\n\t"<<quant<<" Drinks in the order.";
    }
  else
    {
      cout<<"\n\t Only"<<Qdrinks-Sdrinks<<" Drinks Remaining in the Hotel.";
    }
}

void Details()
{
  cout<<"\n Details of Sales and Collection: ";
  cout<<"\n\t Number of Rooms we had: "<<Qrooms;
  cout<<"\n\t Number of Rooms we gave for Rent: "<<Srooms;
  cout<<"\n\t Remaining Rooms: "<<Qrooms-Srooms;
  cout<<"\n\t Total Rooms Collection for the day: "<<Total_rooms;

  cout<<"\n\n\t Number of Burgers we had: "<<Qburger;
  cout<<"\n\t Number of Burgers Sold: "<<Sburger;
  cout<<"\n\t Remaining Burgers: "<<Qburger-Sburger;
  cout<<"\n\t Total Burger Collection for the day: "<<Total_burger;

  cout<<"\n\n\t Number of Drinks we had: "<<Qdrinks;
  cout<<"\n\t Number of Drinks sold: "<<Sdrinks;
  cout<<"\n\t Remaining Drinks: "<<Qdrinks-Sdrinks;
  cout<<"\n\t Total Drink Collection for the day: "<<Total_drinks;  
}

int main()
{
    cout<<"\n Quantity of Items in Hotel";
    cout<<"\n Rooms Available: ";
    cin>>Qrooms;
    cout<<" Quantity of Burger: ";
    cin>>Qburger;
    cout<<" Quantity of Drinks: ";
    cin>>Qdrinks;

    while(m>0)
    {
      cout<<"\n\n Please select from the menu options: ";
      cout<<"\n\n\t 1) Rooms";
      cout<<"\n\t 2) Burger";
      cout<<"\n\t 3) Drinks";
      cout<<"\n\t 4) Information regarding sales/collection";
      cout<<"\n\t 5) Exit";

      cout<<"\n\n Please Enter your Choice: ";
      cin>>choice;

      switch(choice)
      {
        case 1:
          Rooms();
          break;

        case 2:
          Burgers();
          break;

        case 3:
          Drinks();
          break;

        case 4:
          Details();
          break;

        case 5:
          exit(0);

        default:
          cout<<"\n Please select from one of the numbers mentioned above!";
          break;
      }
    }
} 
