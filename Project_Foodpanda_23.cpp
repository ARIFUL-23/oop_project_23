#include<bits/stdc++.h>
using namespace std;




class name{
public:
    virtual void welcome()=0;
};


class male:public name{
     string s, phn;
 public:
    male(string str, string strr)
    {
        s=str;
        phn=strr;
    }
    void welcome()
    {
        cout<<"Hello "<<s<<", "<<"Welcome to foodpanda\nPlease select your location\n";
    }

};

class female:public name{
     string s, phn;
 public:
    female(string nam, string nam1)
    {
        s=nam;
        phn=nam1;
    }
    void welcome()
    {
        cout<<"Hello "<<s<<", "<<"Welcome to foodpanda\nPlease select your location\n";
    }

};


class location
{
protected:
    vector<string> locationName;
public:
    location()
    {
        locationName.push_back("Khulna");
        //locationName.push_back("Dhaka");
        //locationName.push_back("Rajshahi");
    }

    void displayLocation()
    {
        for(int i=0; i<locationName.size(); i++)
            cout<<"1. "<<locationName[i]<<endl;
    }
};


class khulna
{
protected:
    vector<string>hotelName;
    vector<string>FoodMenu;

public:
    khulna()
    {

        hotelName.push_back("Royal Sundarbans Restaurant");
        hotelName.push_back("Ruposhi Bangla Restaurant");
        hotelName.push_back("Hotel City Plaza");
        hotelName.push_back("Hotel Royal Bengal");
        hotelName.push_back("Hotel Naz Garden");

    }

    void display_hotel_Name()
    {
        cout<<"Names of Restaurant in Khulna:"<<endl;
        cout<<endl;
        for(int i=0; i<hotelName.size(); i++)
        {
            cout<<i+1. <<" "<<hotelName[i]<<endl;
        }
    }

    void set_food_menu()
    {
        FoodMenu.push_back("Pizza");
        FoodMenu.push_back("Pasta");
        FoodMenu.push_back("Fried Chicken");
        FoodMenu.push_back("Steak");
        FoodMenu.push_back("Sandwich");
        FoodMenu.push_back("Biryani");
        FoodMenu.push_back("Soup");
        FoodMenu.push_back("Hamburger");
        FoodMenu.push_back("Cake");

    }

    void get_food_menu()
    {
        cout<<"Names of Food Iteams:"<<endl;
        cout<<endl;
        for(int i=0; i<FoodMenu.size(); i++)
        {
            cout<<i+1.<<" "<<FoodMenu[i]<<endl;
        }
    }
};



class bangla
{
protected:
    vector<string>rFooditeam;

public:
    bangla(){};

   void set_bangla()
    {
        rFooditeam.push_back("Caesar Salad");
        rFooditeam.push_back("Margherita Pizza");
        rFooditeam.push_back("Chicken Alfredo");
        rFooditeam.push_back("Grilled Salmon");
        rFooditeam.push_back("Beef Burger");

    }

    void get_bangla()
    {
        cout<<"Names of Food Iteams:"<<endl;
        cout<<endl;
        for(int i=0; i<rFooditeam.size(); i++)
        {
            cout<<i+1.<<" "<<rFooditeam[i]<<endl;
        }
    }
};






class city
{
protected:
    vector<string>cFooditeam;

public:
    city(){};

   void set_city()
    {
        cFooditeam.push_back("Vegetable Stir-Fry");
        cFooditeam.push_back("Fish and Chips");
        cFooditeam.push_back("Penne Arrabiata");
        cFooditeam.push_back("Tandoori Chicken");
        cFooditeam.push_back("Shrimp Scampi");

    }

    void get_city()
    {
        cout<<"Names of Food Iteams:"<<endl;
        cout<<endl;
        for(int i=0; i<cFooditeam.size(); i++)
        {
            cout<<i+1.<<" "<<cFooditeam[i]<<endl;
        }
    }
};








class hotel
{
protected:
    vector<string>hFooditeam;

public:
    hotel(){};

