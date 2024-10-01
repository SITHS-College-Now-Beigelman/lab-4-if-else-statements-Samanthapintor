[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/QKbsYiZY)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=16286828&assignment_repo_type=AssignmentRepo)
//Samantha Pintor 
//Lab 4 
//10-1-24

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
   
int main ()
{
    //naming variables 
    string fruit; 
    int sugar;
    int continuerunning; 

    //prompting the user
    cout << "Enter the name of a fruit." << endl;     //prompting user to enter fruit name
    cin >> fruit;   //user inputs fruit name
    cout << "Enter the number of grams of sugar in one cup of that fruit." << endl;     //prompting user to enter the number of grams of sugar that one cup of tge fruit contains
    cin >> sugar;   //user inputs grams of suagr 

    //determining if the fruit is low, medium or high sugar fruit
    if (sugar < 10)
        cout << fruit << " LOW SUGAR FRUIT" << endl; //statement if the fruit is low sugar fruit (less than 10 grams)
    if (sugar <= 14 && sugar >=10)
        cout << fruit << " MEDIUM SUGAR FRUIT" << endl; //statement if the fruit is medium sugar fruit (greater than or equal to 10 grams)
    if (sugar > 14)
        cout << fruit << " HIGH SUGAR FRUIT" << endl; //statement if the fruit is a high sugar fruit (greater than 14)
   
   //asking the user if the program should continue
    cout << "Would you like to continue using the program? Type 1 for YES and 2 for NO" << endl;
    cin >> continuerunning;

   //while loop option 1 - YES
    while (continuerunning == 1)
    {
        cout << continuerunning << "Enter the name of a fruit.";
        cin >> fruit;  
        cout << "Enter the number of grams of sugar in one cup of that fruit.";
        cin >> sugar;

    if (sugar < 10)
        cout << fruit << " LOW SUGAR FRUIT" << endl; //statement if the fruit is low sugar fruit (less than 10 grams)
    if (sugar <= 14 && sugar >= 10)
        cout << fruit << " MEDIUM SUGAR FRUIT" << endl; //statement if the fruit is medium sugar fruit (greater than or equal to 10 grams)
    if (sugar > 14)
        cout << fruit << " HIGH SUGAR FRUIT" << endl; //statement if the fruit is a high sugar fruit (greater than 14)
        cin >> continuerunning; //allows the user to end
    }   
        

    return 0; 
}
/*
  
Enter the name of a fruit.
apple
Enter the number of grams of sugar in one cup of that fruit.
12
apple MEDIUM SUGAR FRUIT
Would you like to continue using the program? Type 1 for YES and 2 for NO
1
1Enter the name of a fruit.bannana
Enter the number of grams of sugar in one cup of that fruit.12
bannana MEDIUM SUGAR FRUIT

1     
1Enter the name of a fruit.basidbaoisd
Enter the number of grams of sugar in one cup of that fruit.12
basidbaoisd MEDIUM SUGAR FRUIT
2

*/
