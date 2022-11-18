#include<iostream>
using namespace std;
int main(){
    int order,no_deals;
    cout<<" ----------------------------------------------------\n";
    cout<<"|___________Welcome to Gurpreet's Restaurant__________|\n";
    cout<<" ----------------------------------------------------\n";
    cout<<endl;
    cout<<"|---------------Our Menu--------------|"<<endl;
    cout<<"(1)    Mutter Paneer                 100rs"<<endl;
    cout<<"(2)    Dal Fry                       120rs"<<endl;
    cout<<"(3)    Saag                          150rs"<<endl;
    cout<<"(4)    Shahi Paneer                  300rs"<<endl;
    cout<<"(5)    Butter Naan                   60rs"<<endl;
    cout<<"(6)    Missi Roti                    20rs"<<endl;
    cout<<endl;
    cout<<"PLease Select the order number\n";
    cin>>order;
    cout<<"Please enteer the number of deals\n";
    cin>>no_deals;
    cout<<endl;
    switch(order){
        case 1:
        cout<<"Order             :  Mutter Paneer."<<endl;
        cout<<"Number of deals   :  "<<no_deals<<endl;
        cout<<"Price of each deal:  100rs"<<endl;
        cout<<"total Price       :  "<<100*no_deals<<"rs "<<"only/-"<<endl;
        cout<<endl;
        cout<<" -------------------------------------\n";
        cout<<" ----------Thanks for Coming----------"<<endl;
        cout<<" -------------------------------------\n";
        break;
        case 2:
        cout<<"Order             :  Dal Fry."<<endl;
        cout<<"Number of deals   :  "<<no_deals<<endl;
        cout<<"Price of each deal:  120rs"<<endl;
        cout<<"total Price       :  "<<120*no_deals<<"rs "<<"only/-"<<endl;
        cout<<endl;
        cout<<" -------------------------------------\n";
        cout<<" ----------Thanks for Coming----------"<<endl;
        cout<<" -------------------------------------\n";
        break;
        case 3:
        cout<<"Order             :  Saag."<<endl;
        cout<<"Number of deals   :  "<<no_deals<<endl;
        cout<<"Price of each deal:  150rs"<<endl;
        cout<<"total Price       :  "<<150*no_deals<<"rs "<<"only/-"<<endl;
        cout<<endl;
        
        cout<<" -------------------------------------\n";
        cout<<" ----------Thanks for Coming----------"<<endl;
        cout<<" -------------------------------------\n";
        break;
        case 4:
        cout<<"Order             :  Shahi Paneer."<<endl;
        cout<<"Number of deals   :  "<<no_deals<<endl;
        cout<<"Price of each deal:  300rs"<<endl;
        cout<<"total Price       :  "<<300*no_deals<<"rs "<<"only/-"<<endl;
        cout<<endl;
        cout<<" -------------------------------------\n";
        cout<<" ----------Thanks for Coming----------"<<endl;
        cout<<" -------------------------------------\n";
        break;
        case 5:
        cout<<"Order             :  Butter Naan."<<endl;
        cout<<"Number of deals   :  "<<no_deals<<endl;
        cout<<"Price of each deal:  60rs"<<endl;
        cout<<"total Price       :  "<<60*no_deals<<"rs "<<"only/-"<<endl;
        cout<<endl;
        cout<<" -------------------------------------\n";
        cout<<" ----------Thanks for Coming----------"<<endl;
        cout<<" -------------------------------------\n";
        break;
        case 6:
        cout<<"Order             :  Missi Roti."<<endl;
        cout<<"Number of deals   :  "<<no_deals<<endl;
        cout<<"Price of each deal:  20rs"<<endl;
        cout<<"total Price       :  "<<20*no_deals<<"rs "<<"only/-"<<endl;
        cout<<endl;
        cout<<" -------------------------------------\n";
        cout<<" ----------Thanks for Coming----------"<<endl;
        cout<<" -------------------------------------\n";
        break;
    }
    return 0;
}