   void set_hotel()
    {
        hFooditeam.push_back("Chicken Parmesan");
        hFooditeam.push_back("Beef Tacos");
        hFooditeam.push_back("Sushi Rol");
        hFooditeam.push_back("Lobster Bisque");
        hFooditeam.push_back("BBQ Ribs");

    }

    void get_hotel()
    {
        cout<<"Names of Food Iteams:"<<endl;
        cout<<endl;
        for(int i=0; i<hFooditeam.size(); i++)
        {
            cout<<i+1.<<" "<<hFooditeam[i]<<endl;
        }
    }
};





class naz
{
protected:
    vector<string>nFooditeam;

public:
    naz(){};

   void set_naz()
    {
        nFooditeam.push_back("Chicken Satay");
        nFooditeam.push_back("Mushroom Risotto");
        nFooditeam.push_back("Pad Thai");
        nFooditeam.push_back("Lamb Kebabs");
        nFooditeam.push_back("Chocolate Lava Cake");

    }

    void get_naz()
    {
        cout<<"Names of Food Iteams:"<<endl;
        cout<<endl;
        for(int i=0; i<nFooditeam.size(); i++)
        {
            cout<<i+1.<<" "<<nFooditeam[i]<<endl;
        }
    }
};






class FoodPanda: public khulna, public location, public bangla, public city, public hotel, public naz
{
public:
    FoodPanda()
    {

    }
};


