#include <iostream>     // Include the input/output stream library
#include <stdlib.h>     // Include the standard library
#include <iomanip>      // Include the input/output manipulation library
#include <cmath>        // Include the math library

using namespace std;    // Use the standard namespace

// Class for the first question
class question1 {
public:
    void myMethod() {   // Define a method for the first question
        // Display a piggy bank illustration
        cout << "\t\t ||                // \\ \n";
        cout << "\t\t ||               //   \\ \n";
        cout << "\t\t ||              //- - -\\ \n";
        cout << "\t\t ||______       //       \\ \n";

        string name;        // Declare variables for user input
        double penny, nickel, dime, quarter;
        int weeks;
        double grand_total, year, average_week;

        // Display a welcome message
        cout << "\n \t\tWelcome to LA Piggy Bank Savings Co.\n";

        // Prompt for and get the user's full name
        cout << "\nPlease Enter your full name" << endl;
        cin.ignore();   // Ignore any previous input
        getline(cin, name);

        // Prompt for and get the counts of different coins
        cout << "Enter total number of pennies :" << endl;
        cin >> penny;
        cout << "Enter total number of nickels :" << endl;
        cin >> nickel;
        cout << "Enter total number of dimes :" << endl;
        cin >> dime;
        cout << "Enter total number of quarters :" << endl;
        cin >> quarter;

        // Prompt for and get the number of weeks the user has been saving
        cout << "How many weeks have you been saving?" << endl;
        cin >> weeks;

        // Calculate the grand total in dollars
        grand_total = (penny + nickel * 5 + dime * 10 + quarter * 25) / 100.0;

        // Display the coin counts
        cout << "\nPennies\tNickels\tDimes\tQuarters\n";
        cout << penny << "\t" << nickel << "\t" << dime << "\t" << quarter << "\n";

        cout << fixed << setprecision(2); // Set the output to display two decimal places

        // Display the grand total
        cout << "\nThe grand total in piggy Bank is: $" << grand_total << endl;

        // Calculate and display the average money saved per week
        average_week = grand_total / weeks;
        cout << "\nAverage money saved per week is: $" << average_week << endl;

        // Calculate and display the potential savings in a year
        year = average_week * 52;
        cout << "\n" << name << " at this rate you can save $" << year << " in one year" << endl;

        // Thank you message
        cout << "\n \t\tThank you for trusting LA Piggy Bank Savings Co. :)";
    }
};

// Class for the second question
class question2 {
public:
    void myMethod() {   // Define a method for the second question
        string name;    // Declare variables for student and score data
        double snum;
        double mk11, mk12, mk13, mk14, mk21, mk22, mk23, mk24, mk31, mk32, mk33, mk34, mk41, mk42, mk43, mk44;
        double q11, q12, q21, q22, q31, q32, q41, q42;
        double totalmk1, totalmk2, totalmk3, totalmk4, totalq1, totalq2, totalq3, totalq4, totalc1, totalc2, totalc3, totalc4;
        double percentagemk1, percentagemk2, percentagemk3, percentagemk4, percentageq1, percentageq2, percentageq3, percentageq4;

        // Prompt for and get the student's name and number
        cout << "What is the student's name?" << endl;
        cin >> name;
        cout << "What is the student's number?" << endl;
        cin >> snum;

        // Prompt for and get test and quiz scores for the first subject
        cout << "Enter the first test mark for your first subject:" << endl;
        cin >> mk11;
        cout << "Enter the second test mark for your first subject:" << endl;
        cin >> mk12;
        cout << "Enter the third test mark for your first subject:" << endl;
        cin >> mk13;
        cout << "Enter the fourth test mark for your first subject:" << endl;
        cin >> mk14;
                // first subject:
        cout << "Enter the first quiz mark of your first subject:" << endl;
        cin >> q11;
        cout << "Enter the second quiz mark of your first subject:" << endl;
        cin >> q12;

        cout << "Enter the first test mark for your second subject:" << endl;
        cin >> mk21;
        cout << "Enter the second test mark for your second subject:" << endl;
        cin >> mk22;
        cout << "Enter the third test mark for your second subject:" << endl;
        cin >> mk23;
        cout << "Enter the fourth test mark for your second subject:" << endl;
        cin >> mk24;
        cout << "Enter the first quiz mark of your second subject:" << endl;
        cin >> q21;
        cout << "Enter the second quiz mark of your second subject:" << endl;
        cin >> q22;

        cout << "Enter the first test mark for your third subject:" << endl;
        cin >> mk31;
        cout << "Enter the second test mark for your third subject:" << endl;
        cin >> mk32;
        cout << "Enter the third test mark for your third subject:" << endl;
        cin >> mk33;
        cout << "Enter the fourth test mark for your third subject:" << endl;
        cin >> mk34;
        cout << "Enter the first quiz mark of your third subject:" << endl;
        cin >> q31;
        cout << "Enter the second quiz mark of your third subject:" << endl;
        cin >> q32;

        cout << "Enter the first test mark for your fourth subject:" << endl;
        cin >> mk41;
        cout << "Enter the second test mark for your fourth subject:" << endl;
        cin >> mk42;
        cout << "Enter the third test mark for your fourth subject:" << endl;
        cin >> mk43;
        cout << "Enter the fourth test mark for your fourth subject:" << endl;
        cin >> mk44;
        cout << "Enter the first quiz mark of your fourth subject:" << endl;
        cin >> q41;
        cout << "Enter the second quiz mark of your fourth subject:" << endl;
        cin >> q42;

         // Calculate the subject average for the subjects
        totalmk1 = mk11 + mk12 + mk13 + mk14;
        percentagemk1 = (totalmk1 / 4) * 0.6;
        totalq1 = q11 + q12;
        percentageq1 = (totalq1 / 2) * 0.4;
        totalc1 = percentagemk1 + percentageq1;

        totalmk2 = mk21 + mk22 + mk23 + mk24;
        percentagemk2 = (totalmk2 / 4) * 0.6;
        totalq2 = q21 + q22;
        percentageq2 = (totalq2 / 2) * 0.4;
        totalc2 = percentagemk2 + percentageq2;

        totalmk3 = mk31 + mk32 + mk33 + mk34;
        percentagemk3 = (totalmk3 / 4) * 0.6;
        totalq3 = q31 + q32;
        percentageq3 = (totalq3 / 2) * 0.4;
        totalc3 = percentagemk3 + percentageq3;

        totalmk4 = mk41 + mk42 + mk43 + mk44;
        percentagemk4 = (totalmk4 / 4) * 0.6;
        totalq4 = q41 + q42;
        percentageq4 = (totalq4 / 2) * 0.4;
        totalc4 = percentagemk4 + percentageq4;

        // Calculate the total percentage for all subjects
        double total = (totalc1 + totalc2 + totalc3 + totalc4) / 4;

        // Display the student's report card
        cout << name << "'s report card:" << endl;
        cout << "Total percentage of marks in 4 Subjects combined: " << total << "%" << endl;
    }
};

int main() {
    int question;

    // Prompt the user to select a question
    cout << "Which question would you like to choose ?" << endl;
    cin >> question;

    if (question == 1) { // Create an instance of the appropriate question class and call its method
        question1 myObj;
        myObj.myMethod();
    }

    if (question == 2) {
        question2 myObj;
        myObj.myMethod();
    }

    return 0; // Return 0 to indicate successful execution
}
