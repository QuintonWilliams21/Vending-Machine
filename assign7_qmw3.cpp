//File Name: assign7_qmw3.cpp
//Author: (Quinton Williams)
//Date:12/5/17
//Assignment Number: 7
//CS 1428.007 Fall 2017
//Instructor: Jill Seaman
//
// Program simulates the process of a vending machine

#include<iostream>
#include<string>

using namespace std;


//creating machine structure
struct drinks{
    string name;
    double cost;
    int units;
};
//function to get drink and subtract from the amount if purchased
void getDrink(int y, drinks x[]){

y = y-1;
if(x[y].units < 1){
    cout << "ERROR: SOLD OUT! Please Choose Another Option." << endl;
}
else {
    cout << "The cost is: $" << x[y].cost << "\n" << endl;
    x[y].units--;

}
}
//function to calculate amount of money machine earns
float calcAmount(drinks x[]){

float amount = 0;
for (int i = 0;i<5;i++){

    amount = amount + (x[i].cost * (6 - x[i].units));
} return amount;

}
//function with given data and giving 6 items in each drink inventory
void givenInfo(drinks x[]){

x[0].name = "Coke (Can)";
x[0].cost = 0.75;
x[1].name = "Coke (bottle)";
x[1].cost = 1.25;
x[2].name = "Mountain Dew (can)";
x[2].cost = 0.75;
x[3].name = "Water";
x[3].cost = 1.25;
x[4].name = "Full Throttle";
x[4].cost = 2.00;

for(int i = 0;i < 5; i++){

    x[i].units = 6;


}

}

int main(){

drinks ArrayofDrinks[5];       //array to store drink info

givenInfo(&ArrayofDrinks[0]);        //function call to store info into drink options

int choice = 0;            // variable for picking drink

do{
cout << "1. Coke (Can)" << endl;
cout << "2. Coke(Bottle)" << endl;
cout << "3. Mountain Dew (can)" << endl;
cout << "4. Water" << endl;
cout << "5. Full Throttle" << endl;
cout << "6. Quit \n" << endl;
cout << "Enter Your Choice" << endl;

cin >> choice;

if(choice > 0 && choice < 6){

    getDrink(choice, & ArrayofDrinks[0]);



}
else if (choice == 6){

    cout << "Amount Earned: $" << calcAmount(&ArrayofDrinks[0]);
}
else{

    cout << "Invalid Choice" << endl;
}}
while(choice != 6);

return 0;
}


