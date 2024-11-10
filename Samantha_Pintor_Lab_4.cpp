//Samantha Pintor 
//Lab 4 
//11-10-24

#include <iostream>
#include <string>

using namespace std;
   
int main ()
{
    //naming variables 
    string fruit; 
    int sugar;
    int continuerunning = 1; //Starts the loop with YES (1)

   //while loop option 1 - YES
    while (continuerunning == 1)
    {
        //prompting the user
        cout << "Enter the name of a fruit." << endl;
        cin >> fruit;  //user inputs fruit name
        cout << "Enter the number of grams of sugar in one cup of that fruit." << endl;
        cin >> sugar; //user inputs grams of sugar
   
       //processing sugar content 
       if (sugar < 10)
           cout << fruit << " LOW SUGAR FRUIT" << endl; //statement if the fruit is low sugar fruit (less than 10 grams)
       if (sugar <= 14 && sugar >= 10)
           cout << fruit << " MEDIUM SUGAR FRUIT" << endl; //statement if the fruit is medium sugar fruit (greater than or equal to 10 grams)
       if (sugar > 14)
           cout << fruit << " HIGH SUGAR FRUIT" << endl; //statement if the fruit is a high sugar fruit (greater than 14)
 
   //asking the user if the program should continue
    cout << "Would you like to continue using the program? Type 1 for YES and 2 for NO" << endl;
    cin >> continuerunning;
   
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
Enter the name of a fruit. 
grape
Enter the number of grams of sugar in one cup of that fruit.
9
grape LOW SUGAR FRUIT 
Would you like to continue using the program? Type 1 for YES and 2 for NO
2
*/
