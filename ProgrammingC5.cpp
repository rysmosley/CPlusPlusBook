// Programming Challenges for Chapter 5 in C++ book
// Rebecca Mosley
// December 31, 2018

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()
{
	string border = "*******************************************************";
	int problemNo = 0;

	cout << endl << border << endl;
	cout << "C++ Early Objects" << endl;
	cout << "by Gaddis, Walters, and Muganda" << endl;
	cout << "----------------------------------" << endl;
	cout << "Programming Challenges: Chapter 5 " << endl;
	cout << "Completed by: RYS Mosley" << endl;
	cout << border << endl << endl;

// 1. Characters for the ASCII Codes
/* Write a program that uses a loop to display the characters for each
ASCII code 32 through 127. Display 16 characters on each line with one 
space between characters.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	char ascii;

	cout << "ASCII characters displayed below: " << endl;
	for (int count = 32; count <=48; count++)
		cout << (ascii = count) << " ";
	cout << endl; 
	for (int count = 49; count <= 65; count++)
		cout << (ascii = count) << " ";
	cout << endl; 
	for (int count = 66; count <= 82; count++)
		cout << (ascii = count) << " ";
	cout << endl; 
	for (int count = 83; count <= 99; count++)
		cout << (ascii = count) << " ";
	cout << endl; 
	for (int count = 100; count <= 116; count++)
		cout << (ascii = count) << " ";
	cout << endl; 
	for (int count = 117; count <= 127; count++)
		cout << (ascii = count) << " ";
	cout << endl; 


// 2. Sum of Numbers
/* Write a program that asks the user for a positive integer value and
that uses a loop to validate the input. The program should then use a 
second loop to compute the sum of all the integers from 1 up to the 
number entered. For example, if the user enters 50, the loop will find
the sum of 1, 2, 3, 4,...50.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int value;
	value = 0;
	int total;
	total = 0;

	// Get user input
	cout << "Input a number n and the program will sum all numbers from 1 to n: ";
	cin >> value;

	// Calculate value
	if (value >= 0)
		{ 
		for (int count = 0; count <= value; count++)
			total += count;				
		// Print total value
		cout << "The total is: " << total << endl;
		}
	else
		cout << "Please enter a positive integer." << endl;


// 3. Distance Traveled
/* The distance a vehicle travels can be calculated as follows:

	distance = speed * time

For example, if a train travels 40 miles per hour for 3 hours, the 
distance traveled is 120 miles. 

Write a program that asks the user for the speed of a vehicle (in 
miles per hour) and how many hours it has traveled. It should then 
use a loop to display the total distance traveled at the end of each
hour of that time period. Here is an example of the output:

	What is the speed of the vehicle in mph? 40
	How many hours has it traveled? 3
	Hour	Miles Traveled
	----------------------
	1	40
	2	80
	3	120
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double speed, totalDistance, hours;
	speed = totalDistance = hours = 0.0;
	
	// Get user input
	cout << "Enter the speed of the vehicle: ";
	cin >> speed;
	cout << "Enter the number of hours traveled: ";
	cin >> hours;

	// Display the results
	cout << setw(10) << fixed << left << endl;
	cout << "Hour\t" << "Miles Traveled" << endl;
	cout << "---------------------------------" << endl;
	for (int count = 1; count <= hours; count++)
	{
		cout << setw(10) << fixed << left;
		totalDistance = count * speed;
		cout << count << "\t" << setprecision(1) << totalDistance << endl;	
	}	


// 4. Celsius to Fahrenheit Table
/* In one of the Chapter 3 Programming Challenges you were asked to write a program
that converts a Celsius temperature to Fahrenheit. Modify that program so it uses a
loop to display a table of the Celsius temperatures from 0 to 30 and their Fahrenheit
equivalents.

	F = 9/5C + 32
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double celsius, fahrenheit;

	// Display table
	cout << setw(8) << left << fixed << setprecision(1);
	cout << "Celsius\t" << " to Fahrenheit" << endl;
	cout << "------------------------------" << endl;
	for (int count = 0; count <= 30; count++)
	{
		celsius = count;
		fahrenheit = (9.0/5.0) * celsius + 32;
		cout << setw(8) << left << fixed << setprecision(1);
		cout << celsius << "\t" << fahrenheit << endl; 
	}


// 5. Speed Conversion Chart
/* Write a program that displays a table of speeds in kilometers per hour with their
values converted to miles per hour. The table should display the speeds from
40 kilometers per hour through 120 kilometers per hour, in increments of 10 kilometers 
per hour. (In other words, it should display 40 kph, 50 kph, 60 kph, and so forth, up
through 120 kph.)

	MPH = KPH * 0.6214
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double mph, kph;
	mph = kph = 0;

	// Display table
	cout << setw(10) << left << fixed;
	cout << "KPH\t" << " to MPH" << endl;
	cout << "-----------------------------" << endl;
	for (int count = 1; count <= 12; count++)
	{
		kph = count * 10;
		mph = kph * 0.6214;
		cout << setw(10) << left << fixed;
		cout << setprecision(0) << kph << "\t" << setprecision(2) << mph << endl; 
	}


// 6. Ocean Levels
/* Assuming the level of the Earth's oceans continues rising at about 3.1 millimeters per
year, write a program that displays a table showing the total number of millimeters the
oceans will have risen each year for the next 25 years.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double const MM = 3.1;
	double totalRise;
	int years;

	// Display table
	cout << setw(10) << left << fixed;
	cout << "Year" << "Total Ocean Level Rise (in mm)" << endl;
	cout << "--------------------------------------" << endl;
	for (int count = 1; count <= 25; count++)
	{
		years = count;
		totalRise = years * MM;
		cout << setw(10) << left << fixed;
		cout << setprecision(0) << years << setprecision(2) << totalRise << endl;
	}


// 7. Circle Areas
/* The formula to compute the area of a circl is:

	area = PI * radius^2

So if a circle's radius doubles (i.e., is multiplied by 2), the circle's area wil be four
times as large as before. Write a program that creates a table showing the radius and area
for a circle whose radius begins with 1 and continues doubling until it is 8. Use 3.14 for PI.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double area, radius;
	const double PI = 3.14;

	// Display table heading
	cout << setw(10) << left;
	cout << "Radius" << "Area" << endl;
	cout << "----------------" << endl;

	// Display table contents
	for (int count = 1; count <= 8; count++)
	{
		radius = count;
		area = PI * radius * radius;
		cout << setw(10) << left;
		cout << setprecision(0) << radius << setprecision(2) << fixed << area << endl;
	}


// 8. Pennies for Pay
/* Write a program that calculates how much a person earns in a month if the salary is 
one penny the first day, two pennies the second day, four pennies the third day, and so 
on with the daily pay doubling each day the employee works. The program should ask the 
user for the number of days the employee worked during the month, validate that it is
between 1 and 31, and then display a table showing how much the salary was for each 
day worked, as well as the total pay earned for the month. The output should be displayed
in dollars with two decimal points, not in pennies.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double daysWorked, daySalary, totalPay;

	// Get user input
	cout << "How many days did the employee work for the month?: ";
	cin >> daysWorked;
	if ((daysWorked >= 1) && (daysWorked <= 31))
	{
		// Display table header
		cout << setw(10) << fixed << left;
		cout << "Day\t" << "Day's Salary\t" << "Total Pay" << endl;
		cout << "---------------------------------------------" << endl;

		// Display table contents
		for (int count = 1; count <= daysWorked; count++)
		{

			daySalary = 0.01 * pow(2.0, (count - 1));
			totalPay += daySalary;
			cout << setw(10) << fixed << left;
			cout << setprecision(0) << count << "\t" << setprecision(2) << daySalary << "\t\t" << totalPay << endl;
		}			
	}	
	else
		cout << "Please enter a number between 1 and 31." << endl;


// 9. Weight Loss
/* If moderately active persons cut their calorie intake by 500 calories a day, they can
typically lose about 4 pounds a month. Write a program that has the users enter their 
starting weight and then creates and displays a table showing what their expected
weight will be at the end of each month for the next 6 months if they stay on this diet.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double startingWeight, expectedWeight;
	startingWeight = expectedWeight = 0;	

	// Get user input
	cout << "Please enter your starting weight: ";
	cin >> startingWeight;

	// Display table headers
	cout << setw(10) << fixed << left;
	cout << "Month\t\t" << "Expected Weight at End of Month" << endl;
	cout << "-------------------------------------------------------" << endl;

	// Calculate weights and display results in table
	for (int count = 1; count <= 6; count++)
	{
		expectedWeight = startingWeight - 4;
		startingWeight = expectedWeight;
		cout << count << "\t\t" << setprecision(1) << expectedWeight << endl;	
	}


// 10. Calories Burned
/* Running on a particular treadmill, you burn 3.9 calories per minute. Write a program
that uses a loop to display the number of calories burned after 5, 10, 15, 20, 25, and
30 minutes.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	const double CPM = 3.9;
	double numCalBurned = 0;
	

	// Display table header
	cout << setw(10) << fixed << left;
	cout << "Minute\t\t" << "Number of Calories Burned" << endl;
	cout << "===============================================" << endl;

	// Calculate calories and populate table
	for (int minute = 5; minute <= 30; minute+=5)
	{
		numCalBurned = (minute * CPM) + numCalBurned;
		cout << setw(10) << fixed << setprecision(1) << left;
		cout << minute << "\t\t" << numCalBurned << endl;	
	}


// 11. Membership Fees Increase
/* A country club, which currently charges $3,000 per year for membership, has announced
it will increase its membership fee by 3 percent each year for the next five years. Write
a program that uses a loop to display the projected rates for the next five years.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	const double RATE = 0.03;
	double fee = 3000;

	// Display table header
	cout << setw(10) << fixed << left;
	cout << "Year\t\t" << "Fee" << endl;
	cout << "===============================" << endl;

	// Calculate fees and populate table
	for (int year = 1; year <= 5; year++)
	{
		fee = fee + (fee * RATE);
		cout << year << "\t\t" << setprecision(2) << "$" << fee << endl;	
	}


// 12. Random Number Guessing Game
/* Write a program that generates a random number between 1 and 100 and asks the user to 
guess what the number is. If the user's guess is higher than the random number, the 
program should display "Too high. Try again." If the user's guess is lower than the random
number, the program should display "Too low. Try again." The program should use a loop that 
repeats until the user correctly guesses the random number. Then the program should display
"Congratulations. You figured out my number."
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	unsigned seed;
	const int MIN_VALUE = 1;
	const int MAX_VALUE = 100;
	int number, guess;
	bool correct = false;

	// Use the time function to get a "seed" value for srand
	seed = time(0);
	srand(seed);
	number = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

	// Prompt user to guess a number
	cout << "Guess a number: ";
	cin >> guess;

	// Decide and display whether the number is higher, lower, or equal to the guess
	do
	{
		if (guess > number)
		{
			cout << "Too high. Try again: ";
			cin >> guess;
		}
		else if (guess < number)
		{
			cout << "Too low. Try again: ";
			cin >> guess;
		}
		else if (guess == number)
		{	
			cout << "Congratulations! You figured out my number." << endl;
			correct = true;
		}	
	}
	while (correct == false);


// 13. Random Number Guessing Game Enhancement 
/* Enhance the program that you wrote for Programming Challenge 12 so it keeps
a count of the number of guesses the user makes. When the user correctly guesses the 
random number, the program should display the number of guesses along with the 
message of congratulations.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	//unsigned seed;
	const int MIN_VALUEA = 1;
	const int MAX_VALUEA = 100;
	int numberA, guessA, countA;
	bool correctA = false;
	countA = 1;

	// Use the time function to get a "seed" value for srand
	seed = time(0);
	srand(seed);
	numberA = (rand() % (MAX_VALUEA - MIN_VALUEA + 1)) + MIN_VALUEA;

	// Prompt user to guess a number
	cout << "Guess a number: ";
	cin >> guessA;

	// Decide and display whether the number is higher, lower, or equal to the guess
	do
	{
		if (guessA > numberA)
		{
			cout << "Too high. Try again: ";
			cin >> guessA;
		}
		else if (guessA < numberA)
		{
			cout << "Too low. Try again: ";
			cin >> guessA;
		}
		else if (guessA == numberA)
		{	
			cout << "Congratulations! You figured out my number in "
				<< countA << " guesses." << endl;
			correctA = true;
		}	
	countA++;
	}
	while (correctA == false);


// 14. The Greatest and Least of These
/* Write a program with a loop that lets the user enter a series of integers,
followed by -99 to signal the end of the series. After all the numbers have
been entered, the program should display the largest and smallest numbers
entered.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int nums, countB, largest, smallest;
	countB = 0;

	// Pick out largest and smallest numbers
	do
	{
	// Prompt user to enter a series of values
	cout << "Please enter a series of integers and then enter -99 when done: ";
	cin >> nums;
		if (countB == 0)
		{
			largest = nums;
			smallest = nums;
			countB++;
		}
		if (nums != -99)
		{
			if (nums < smallest)
				smallest = nums;
			else if (nums > largest)
				largest = nums;		
		}
	}
	while (nums != -99);
	
	cout << "The largest number is: " << largest << endl;
	cout << "The smallest number is: " << smallest << endl;


// 15. Student Line-Up
/* A teacher has asked all her students to line up single file according
to their first name. For example, in one class Amy will be at the front
of the line and Yolanda will be at the end. Write a program that prompts
the user to enter a number between 1 and 20 for the number of students
in the class and then loops to read in that many names. Once all the 
names have been read in, it reports which student would be at the front
of the line and which one would be at the end of the line. You may assume
that no two students have the same name.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int students;
	string name, first, last;

	// Prompt user to enter the number of students
	cout << "Enter the number of students in the class: ";
	cin >> students;

	for (int count = 1; count <= students; count++)
	{
		cout << "Enter the name of student " << count << ": ";
		cin >> name;

		if (count == 1)
		{
			first = name;
			last = name;
		}
		if (name < first)
			first = name;
		else if (name > last)
			last = name;
	}
	cout << "The first in line would be " << first << " and the last in line would be " << last << endl;


// 16. Rate of Inflation
/* The annual rate of inflation is the rate at which money loses its value. 
For example, if the annual rate of inflation is 3.0 percent, then in one year
it will cost $1,030 to buy the goods that could have been purchased for $1,000
today. Put another way, a year from now, $1,000 will only buy 1/1.03 * $1,000, 
or $970.87, worth of goods. Two years from now, $1,000 will only buy only 1/1.03
of $970.87. or $942.59 worth of goods. Write a program that allows the user to 
enter an annual rate of inflation between 1 percent and 10 percent, and which
then displays a table showing how much $1,000 today will be worth each year
for the next 10 years.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double inflation, valueA, year;
	valueA = 1000.00;
	year = 10;

	// Prompt user for an inflation rate
	cout << "Please enter an annual rate of inflation: ";
	cin >> inflation;
	//inflation = inflation * .01;

	// Display table header
	cout << setw(10) << left << fixed;
	cout << "Year" << "$1,000 Worth" << endl;
	cout << "==========================" << endl;

	// Calculate and populate the table
	for (int count = 1; count <= year; count++)
	{
		valueA = valueA - (valueA * inflation);
		cout << setprecision(0) << setw(10) << count << setprecision(2) << valueA << endl;
	}	


// 17. Population
/* Write a program that will predict the size of a population of organisms.
The program should ask the user for the starting number of organisms, their
average daily population increase (as a percentage of current population),
and the number of days they will multiply. A loop should display the size
of the population for each day.

	Input Validation: The program should not accept a number less than
	2 for the starting size of the population, a negative number for 
	average daily population increase, or a number less than 1 for the 
	number of days they will multiply.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int numDays;
	double popSize, dailyInc;

	// Get starting number of organisms, average daily population increase
	// and number of days they will multiply
	cout << "What is the starting number of organisms?: ";
	cin >> popSize;
	if (popSize < 2)
		{
		cout << "Please enter a number greater than or equal to 2: ";
		cin >> popSize;
		}
	cout << "What is the percentage of daily population increase?: ";
	cin >> dailyInc;
	if (dailyInc < 0)
		{
		cout << "Please enter a number greater than or equalt to 0: ";
		cin >> dailyInc;
		}
	dailyInc = dailyInc * .01;
	cout << "What are the number of days the population will multiply?: ";
	cin >> numDays;
	if (numDays < 1)
		{
		cout << "Please enter a number greater than or equal to 1." << endl;
		cin >> numDays;
		}

	// Display table header
	cout << setw(10) << left << "Day\t" << "Population Size" << endl;
	cout << "=========================================" << endl;	

	// Calculate and display the results
	for (int count = 1; count <= numDays; count++)
	{
		popSize = (popSize * dailyInc) + popSize;		
		cout << setw(10) << setprecision(0) << fixed << left << count << "\t" << popSize << endl;		
	}


// 18. Math Tutor Version 3
/* This program started in Chapter 3 and was modified in Chapter 4. Starting with the version described
in Chapter 4, modify the program again so that it displays a menu allowing the user to select an 
addition, subtraction, or multiplication problem. The final selection on the menu should let the user 
quit the program. After the user has finished the math problem, the program should display the menu again. 
This process must repeat until the user chooses to quit the program. If the user selects an item not on 
the menu, the program should print an error message and then display the menu again.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

        const int MIN_VALUEB = 10;
        const int MAX_VALUEB = 50;
        int number1, number2, answer, studentAnswer, menuSelect;
        number1 = number2 = answer = studentAnswer = menuSelect = 0;
        //unsigned seed;
        seed = time(0);
        srand(seed);
        number1 = rand() % (MAX_VALUEB - MIN_VALUEB + 1) + MIN_VALUEB;
        number2 = rand() % (MAX_VALUEB - MIN_VALUEB + 1) + MIN_VALUEB;


	// Menu
	cout << "Please select one of the following: " << endl;
	cout << "1. Addition " << endl;
	cout << "2. Subtraction " << endl;
	cout << "3. Multiplication " << endl;
	cout << "4. Quit " << endl;
	cout << "Enter your selection: ";
	cin >> menuSelect;
	if ((menuSelect < 1) || (menuSelect > 4))
	{
		cout << "Please enter a valid selection: ";
		cin >> menuSelect;
	}
	
	if (menuSelect == 1)
	{
        // Addition 
        answer = number1 + number2;

        // Display addition problem
        cout << " " << number1 << endl;
        cout << "+" << number2 << endl;
        cout << "---" << endl;
        cin >> studentAnswer;

	// Display student answer and correct answer
        cout << "Your answer was " << studentAnswer << endl;
        cout << "The correct answer is " << answer << endl;
	}

	if (menuSelect == 2)
	{
        // Subtraction 
        answer = number1 - number2;

        // Display subtraction problem
        cout << " " << number1 << endl;
        cout << "-" << number2 << endl;
        cout << "---" << endl;
        cin >> studentAnswer;

	// Display student answer and correct answer
        cout << "Your answer was " << studentAnswer << endl;
        cout << "The correct answer is " << answer << endl;
	}

	if (menuSelect == 3)
	{
        // Multiplication 
        answer = number1 * number2;

        // Display multiplication problem
        cout << " " << number1 << endl;
        cout << "*" << number2 << endl;
        cout << "---" << endl;
        cin >> studentAnswer;

	// Display student answer and correct answer
        cout << "Your answer was " << studentAnswer << endl;
        cout << "The correct answer is " << answer << endl;
	}

	if (menuSelect == 4)
		exit(0);


// 19. Hotel Suites Occupancy
/* Write a program that calculates the occupancy rate of the 120 suites (20 per floor)
located on the top six floors of a 15-story luxury hotel. These are floors 10 - 12 and
14 - 16 because, like many hotels, there is no 13th floor. Solve the problem by using a 
single loop that iterates once for each floor between 10 and 16 and, on each iteration, 
asks the user to input the number of suites occupied on that floor. Use a nested loop
to validate that the value entered is between 0 and 20. After all the iterations, the 
program should display how many suites the hotel has, how many of them are occupied, 
and what percentage of them are occupied. 
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int suites, suitesOcc, totalOcc; 
	suites = 120;
	suitesOcc = totalOcc = 0;
	double perc = 0;


	// Ask user how many suites are occupied within each floor
	for (int count = 10; count <= 16; count++)
	{
		if (count != 13)
		{
			cout << "How many suites are occupied on " << count << ": ";
			cin >> suitesOcc;
			if ((suitesOcc < 0) || (suitesOcc > 20))
			{
				cout << "Please make a valid entry.";
				cin >> suitesOcc;
			}
			totalOcc = totalOcc + suitesOcc;
		}
		else if (count == 13)
			cout << "No suites on the 13th floor." << endl;
	}

	// Display the number of suites the hotel has
	cout << "The number of suites in the hotel are " << suites << "." << endl;
	
	// Display the number of suites that are occupied
	cout << "The number of suites occupied is " << totalOcc << "." << endl;

	// Display the percentage of suites occupied
	perc = totalOcc / (suites * 1.0);
	cout << "The percentage of suites occupied is " << perc * 100 << "%." << endl;


// 20. Rectangle Display
/* Write a program that asks the user for two positive integers between 2 and 10 to use
for the length and width of a rectangle. If the numbers are different, the larger of the
two numbers should be used for the length and the smaller for the width. The program
should then display a rectangle of this size on the screen using the character 'X'. For 
example, if the user enters either 2 5 or 5 2, the program should display the following:

	XXXXX
	XXXXX
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int length, width, big, small;
	length = width = big = small = 0;
	char x = 'X';

	// Ask user to input length and width
	cout << "Please enter the length: ";
	cin >> length;
	cout << "Please enter the width: ";
	cin >> width;

	// Display the results
	if (length > width)
		{
		big = length;
		small = width;
		}
	else if (width > length)
		{
		big = width;
		small = width;
		}

	for (int row = 1; row <= small; row++)
		{
		for (int col = 1; col <= big; col++)
			{ cout << x; }
		cout << endl; 
		}


// 21. Diamond Display
/* Write a program that uses nested loops to display the diamond pattern shown below.

		+
	       +++
	      +++++
	     +++++++
	      +++++
	       +++
		+
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int rows, cols;
	rows = cols = 0;
	char s = 32;
	char p = '+';

	// Display the diamond
	for (int row = 1; row <= 7; row++)
		{
		if ((row == 1) || (row == 7))
		{
			for (int colp = 1; colp <= 6; colp++)  
			{
				cout << s;
				if (colp == 3)
				{
					cout << p;
				}
			}
		}
		if ((row == 2) || (row == 6))
		{
			for (int colp = 1; colp <= 6; colp++)
			{
				cout << s;
				if (colp == 2)
				{
					cout << p << p << p;
				}

			}
		}
		if ((row == 3) || (row == 5))
		{
			for (int colp = 1; colp <= 6; colp++)
			{
				cout << s;
				if (colp == 1)
				{
					cout << p << p << p << p << p;
				}		
			}

		}
		if (row == 4)
		{
			for (int colp = 1; colp <= 6; colp++)
			{
				cout << p << p << p << p << p << p << p;
				break;
			}

		}
		cout << endl;
		}


// 22. Triangle Display
/* Write a program that uses nested loops to display the triangle pattern shown below.

	+
	+++
	+++++
	+++++++
	+++++
	+++
	+	

*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int rowsA, colsA;
	rowsA = colsA = 0;
	char sA = 32;
	char pA = '+';

	// Display the diamond
	for (int row = 1; row <= 7; row++)
		{
		if ((row == 1) || (row == 7))
		{
			for (int colp = 1; colp <= 6; colp++)  
			{
				//cout << s;
				if (colp == 3)
				{
					cout << pA;
				}
			}
		}
		if ((row == 2) || (row == 6))
		{
			for (int colp = 1; colp <= 6; colp++)
			{
				//cout << s;
				if (colp == 2)
				{
					cout << pA << pA << pA;
				}

			}
		}
		if ((row == 3) || (row == 5))
		{
			for (int colp = 1; colp <= 6; colp++)
			{
				//cout << s;
				if (colp == 1)
				{
					cout << pA << pA << pA << pA << pA;
				}		
			}

		}
		if (row == 4)
		{
			for (int colp = 1; colp <= 6; colp++)
			{
				cout << pA << pA << pA << pA << pA << pA << pA;
				break;
			}

		}
		cout << endl;
		}


// 23. Arrowhead Display
/* Write a program that uses nexted loops to display the arrowhead pattern shown below.

	+
	+++
	+++++
++++++++++++++
	+++++
	+++
	+

*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int rowsB, colsB;
	rowsB = colsB = 0;
	char sB = 32;
	char pB = '+';

	// Display the diamond
	for (int row = 1; row <= 7; row++)
		{
		if ((row == 1) || (row == 7))
		{
			for (int colp = 1; colp <= 6; colp++)  
			{
				cout << sB << sB << sB << sB << sB << sB << sB;
				if (colp == 4)
				{
					cout << pB;
				}
			}
		}
		if ((row == 2) || (row == 6))
		{
			for (int colp = 1; colp <= 6; colp++)
			{
				cout << s << s << s << s << s << s << s;
				if (colp == 4)
				{
					cout << pB << pB << pB;
				}

			}
		}
		if ((row == 3) || (row == 5))
		{
			for (int colp = 1; colp <= 6; colp++)
			{
				cout << sB << sB << sB << sB << sB << sB << sB;
				if (colp == 4)
				{
					cout << pB << pB << pB << pB << pB;
				}		
			}

		}
		if (row == 4)
		{
			for (int colp = 1; colp <= 6; colp++)
			{
				cout << sB << sB << sB << sB << sB << sB << sB
					<< sB << sB << sB << sB << sB << sB << sB
					<< sB << sB << sB << sB << sB << sB << sB;
				cout << pB << pB << pB << pB << pB << pB << pB
					<< pB << pB << pB << pB << pB << pB << pB;
				break;
			}

		}
		cout << endl;
		}


// 24. Sales Bar Chart
/* Write a program that asks the user to enter today's sales rounded to the nearest $100
for each of three stores. The program should then produce a bar graph displaying each
store's sales. Create each bar in the graph by displaying a row of asterisks. Each 
asterisk should represent $100 of sales.

Here is an example of the program's output. 
	Enter today's sales for store 1: 1000[Enter]
	Enter today's sales for store 2: 1200[Enter]
	Enter today's sales for store 3: 900[Enter]

		DAILY SALES
	       (each * = $100)
	Store 1: **********
	Store 2: ************
	Store 3: *********
*/


	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int store1, store2, store3;

	// Get store sales
	cout << "Enter store sales for store 1: ";
		cin >> store1;
	cout << "Enter store sales for store 2: ";
		cin >> store2;
	cout << "Enter store sales for store 3: ";
		cin >> store3;

	// Display store 1 sales in asterisks
	cout << "Store 1: ";
	for (int a = 1; a <= (store1/100); a++)
	{
		cout << "*";
	}
	cout << endl;

	// Display store 2 sales in asterisks
	cout << "Store 2: ";
	for (int b = 1; b <= (store2/100); b++)
	{
		cout << "*";
	}
	cout << endl;

	// Display store 3 sales in asterisks
	cout << "Store 3: ";
	for (int c = 1; c <= (store3/100); c++)
	{
		cout << "*";
	}
	cout << endl;


// 25. Savings Account Balance
/* Write a program that calculates the balance of a savings account at the end of
a three-month period. It should ask the user for the starting balance and the annual 
interest rate. A loop should then iterate once for every month in the period, 
performing the following steps:

	A) Ask the user for the total amount deposited into the account during
	   that month and add it to the balance. Do not accept negative numbers.
	B) Ask the user for the total amount withdrawn from the account during
	   that month and subtract it from the balance. Do not accept negative
	   numbers or numbers greater than the balance after the deposits for
	   the month have been added in.
	C) Calculate the interest for that month. The monthly interest rate is 
	   the annual interest rate divided by 12. Multiply the monthly interest
	   rate by the average of that month's starting and ending balance to get
	   the interest amount for the month. The amount should be added to the
	   balance.

After the last iteration, the program should display a nicely formatted report that
includes the following information:
	* Starting balance at the beginning of the three-month period
	* Total deposits made during the three months
	* Total withdrawals made during the three months
	* Total interest posted to the account during the three months
	* Final balance
*/


	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double startBalance, balance, deposits, withdrawals, annualInterestRate, interest,
		monthlyInterestRate, endBalance, totalDeposits, totalWithdrawals, totalInterest;
	startBalance = balance = deposits = withdrawals = annualInterestRate = 
		monthlyInterestRate = endBalance = totalDeposits = totalWithdrawals 
		= totalInterest = interest = 0;
	int month = 3;

	// Ask user for starting balance and annual interest rate
	cout << "Please enter the starting balance: $";
	cin >> startBalance;
	cout << "Please enter the annual interest rate: ";
	cin >> annualInterestRate;

	for (int count = 1; count <= month; count++)
		{
		// A: Ask user for total amount deposited into account during that month
		// Input cannot be negative
		cout << "Please enter the amount deposited into the account: $";
		cin >> deposits;
		if (deposits < 0)
			{
			cout << "Please make a valid entry: $";
			cin >> deposits;
			}  	
		totalDeposits += deposits;

		// A: Add total deposits to balance
		balance = startBalance + deposits;

		// B: Ask user for total amount withdrawn from account during that month
		// Input cannot be negative
		cout << "Please enter the amount withdrawn from the account: $";
		cin >> withdrawals;
		if (withdrawals < 0)
			{
			cout << "Please make a valid entry: ";
			cin >> withdrawals;
			}
		totalWithdrawals += withdrawals;

		// B: Subtract total withdrawls from balance
		balance = balance - withdrawals;

		// C: Calculate interest for that month (annual interest rate / 12)
		// totalInterest = monthlyInterestRate * ((startBalance + balance) / 2) 
		// endBalance = endBalance + totalInterest
		monthlyInterestRate = annualInterestRate / 12.0;
		interest = monthlyInterestRate * ((startBalance + balance) / 2.0);
		endBalance = balance + interest;
		totalInterest += interest;
		}

	// Display report
	cout << setprecision(2) << fixed << showpoint;
	cout << "Starting balance: $" << startBalance << endl;
	cout << "Total deposits: $" << totalDeposits << endl;
	cout << "Total withdrawals: $" << totalWithdrawals << endl;
	cout << "Total interest: $" << totalInterest << endl;
	cout << "Final balance: $" << endBalance << endl;


// 26. Using Files - Total and Average Rainfall
/* Write a program that reads in from a file a starting month name, an ending month
name, and then the monthly rainfall for each month during that period. As it does
this, it should sum the rainfall amounts and then report the total rainfall and
average rainfall for the period. For example, the output might look like this:

	During the months of March-June, the total rainfall was 7.32 inches
	and the average monthly rainfall was 1.83 inches.

Data for the program can be found in the Rainfall.txt file located in the Chapter 5
programs folder on the book's companion website.

Hint: After reading in the month names, you will need to read in rain amounts until
the EOF is reached and count how many pieces of rain data you read in. 
*/


	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	ifstream inputFile;
	string monthA, month1A, month2A;
	double rainfall, totalA, valueB;

	// Open the input file
	inputFile.open("Rainfall.txt");

	if (inputFile)
	{	cout << "File opened successfully" << endl;

	for (int count = 1; count <= 2; count++)
	{
		// Read month from input file
		inputFile >> monthA;
		if (count == 1)
			month1A = monthA;
		else if (count == 2)
			month2A = monthA;
		cout << monthA << endl;
	}

	for (int num = 1; num <= 4; num++)
	{
		// Read rainfalls from input file
		inputFile >> rainfall;
		totalA += rainfall;
		cout << rainfall << endl;
	}

	}

	// Display the results
	cout << "During the months of " << month1A << " - " << month2A
		<< " the total rainfall was " << totalA
		<< " inches and the average monthly rainfall was " 
		<< (totalA / 4.0) << " inches." << endl;


// 27. Using Files - Population Bar Chart
/* Write a program that produces a bar chart showing the population growth of
Prairieville, a small town in the Midwest, at 20-year intervals during the
past 100 years. The program should read in the population figures (rounded
to the nearest 1,000 people) for 1910, 1930, 1950, 1970, 1990, and 2010
from a file. For each year it should display the date and a bar consisting of 
one asterisk for each 1,000 people. The data can be found in the People.txt
file located in the Chapter 5 programs folder on the book's companion website.

Here is an example of how the chart might begin:
	
	PRAIRIEVILLE POPULATION GROWTH
	(each * represents 1000 people)

	1910 **
	1930 ****
	1950 *****

*/


	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	ifstream inputFileA;
	int population, yearA, stars;
	year = 1910;

	inputFileA.open("People.txt");

	for (int num = 1; num <= 6; num++)
	{
		// Read population into text
		inputFileA >> population;
		cout << yearA << " ";
		stars = population / 1000;
		for (int count = 1; count <= stars; count++)
			cout << "*";	
		cout << endl;
		yearA += 20;
	}


// 28. Using Files - Student Line Up
/* Modify the Student Line Up program described in Programming Challenge 15 so
that it gets the names from a data file. Names should be read in until there is 
no more data to read. Data to test your program can be found in the LineUp.txt file 
located in the Chapter 5 programs folder on the book's companion website.
*/


	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	ifstream inputFileB;
	string studentsA;
	string nameA, firstA, lastA;

	// Open file 
	inputFileB.open("LineUp.txt");

	for (int count = 1; count <= 9; count++)
	{
		inputFileB >> nameA;

		if  (count == 1)
		{
			firstA = nameA;
			//cout << firstA << endl;
			lastA = nameA;
			//cout << lastA << endl;
		}
		if (nameA < firstA)
			firstA = nameA;
		else if (nameA > lastA)
			lastA = nameA;
	}
	cout << "The first in line would be " << firstA << " and the last in line would be " << lastA
		<< "." << endl;

	// Close the file
	inputFileB.close();


// 29. Using Files - Savings Account Balance Modification
/* Modify the Savings Account Balance program described in Programming Challenge 25
so that it writes the report to a file. After the program runs, print the file to hand
in to your instructor. 
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double startBalanceA, balanceA, depositsA, withdrawalsA, annualInterestRateA, interestA,
		monthlyInterestRateA, endBalanceA, totalDepositsA, totalWithdrawalsA, totalInterestA;
	startBalanceA = balanceA = depositsA = withdrawalsA = annualInterestRateA =
		monthlyInterestRateA = endBalanceA = totalDepositsA = totalWithdrawalsA
		= totalInterestA = interestA = 0;
	int monthB = 3;
	ofstream outputFile;

	// Ask user for starting balance and annual interest rate
	cout << "Please enter the starting balance: $";
	cin >> startBalanceA;
	cout << "Please enter the annual interest rate: ";
	cin >> annualInterestRateA;

	for (int count = 1; count <= monthB; count++)
		{
		// A: Ask user for total amount deposited into account during that month
		// Input cannot be negative
		cout << "Please enter the amount deposited into the account: $";
		cin >> depositsA;
		if (depositsA < 0)
			{
			cout << "Please make a valid entry: $";
			cin >> depositsA;
			}  	
		totalDepositsA += depositsA;

		// A: Add total deposits to balance
		balanceA = startBalanceA + depositsA;

		// B: Ask user for total amount withdrawn from account during that month
		// Input cannot be negative
		cout << "Please enter the amount withdrawn from the account: $";
		cin >> withdrawalsA;
		if (withdrawalsA < 0)
			{
			cout << "Please make a valid entry: ";
			cin >> withdrawalsA;
			}
		totalWithdrawalsA += withdrawalsA;

		// B: Subtract total withdrawls from balance
		balanceA = balanceA - withdrawalsA;

		// C: Calculate interest for that month (annual interestA rate / 12)
		// totalInterestA = monthlyInterestRateA * ((startBalanceA + balanceA) / 2)
		// endBalanceA = endBalanceA + totalInterestA
		monthlyInterestRateA = annualInterestRateA / 12.0;
		interestA = monthlyInterestRateA * ((startBalanceA + balanceA) / 2.0);
		endBalanceA = balanceA + interestA;
		totalInterestA += interestA;
		}

	// Open the output file
	outputFile.open("BankAccountReport.txt");

	cout << "Now writing data to the file. Check BankAccountReport.txt for details." << endl;

	// Display report
	outputFile << setprecision(2) << fixed << showpoint;
	outputFile << "Starting balance: $" << startBalanceA << endl;
	outputFile << "Total deposits: $" << totalDepositsA << endl;
	outputFile << "Total withdrawals: $" << totalWithdrawalsA << endl;
	outputFile << "Total interest: $" << totalInterestA << endl;
	outputFile << "Final balance: $" << endBalanceA << endl;

return 0;
}

