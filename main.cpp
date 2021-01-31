#include <iostream>


using namespace std;

int main()
{
    //DECLARATION
    string name;
    double id;
    const double vat=0.12;
    string input;
    int quantity;
    int money;
    double balance;
    double totalCost;
    double printerprice;
    double phoneprice;
    double tableprice;

    double totalAmount;
    printerprice=200;
    phoneprice=400;
    tableprice=100;



    cout<<"WE ARE GLAD TO HAVE YOU TO MHAXX SUPER COMPANY"<<endl;
    cout<<endl;
    cout<<"Two things are done in the company"<<endl;
    cout<<"1.purchasing an item"<<endl;
    cout<<"2.Make an enquiries"<<endl;
    cout<<endl;
    cout<<"What is your name"<<endl;
    getline(cin,name);
    cout<<endl;

    cout<<"What is your unique ID"<<endl;
    cin>>id;
      cout<<"Item we sell"<<endl;
    cout<<"1.Printer = GHC200"<<endl;
    cout<<"2.Phone = GHC400"<<endl;
    cout<<"3.Table = GHC100"<<endl;

    cout<<"What do you want to buy"<<endl;
    cin>>input;
    cout<<"How many do you want to buy"<<endl;
    cin>>quantity;
    cout<<"How much do you have in your wallet"<<endl;
    cin>>money;


     if((money<(printerprice*quantity+vat)) || (money<(phoneprice*quantity+vat)) || (money<(tableprice*quantity+vat))){
        cout<<"sorry! your money can't afford the "<<input<<endl;
     }


    else if (input=="Printer" || input=="printer" || input=="PRINTER"){
        totalCost=(printerprice*quantity);
        cout<<"The total cost of the "<<input<<" is GHC"<<totalCost<<endl;
        totalAmount=(printerprice*quantity+vat);
        cout<<"Total amount with VAT is GHC"<<totalAmount<<endl;
        balance=(money-totalAmount);
        cout<<"Your balance is GHC"<<balance<<endl;
        cout<<endl;
        cout<<"..........RECIEPT..........."<<endl;
        cout<<"The name of the customer is"<<name<<endl;
        cout<<"The unique ID is "<<id<<endl;
        cout<<"Item purchased is "<<input<<endl;
        cout<<"The VAT is 12%"<<endl;
        cout<<"The total cost is "<<totalCost<<endl;
        cout<<"The total Amount paid is "<<totalAmount<<endl;
        cout<<"Your balance is "<<balance<<endl;
    }

else if(input=="Phone" || input=="phone" || input=="PHONE"){
        totalCost=(phoneprice*quantity);
        cout<<"The total cost of the "<<input<<" is GHC"<<totalCost<<endl;
        totalAmount=(phoneprice*quantity+vat);
        cout<<"Total amount with VAT is GHC"<<totalAmount<<endl;
        balance=(money-totalAmount);
        cout<<"Your balance is GHC"<<balance<<endl;
        cout<<endl;
        cout<<"..........RECIEPT..........."<<endl;
        cout<<"The name of the customer is "<<name<<endl;
        cout<<"The unique ID is "<<id<<endl;
        cout<<"Item purchased is "<<input<<endl;
        cout<<"The VAT is 12%"<<endl;
        cout<<"The total cost is "<<totalCost<<endl;
        cout<<"The total Amount paid is "<<totalAmount<<endl;
        cout<<"Your balance is "<<balance<<endl;


    }
    else if(input=="table" || input=="Table" || input=="TABLE"){
        totalCost=(tableprice*quantity);
        cout<<"The total cost of the "<<input<<" is GHC"<<totalCost<<endl;
        totalAmount=(tableprice*quantity+vat);
        cout<<"Total amount with VAT is GHC"<<totalAmount<<endl;
        balance=(money-totalAmount);
        cout<<"Your balance is GHC"<<balance<<endl;
        cout<<endl;
        cout<<"..........RECIEPT..........."<<endl;
        cout<<"The name of the customer is "<<name<<endl;
        cout<<"The unique ID is "<<id<<endl;
        cout<<"Item purchased is "<<input<<endl;
        cout<<"The VAT is 12%"<<endl;
        cout<<"The total cost is "<<totalCost<<endl;
        cout<<"The total Amount paid is "<<totalAmount<<endl;
        cout<<"Your balance is "<<balance<<endl;
    }

    return 0;
}

