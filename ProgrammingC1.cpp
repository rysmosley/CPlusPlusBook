// Programming Challenges for Chapter 1
// Rebecca Mosley
// August 21, 2019

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string border = "*******************************************************";
    int problemNo = 0;

    cout << endl << border << endl;
    cout << "C++ Early Objects" << endl;
    cout << "by Gaddis, Walters, and Muganda" << endl;
    cout << "----------------------------------" << endl;
    cout << "Programming Challenges: Chapter 1 " << endl;
    cout << "Completed by: RYS Mosley" << endl;
    cout << border << endl << endl;

// 1. Candy Bar Sales
    problemNo++;
    cout << endl << border << endl;
    cout << "Problem number: " << problemNo << endl;
    cout << border << endl;

    int candyBarsSold = 0;
    double amtEarnedPerBar = 0;
    double totalEarned = 0;

    // Number of bars sold
    cout << "Please enter how many candy bars were sold: ";
    cin >> candyBarsSold;

    // Dollar amount earned per candy bar
    cout << "Please enter the dollar amount earned per candy bar sold: $";
    cin >> amtEarnedPerBar;

    // Calculate total amount earned
    totalEarned = candyBarsSold * amtEarnedPerBar;
    cout << "The organization earned a total of $" << totalEarned << endl;


// 2. Baseball Costs
    problemNo++;
    cout << endl << border << endl;
    cout << "Problem number: " << problemNo << endl;
    cout << border << endl;

    int baseballsPurchased = 0;
    double costPerBaseball = 0;
    double totalSpent = 0;

    // Number of baseballs purchased
    cout << "Please enter how many baseballs were purchased: ";
    cin >> baseballsPurchased;

    // Cost per ball
    cout << "Please enter the cost per baseball: $";
    cin >> costPerBaseball;

    // Calculate total amount spent
    totalSpent = baseballsPurchased * costPerBaseball;
    cout << "The organization spent $" << totalSpent << " to purchase new baseballs." << endl;


// 3. Flower Garden
    problemNo++;
    cout << endl << border << endl;
    cout << "Problem number: " << problemNo << endl;
    cout << border << endl;

    double soil, seeds,  fence,  totalCosts;
    soil = seeds = fence = totalCosts = 0;

    // Enter costs for soil, seed, fence
    cout << "Please enter the cost of the soil: $";
    cin >> soil;
    cout << "Please enter the cost of the seeds: $";
    cin >> seeds;
    cout << "Please enter the cost of the fence: $";
    cin >> fence;

    // Calculate and display the costs
    totalCosts = soil + seeds + fence;
    cout << "The total costs are: $" << totalCosts << endl;

return 0;
}