FoodPanda a;
void call ()
{   //a.log();
    a.displayLocation();
    int x;
    cin>>x;
    if(x==1)
    {
        a.display_hotel_Name();
        int p;
        cin>>p;
        if(p==1)
        {
            a.set_food_menu();
            a.get_food_menu();
            int h;
            cin>>h;
            if(h==1)
            {
                int x;
                cout<<"It's price 350 tk only.\nPlease payment to confirm\n\n";
                cin>>x;
                if(x==350)

                cout<<"Pizza Order Confirm\nPrice: 350"<<endl;}

            else if(h==2){

                    int x;
                cout<<"It's price 250 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==250)
               cout<<"Pasta Order Confirm\nPrice: 250"<<endl;}

            else if(h==3){
                         int x;
                cout<<"It's price 200 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==200)
                cout<<"Fried Chicken Order Confirm\nPrice: 200"<<endl;}

            else if(h==4){
                         int x;
                cout<<"It's price 300 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==300)
                cout<<"Steak Order Confirm\nPrice: 300\n"<<endl;}

            else if(h==5){
                         int x;
                cout<<"It's price 180 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==180)
               cout<<"Sandwich Order Confirm\nPrice: 180"<<endl;}
            else if(h==6){
     int x;
                cout<<"It's price 300 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==300)
                  cout<<"Biryani Order Confirm\nPrice: 300"<<endl;}

            else if(h==7){
                         int x;
                cout<<"It's price 250 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==250)
              cout<<"Soup Order Confirm\nPrice: 250"<<endl;}

            else if(h==8){
                         int x;
                cout<<"It's price 220 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==220)
            cout<<"Hamburger Order Confirm\nPrice: 220"<<endl;}
            else if(h==9){
                         int x;
                cout<<"It's price 280 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==280)
                        cout<<"Cake Order Confirm\nPrice: 280"<<endl;}
                        cout<<"It takes to delivary within 30 minutes"<<endl;
        }



    else if(p==2)
    {
       a.set_bangla();
       a.get_bangla();

            int h;
            cin>>h;
            if(h==1){
                         int x;
                cout<<"It's price 250 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==250)
                cout<<"Caesar Salad Order Confirm\nPrice: 250"<<endl;}

            else if(h==2){
                         int x;
                cout<<"It's price 350 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==350)
               cout<<"Margherita Pizza Order Confirm\nPrice: 350"<<endl;}

            else if(h==3){
                         int x;
                cout<<"It's price 210 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==210)
                cout<<"Chicken Alfredo Order Confirm\nPrice: 210"<<endl;}

            else if(h==4){
                         int x;
                cout<<"It's price 260 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==260)
                cout<<"Grilled Salmon Order Confirm\nPrice: 260"<<endl;}

            else if(h==5){
                         int x;
                cout<<"It's price 260 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==260)
               cout<<"Beef Burger Order Confirm\nPrice: 260"<<endl;}
cout<<"It takes to delivary within 30 minutes"<<endl;
        }


         else if(p==3)
    {
       a.set_city();
       a.get_city();

            int h;
            cin>>h;
            if(h==1)
            {
                int x;
                cout<<"It's price 180 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==180)

                cout<<"Vegetable Stir-Fry Order Confirm\nPrice: 180"<<endl;}

            else if(h==2){
                    int x;
                cout<<"It's price 180 tk only.\nPlease payment to confirm\n";
                cin>>x;
            if(x==180)
               cout<<"Fish and Chips Order Confirm\nPrice: 230"<<endl;}

            else if(h==3){
                    int x;
                cout<<"It's price 350 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==350)
                cout<<"Penne Arrabiata Order Confirm\nPrice: 350"<<endl;}

            else if(h==4){
                    int x;
                cout<<"It's price 150 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==150)
                cout<<"Tandoori Chicken Order Confirm\nPrice: 150"<<endl;}

            else if(h==5)
            {

            int x;
                cout<<"It's price 350 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==350)
               cout<<"Shrimp Scampi Order Confirm\nPrice: 350"<<endl;}

cout<<"It takes to delivary within 30 minutes"<<endl;
        }


          else if(p==4)
    {
       a.set_hotel();
       a.get_hotel();

            int h;
            cin>>h;
            if(h==1){
                    int x;
                cout<<"It's price 250 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==250)
                cout<<"Chicken Parmesan Order Confirm\nPrice: 250"<<endl;}

            else if(h==2){
                    int x;
                cout<<"It's price 230 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==230)
               cout<<"Beef Tacos Order Confirm\nPrice: 230"<<endl;}
            else if(h==3)
            {
                int x;
                cout<<"It's price 280 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==280)

                cout<<"Sushi Rol Order Confirm\nPrice: 280"<<endl;}

            else if(h==4){
                    int x;
                cout<<"It's price 400 tk only.\nPlease payment to confirmV";
                cin>>x;
                if(x==400)
                cout<<"Lobster Bisque Order Confirm\nPrice: 400"<<endl;}

            else if(h==5){
                    int x;
                cout<<"It's price 150 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==150)
               cout<<"BBQ Ribs Order Confirm\nPrice: 150"<<endl;}
cout<<"It takes to delivary within 30 minutes"<<endl;
        }

    else if(p==5)
    {
       a.set_naz();
       a.get_naz();

            int h;
            cin>>h;
            if(h==1){
                    int x;
                cout<<"It's price 250 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==250)
                cout<<"Chicken Satay Order Confirm\nPrice: 250"<<endl;}

            else if(h==2){
                    int x;
                cout<<"It's price 420 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==420)
               cout<<"Mushroom Risotto Order Confirm\nPrice: 420"<<endl;}

            else if(h==3){
                    int x;
                cout<<"It's price 330 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==330)
                cout<<"Pad Thai Order Confirm\nPrice: 330"<<endl;}

            else if(h==4){
                    int x;
                cout<<"It's price 240 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==240)
                cout<<"Lamb Kebabs Order Confirm\nPrice: 240"<<endl;}

            else if(h==5){
                    int x;
                cout<<"It's price 260 tk only.\nPlease payment to confirm\n";
                cin>>x;
                if(x==260)
               cout<<"Chocolate Lava Cake Order Confirm\nPrice: 260"<<endl;}

               cout<<"It takes to delivary within 30 minutes"<<endl;


        }



    }
}


int main()
{

    string name, phn;
    cout<<"You have to first log in\nPlease enter your name: ";
    getline(cin, name);
    cout<<"Verify your phn number"<<endl;
    getline(cin, phn);
    cout<<"Please select your gender:\n"<<"1.Male\n"<<"2.Female\n";
    int n; cin>>n;

    if(n==1)
    {
        male person1(name, phn);
        person1.welcome();
    }
    else
    {
        female person2(name,phn);
        person2.welcome();
    }
    call();


    return 0;

}
