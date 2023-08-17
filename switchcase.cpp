#include<iostream>
using namespace std;

int main(){
    int month;
    cout<<"enter the month number";
    cin>>month;
    
    switch(month)
    {
     case 1:
     case 3:
     case 5:
     case 7:  
     case 8:
     case 10:
     case 12:
            cout<<"this month has 31 days\n";
            break;
     case 4:
     case 6:
     case 9:
     case 11:
            cout<<"this month has 30 days";
            break;
    case 2:
            cout<<"has 28 days";
            break;
    default:
            cout<<"invalid month";
    }

    return 0;
}