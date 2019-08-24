// Programs written for Programming Challenges in C++ book
// Rebecca Mosley
// August 21, 2018, continued November 26, 2018

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iomanip>
using std::setprecision;
using std::setw;
using std::fixed;
using std::showpoint;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <string>
using namespace std;
#include <sstream>
using namespace std;

int main()
{
	string border = "*******************************************************";
	int problemNo = 0;

	cout << endl << border << endl;
	cout << "C++ Early Objects" << endl;
	cout << "by Gaddis, Walters, and Muganda" << endl;
	cout << "----------------------------------" << endl;
	cout << "Programming Challenges: Chapter 4 " << endl;
	cout << "Completed by: RYS Mosley" << endl;
	cout << border << endl << endl;

// 1. Minimum/Maximum
/* Write a program that asks the user to enter two numbers. The program should
use the conditional operator to determine which number is the smaller and which 
is the larger.
*/
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double num1, num2;
	num1 = num2 = 0;
	
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;

	if (num1 > num2)
		cout << num1 << " is larger than " << num2 << endl;
	else if (num1 < num2)
		cout << num2 << " is larger than " << num1 << endl;

// 2. Roman Numeral Converter
/* Write a program that asks the user to enter a number within the range
of 1 through 10. Use a switch statement to display the Roman numeral version
of that number. Decide how the program should handle an input that is less than 
1 or greater than 10.
*/
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int ent1;
	ent1 = 0;

	cout << "Please enter a number in the range of 1 through 10 to convert to a Roman numeral: ";
	cin >> ent1;

	cout << "Roman numeral: ";

	switch (ent1)
	{
		case 1 : cout << "I\n";
			break;
		case 2 : cout << "II\n";
			break;
		case 3 : cout << "III\n";
			break;
		case 4 : cout << "IV\n";
			break;
		case 5 : cout << "V\n";
			break;
		case 6 : cout << "VI\n";
			break;
		case 7 : cout << "VII\n";
			break;
		case 8 : cout << "VIII\n";
			break;
		case 9 : cout << "IX\n";
			break;
		case 10 : cout << "X\n";
			break;
		default : cout << "Invalid entry.\n";
	}


// 3. Magic Dates
/* The date June 10, 1960, is special because when we write it in the following format,
the month times the day equals the year.
	6/10/60
Write a program that asks the user to enter a month (in numeric form), a day, and a 
two-digit year. The program should then determine whether the month times the day is equal
to the year. If so, it should display a message saying the date is magic. Otherwise, it 
should display a message saying the date is not magic.
	Input Validation: Think about what legal values the program should accept for
	month and day.
*/
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int day, month, year;
	day = month = year = 0;

	cout << "Please enter a day, month, and year in dd mm yy format: ";
	cin >> day >> month >> year;

	if ((day * month) == year)
		cout << "The date is magic!\n";
	else
		cout << "The date is not magic.\n";


// 4. Areas of Rectangles
/* The area of a rectangle is the rectangle's length times its width. Write a program that
asks for the length and width of two rectangles. The program should then tell the user 
which rectangle has the greater area or if the areas are the same.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double length1, length2, width1, width2, area1, area2;
	length1 = length2 = width1 = width2 = 0;
	
	cout << "Please enter the length and width of rectangle 1: ";
	cin >> length1 >> width1;
	cout << endl;
	cout << "Please enter the length and width of rectangle 2: ";
	cin >> length2 >> width2;
	cout << endl;

	area1 = length1 * width1;
	area2 = length2 * width2;

	if (area1 > area2)
		cout << "The area of rectangle 1 is greater than the area of rectangle 2.\n";
	else if (area2 > area1)
		cout << "The area of rectangle 2 is greater than the area of rectangle 1.\n";
	else if (area1 == area2)
		cout << "The areas of rectangle 1 and rectangle 2 are equal.\n";


// 5. Book Club Points
/* An online book club awards points to its customers based on the number of books
purchased each month. Points are awarded as follows:

Books Purchased		Points Earned
	0			0
	1			5				
	2			15
	3			30
4 or more			50

Write a program that asks the user to enter the number of books purchased this month
and then displays the number of points awarded.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int numBooks, numPoints1, numPoints2, numPoints3, numPoints4, numPoints5;
	numBooks = numPoints1 = numPoints2 = numPoints3 = numPoints4 = numPoints5 = 0;
	numPoints1 = 0;
	numPoints2 = 5;
	numPoints3 = 15;
	numPoints4 = 30;
	numPoints5 = 50;

	cout << "Please enter the number of books purchased this month: ";
	cin >> numBooks;
	
	if (numBooks == 0)
		cout << "You have earned " << numPoints1 << " points.\n";
	else if (numBooks == 1)
		cout << "You have earned " << numPoints2 << " points.\n";
	else if (numBooks == 2)
		cout << "You have earned " << numPoints3 << " points.\n";
	else if (numBooks == 3)
		cout << "You have earned " << numPoints4 << " points.\n";
	else if (numBooks >= 4)
		cout << "You have earned " << numPoints5 << " points.\n";


// 6. Change for a Dollar Game
/* Create a change-counting game that asks the user to enter what coins to use to make
exactly one dollar. The program should ask the user to enter the number of pennies, nickels, 
dimes, and quarters. If the total value of the coins entered is equal to one dollar, the program
should congratulate the user for winning the game. Otherwise, the program should display a 
message indicating whether the amount entered was more or less than one dollar. Use constant 
variables to hold the coin values.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	const double PENNY = 0.01;
	const double NICKEL = 0.05;
	const double DIME = 0.10;
	const double QUARTER = 0.25;

	double numPennies, numNickels, numDimes, numQuarters, 
		totPennies, totNickels, totDimes, totQuarters, totValue;
	totPennies = totNickels = totDimes = totQuarters = totValue = 0;

	cout << "Try to equal a dollar by entering a number of pennies, " <<
		"nickels, dimes, and quarters: ";
	cin >> numPennies >> numNickels >> numDimes >> numQuarters;
	totPennies = numPennies * PENNY;
	totNickels = numNickels * NICKEL;
	totDimes = numDimes * DIME;
	totQuarters = numQuarters * QUARTER;

	totValue = totPennies + totNickels + totDimes + totQuarters;

	if (totValue == 1.00)
		cout << "You have won the Dollar Game!\n";
	else if (totValue > 1.00)
		cout << "You have lost the Dollar Game. You were over a dollar.\n";
	else if (totValue < 1.00)
		cout << "You have lost the Dollar Game. You were under a dollar.\n";


// 7. Time Calculator
/* Write a program that asks the user to enter a number of seconds.
- There are 86,400 seconds in a day. If the number of seconds entered by the user 
is greater than or equal to 86,400, the program should display the number of days in
that many seconds.
- There are 3,600 seconds in an hour. If the number of seconds entered by the user
is less than 86,400, but is greater than or equal to 3,600, the program should display 
the number of hours in that many seconds.
- There are 60 seconds in a minute. If the number of seconds entered by the user is less
than 3,600, but is greater than or equal to 60, the program should display the number
of minutes in that many seconds. 
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	const double SECONDS_DAY = 86400;
	const double SECONDS_HOUR = 3600;
	const double SECONDS_MINUTE = 60;

	int numSeconds, remSeconds, calcDay, calcHour, calcMinute;
	numSeconds = remSeconds = calcDay = calcHour = calcMinute = 0;

	cout << "Please enter a number of seconds and the program will return the number of relevant minutes, hours, or days: ";
	cin >> numSeconds;

	if (numSeconds >= SECONDS_DAY)
		cout << "There are " << (numSeconds / SECONDS_DAY) << " days in " << numSeconds << " seconds.\n";
	else if ((numSeconds < SECONDS_DAY) && (numSeconds >= SECONDS_HOUR))
		cout << "There are " << (numSeconds / SECONDS_HOUR) << " hours in " << numSeconds << " seconds.\n";
	else if ((numSeconds < SECONDS_HOUR) && (numSeconds >= SECONDS_MINUTE))
		cout << "There are " << (numSeconds / SECONDS_MINUTE) << " minutes in " << numSeconds << " seconds.\n";
	else
		cout << "You entered " << numSeconds << " seconds.\n";


// 8. Math Tutor Version 2
/* This is a modification of the math totor Programming Challenge problem in Chapter 3. 
Write a program that can be used as a math tutor for a young student. The program should
display two random numbers between 10 and 50 that are to be added, such as:
	 24
	+12
	---
The program should then wait for the student to enter the answer. If the answer is correct,
a message of congratulations should be printed. If the answer is incorrect, a message should 
be printed showing the correct answer. 
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	const int MIN_VALUE = 10;
	const int MAX_VALUE = 50;
	int number1, number2, answer, studentAnswer;
	number1 = number2 = answer = studentAnswer = 0;
	unsigned seed;
	seed = time(0);
	srand(seed);
	number1 = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;
	number2 = rand() % (MAX_VALUE - MIN_VALUE + 1) + MIN_VALUE;

	// Calculations
	answer = number1 + number2;

	// Display problem
	cout << " " << number1 << endl;
	cout << "+" << number2 << endl;
	cout << "---" << endl;
	cin >> studentAnswer;

	cout << "Your answer was " << studentAnswer << endl;
	cout << "The correct answer is " << answer << endl;


// 9. Software Sales
/* A software company sells a package that retails for $199. Quantity discounts are given
according to the following table.

Quantity		Discount
10 - 19			20%
20 - 49			30%
50 - 99			40%
100 or more		50%

Write a program that asks for the number of units purchased and computes the total
cost of the purchase.
	Input validation: Decide how the program should handle an input of less 
	than 0.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int unitsPurchased;
	double unitPrice, totalPrice;
	string unitsIn;

	unitPrice = 199.00;
	totalPrice = 0;
	unitsPurchased = 0;

	double const DISCOUNT20 = 0.20;
	double const DISCOUNT30 = 0.30;
	double const DISCOUNT40 = 0.40;
	double const DISCOUNT50 = 0.50;
	
	cout << "How many software units were purchased?: ";
	cin >> unitsPurchased;
	//getline(cin, unitsIn);
	//stringstream conUnitPrice(unitsIn);
	//unitsPurchased = 0;
	//conUnitPrice >> unitsPurchased;
	
	//unitsPurchased = static_cast<int>(unitsIn);

	if ((unitsPurchased < 10) && (unitsPurchased >= 0))
		cout << "The total software cost is: $" << (unitsPurchased * unitPrice) << endl;
	else if ((unitsPurchased >= 10) && (unitsPurchased <= 19))
		cout << "The total software cost is: $"
		<< (unitsPurchased * unitPrice * DISCOUNT20) << endl;
	else if ((unitsPurchased >= 20) && (unitsPurchased <= 49))
		cout << "The total software cost is: $"
		<< (unitsPurchased * unitPrice * DISCOUNT30) << endl;
	else if ((unitsPurchased >= 50) && (unitsPurchased <= 99))
		cout << "The total software cost is: $"
		<< (unitsPurchased * unitPrice * DISCOUNT40) << endl;
	else if (unitsPurchased >= 100)
		cout << "The total software cost is: $"
		<< (unitsPurchased * unitPrice * DISCOUNT50) << endl;
	else if (unitsPurchased < 0)
		cout << "Please enter a valid number of 0 or greater." << endl;


// 10. Bank Charges
/* A bank charges $15 per month plus the following check fees for a commercial checking
account:
	$0.10 each for fewer than 20 checks
	$0.08 each for 20 - 39 checks
	$0.06 each for 40 - 59 checks
	$0.04 each for 60 or more checks
Write a program that asks for the number of checks written during the past month,
then computes and displays the bank's fees for the month.
	Input validation: Decide how the program should handle an input
	of less than 0.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int numChecks;
	numChecks = 0;

	double totFees, flatFees, catA, catB, catC, catD;
	totFees = 0;
	flatFees = 15.00;
	catA = 0.10;
	catB = 0.08;
	catC = 0.06;
	catD = 0.04;

	cout << "Enter how many checks the business uses each month: ";
	cout << fixed << showpoint << setprecision(2);
	cin >> numChecks;

	if ((numChecks >= 0) && (numChecks < 20))
		cout << "Total checking fees are: $" << (flatFees + (numChecks * catA)) 
		<< endl;
	else if ((numChecks >= 20) && (numChecks < 40))
		cout << "Total checking fees are: $" << (flatFees + (numChecks * catB))
		<< endl;
	else if ((numChecks >= 40) && (numChecks < 60))
		cout << "Total checking fees are: $" << (flatFees + (numChecks * catC))
		<< endl;
	else if ((numChecks >= 60))
		cout << "Total checking fees are: $" << (flatFees + (numChecks * catD))
		<< endl;
	else if ((numChecks < 0))
		cout << "Please enter a valid input." << endl;


// 11. Geometry Calculator
/* Write a program that displays the following menu:

	Geometry Calculator
		1. Calculate the Area of a Circle
		2. Calculate the Area of a Rectangle
		3. Calculate the Area of a Triangle
		4. Quit

	Enter your choice (1 - 4):

	- If the user enters 1, the program should ask for the radius of the 
	circle and then display its area. Use 3.14159 for pi.
	- If the user enters 2, the program should ask for the length and width
	of the rectangle, and then display the rectangle's area.
	- If the user enters 3, the program should ask for the length of the 
	triangle's base and its height, and then display its area.
	- If the user enters 4, the program should end.
		Input Validation: Decide how the program should handle an 
		illegal input for the menu choice or a negative value for
		any of the other inputs. 
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	const double PI = 3.14159;

	int opt;
	opt = 0;

	double radius, circArea, length, width, rectArea, base, height, triArea;
	radius = circArea = length = width = rectArea = base = height = triArea = 0;
	
	cout << "Geometry Calculator" << endl;
	cout << "	1. Calculate the Area of a Circle " << endl;
	cout << "	2. Calculate the Area of a Rectangle " << endl;
	cout << "	3. Calculate the Area of a Triangle " << endl;
	cout << "	4. Quit " << endl;

	cout << " Enter your choice (1 - 4): ";
	cin >> opt;
	
	if (opt == 1)
	{
		cout << "Enter the radius of the circle: ";
		cin >> radius;
		circArea = PI * radius * radius;
		cout << "The area of the circle is " << circArea << endl; 
	}
	else if (opt == 2)
	{
		cout << "Enter the length and width of the rectangle: ";
		cin >> length >> width;
		rectArea = length * width;
		cout << "The area of the rectangle is " << rectArea << endl;
	}
	else if (opt == 3)
	{
		cout << "Enter the base and height of the triangle: ";
		cin >> base >> height;
		triArea = 0.5 * base * height;
		cout << "The area of the triangle is " << triArea << endl;
	}
	else if (opt == 4)
	{
		cout << "Goodbye!" << endl;
	}


// 12. Color Mixer
/* The colors red, blue, and yellow are known as the primary colors because
they cannot be made by mixing other colors. When you mix two primary colors,
you get a secondary color, as shown here:
	When you mix red and blue, you get purple.
	When you mix red and yellow, you get orange.
	When you mix blue and yellow, you get green.
Write a program that prompts the user to enter the names of two primary
colors to mix. If the user enters anything other than "red," "blue," or 
"yellow," the program should display an error message. Otherwise, the 
program should display the name of the secondary color that results.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	string primary1, primary2, secondary;
	primary1 = primary2 = secondary = "";
	bool notValidColor = false;

	cout << "Please enter two primary colors: ";
	cin >> primary1 >> primary2;
	//if ((primary1 || primary2) != ("red" || "blue" || "yellow"))
	//	cout << "Error! You must enter red, blue, or yellow.";
	if ((primary1 == primary2))
		cout << "You must enter two different primary colors.";
	else if ((primary1 == "blue")&&(primary2 == "red"))
		secondary = "purple";
	else if ((primary1 == "red")&&(primary2 == "blue"))
		secondary = "purple";
	else if ((primary1 == "red")&&(primary2 == "yellow"))
		secondary = "orange";
	else if ((primary1 == "yellow")&&(primary2 == "red"))
		secondary = "orange";
	else if ((primary1 == "blue")&&(primary2 == "yellow"))
		secondary = "green";
	else if ((primary1 == "yellow")&&(primary2 == "blue"))
		secondary = "green";
	else
		notValidColor = true;

	// Error if color is not valid
	if (notValidColor)
		cout << "Please enter a valid primary color combination." << endl;
	
	// Print out secondary color
	if (notValidColor == false)
		cout << "Your secondary color is " << secondary << endl;


// 13. Running the Race
/* Write a program that asks for the names of three runners and the time
it took each of them to finish a race. The program should display who came in first,
second, and third place. Think about how many test cases are needed to verify that
your problem works correctly. (That is, how many different finish orders are possible?)

	Input Validation: Only allow the program to accept positive numbers for the times.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	string runner1, runner2, runner3;
	runner1 = runner2 = runner3 = "";
	double time1, time2, time3;
	time1 = time2 = time3 = 0.0;

	// Enter times for runners
	cout << "Please enter the names and times for the runners: " << endl;
	cout << "Runner 1's name: ";
	cin >> runner1;
	cout << runner1 << "'s time: ";
	cin >> time1;
	cout << "Runner 2's name: ";
	cin >> runner2;
	cout << runner2 << "'s time: ";
	cin >> time2;
	cout << "Runner 3's name: ";
	cin >> runner3;
	cout << runner3 << "'s time: ";
	cin >> time3;
	

	// test cases
	// runner1, runner2, runner3
	// runner1, runner3, runner2
	// runner2, runner3, runner1
	// runner2, runner1, runner3
	// runner3, runner2, runner1
	// runner3, runner1, runner2

	// Print the race outcome
	cout << "The outcome of the race is: " << endl;
	if ((time1 < time2) && (time2 < time3))
		cout << runner1 << "\n" <<  runner2 << "\n" << runner3 << "\n" << endl;
	else if ((time1 < time2) && (time3 < time2))
		cout << runner1 << "\n" <<  runner3 << "\n" << runner2 << "\n" << endl;
	else if ((time2 < time3) && (time3 < time1))
		cout << runner2 << "\n" <<  runner3 << "\n" << runner1 << "\n" << endl;
	else if ((time2 < time1) && (time1 < time3))
		cout << runner2 << "\n" <<  runner1 << "\n" << runner3 << "\n" << endl;
	else if ((time2 < time3) && (time3 < time1))
		cout << runner2 << "\n" <<  runner3 << "\n" << runner1 << "\n" << endl;
	else if ((time3 < time2) && (time2 < time1))
		cout << runner3 << "\n" <<  runner2 << "\n" << runner1 << "\n" << endl;
	else if ((time3 < time1) && (time1 < time2))
		cout << runner3 << "\n" <<  runner1 << "\n" << runner2 << "\n" << endl;


// 14. Personal Best
/* Write a program that asks for the name of a pole vaulter and the dates and vault
heights (in meters) of the athlete's three best vaults. It should then report in height
order (best first), the date on which each vault was made, and its height.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	string name;
	name = "";
	string date1, date2, date3;
	date1 = date2 = date3 = "";
	double vault1, vault2, vault3;
	vault1 = vault2 = vault3 = 0.0;

	cout << "Enter the name of a pole vaulter: ";
	cin >> name;
	cout << "Enter the date in mm/dd/yy format and height of the first vault: ";
	cin >> date1 >> vault1;
	cout << "Enter the date in mm/dd/yy format and height of the second vault: ";
	cin >> date2 >> vault2;
	cout << "Enter the date in mm/dd/yy format and height of the third vault: ";
	cin >> date3 >> vault3;

	cout << "Here are the heights and dates of vaults: " << endl;
	if ((vault1 > vault2) && (vault2 > vault3))
		cout << vault1 << " " << date1 << "\n" 
			<< vault2 << " " << date2 << "\n" 
			<< vault3 << " " << date3 << endl;
	else if ((vault1 > vault3) && (vault3 > vault2))
		cout << vault1 << " " << date1 << "\n"
			<< vault3 << " " << date3 << "\n"
			<< vault2 << " " << date2 << endl;
	else if ((vault2 > vault3) && (vault3 > vault1))
		cout << vault2 << " " << date2 << "\n"
			<< vault3 << " " << date3 << "\n"
			<< vault1 << " " << date1 << endl;
	else if ((vault2 > vault1) && (vault1 > vault3))
		cout << vault2 << " " << date2 << "\n"
			<< vault1 << " " << date1 << "\n"
			<< vault3 << " " << date3 << endl;
	else if ((vault3 > vault2) && (vault3 > vault1))
		cout << vault3 << " " << date3 << "\n"
			<< vault2 << " " << date2 << "\n"
			<< vault1 << " " << date1 << endl;
	else if ((vault3 > vault1) && (vault1 > vault2))
		cout << vault3 << " " << date3 << "\n"
			<< vault1 << " " << date1 << "\n"
			<< vault2 << " " << date2 << endl;
	else
		cout << "Please enter a valid input." << endl;


// 15. February Days
/* The month of February normally has 28 days. But if it is a leap year, February
has 29 days. Write a program that asks the user to enter a year. The program should then
diaplsy the number of days in February that year. Use the following criteria to identify
leap years:
	1. Determine whether the year is divisible by 100. If it is, then it is a leap
	year if and only if it is also divisible by 400. For example, 2000 is a leap year,
	but 2100 is not.
	2. If the year is not divisible by 100, then it is a leap year if and only if it is
	divisible by 4. For example, 2008 is a leap year, but 2009 is not.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int yearA;
	yearA = 0;
	int by400 = 400;
	int by100 = 100;
	int by4 = 4;

	// Get year
	cout << "Enter a year to test whether it is a leap year: ";
	cin >> yearA;
	
	// Test whether it is a leap year
	if ((yearA % by100 == 0) && (yearA % by400 == 0))
		cout << yearA << " is a leap year." << endl;
	else if ((yearA % by100 != 0) && (yearA % by4 == 0))
		cout << yearA << " is a leap year." << endl;
	else
		cout << "That is not a leap year." << endl;


// 16. Body Mass Index
/* Write a program that calculates and displays a person's body mass index (BMI). The BMI
is often used to determine whether a person with a sedentary lifestyle is overweight or
underweight for his or her height. A person's BMI is calculated with the following formula:
	BMI = weight x 703/height^2
where weight is measured in pounds and height is measured in inches.

The program should display a message indicating whether the person has optimal weight, is
underweight, or is overweight. A sedentary person's weight is considered to be optimal if 
his or her BMI is between 18.5 and 25. If the BMI is less than 18.5, the person is considered
to be underweight. If the BMI is greater than 25, the person is considered to be overweight.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double heightA, weightA, BMI;
	heightA = weightA = BMI = 0.0;
	
	// Enter height, weight
	cout << "Please enter your height: ";
	cin >> heightA;
	cout << "Please enter your weight: ";
	cin >> weightA;

	// Calculate BMI
	BMI = weightA * 703 / (heightA * heightA);

	// Display whether weight is optimal, underweight, or overweight
	if (BMI < 18.5)
		cout << "You are underweight." << endl;
	else if ((BMI >= 18.5) && (BMI <= 25))
		cout << "You are optimal weight." << endl;
	else if (BMI > 25)
		cout << "You are overweight." << endl;
	else
		cout << "Please make a valid entry." << endl;


// 17. Fat Gram Calculator
/* Write a program that asks for the number of calories and fat grams in a food. The
program should display the percentage of calories that come from fat. If the calories 
from fat are less than 30 percent of the total calories of the food, it should also 
display a message indicating the food is low in fat.

One gram of fat has 9 calories, so
	Calories from fat = fat grams * 9

The percentage of calories from fat can be calculated as
	Calories from fat / total calories

Input Validation: The program should make sure that the number of calories is
greater than 0, the number of fat grams is 0 or more, and the number of calories
from fat is not greater than the total number of calories. 
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	const double FAT = 9;
	double calories, fatCal, fatPerc;
	calories = fatCal = fatPerc = 0.0;

	// Enter the caloric information
	cout << "How many calories are in the food?: ";
	cin >> calories;
	if (calories < 0)
		cout << "Please make a valid entry." << endl;
	cout << "How many calories are from fat?: ";
	cin >> fatCal;
	if (fatCal < 0)
		cout << "Please make a valid entry." << endl;

	// Calculat the fat percentage
	fatPerc = fatCal / calories;

	// Display the results
	cout << "The fat percentage is " << fatPerc * 100 << "%." << endl;
	if (fatPerc < .30)
		cout << "This is a low fat food." << endl;


// 18. The Speed of Sound
/* The speed of sound varies depending on the medium through which it travels. 
In general, sound travels fastest in rigid media, such as steel, slower in liquid 
media, such as water, and slowest of all in gases, such as air. The following 
table shows the approximate speed of sound, measured in feet per second, in air,
water, and steel. 

Medium		Speed (feet per second)
---------------------------------------
Air		1,100
Water		4,900
Steel		16,400	

Write a program that displays a menu allowing the user to select air, water, or
steel. After the user has made a selection, the number of feet a sound wave will
travel in the selected medium should be entered. The program will then display
the amount of time it will take. (Round the answer to four decimal places.)

Input Validation: Decide how the program should handle an illegal input for
the menu choice or a negative value for the distance. 
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int air, water, steel, menu;
	air = 1;
	water = 2;
	steel = 3;
	menu = 0;
	double airSpeed, waterSpeed, steelSpeed, feet;
	airSpeed = 1100;
	waterSpeed = 4900;
	steelSpeed = 16400;
	feet = 0.0;
	double travelTime;
	travelTime = 0.0;

	// Display menu options
	cout << setw(10) << setprecision(4) << fixed;
	cout << "Please enter the menu selection for the medium " << endl;
	cout << "through which sound will be traveling." << endl;
	cout << "1. Air" << endl;
	cout << "2. Water" << endl;
	cout << "3. Steel" << endl;
	cout << "Select: ";
	cin >> menu;

	// Enter number of feet sound wave will travel based upon menu selection
	if (menu == 1)
		{
		cout << "Please enter the number of feet the sound wave will travel: ";
		cin >> feet;
		if (feet < 0)
			cout << "Please make a valid entry greater than " <<
				" or equal to 0." << endl;
		else if (feet >= 0)
			{
			travelTime = feet / airSpeed;
			cout << "The sound will travel in " 
				<< travelTime << " seconds." << endl;
			}
		}
	else if (menu == 2)
		{
		cout << "Please enter the number of feet the sound wave will travel: ";
		cin >> feet;
		if (feet < 0)
			cout << "Please make a valid entry greater than " <<
				" or equal to 0." << endl;
		else if (feet >= 0)
			{
			travelTime = feet / waterSpeed;
			cout << "The sound will travel in " 
				<< travelTime << " seconds." << endl;
			}
		}
	else if (menu == 3)
		{
		cout << "Please enter the number of feet the sound wave will travel: ";
		cin >> feet;
		travelTime = feet / steelSpeed;
		if (feet < 0)
			cout << "Please make a valid entry greater than " <<
				" or equal to 0." << endl;
		else if (feet >= 0)
			{
			travelTime = feet / steelSpeed;
			cout << "The sound will travel in " 
				<< travelTime << " seconds." << endl;
			}
		}
	else
		cout << "Please make a valid selection." << endl;


// 19. The Speed of Sound in Gases
/* When traveling through a gas, the speed of sound depends primarily on the density of
the medium. The less dense the medium, the faster the speed will be. The following table
shows the approximate speed of sound at 0 degrees Celsius, measured in meters per second,
when traveling through carbon dioxide, air, helium, and hydrogen.

Medium		Speed (meters per second)
-----------------------------------------
Carbon dioxide	258.0
Air		331.5
Helium		972.0
Hydrogen	1270.0

Write a program that displays a menu allowing the user to select one of these four
gases. After a valid selection has been made, the program should ask the user to enter
the number of seconds (0 to 30) it took for the sound to travel in this medium from its
source to the location at which it was detected. The program should then report how far
away (in meters) the source of the sound was from the detection location.

Input Validation: If the user enters an invalid menu choice the program should display
an error message instead of prompting for the number of seconds.
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double co2, airA, he, h, seconds, meters, speed;
	co2 = 258.0;
	airA = 331.5;
	he = 972.0;
	h = 1270.0;
	seconds = meters = speed = 0.0;
	int menuA;
	menuA = 0;

	// Display menu
	cout << setw(10) << fixed << setprecision(4);
	cout << "Please select one of the following menu items to calculate the ";
	cout << "\nnumber of meters traveled." << endl;
	cout << "1. Carbon dioxide" << endl;
	cout << "2. Air" << endl;
	cout << "3. Helium" << endl;
	cout << "4. Hydrogen" << endl;
	cout << "Selection: ";
	cin >> menuA;
	if ((menuA < 1) || (menuA > 4))
 		cout << "Please make a valid selection." << endl;

	if (menuA == 1)
	{
		cout << "Please enter the number of seconds (0 - 30): ";
		cin >> seconds;
		meters = seconds * co2;
		cout << "The sound traveled " << meters << " meters." << endl;
	}
	else if (menuA == 2)
	{
		cout << "Please enter the number of seconds (0 - 30): ";
		cin >> seconds;
		meters = seconds * airA;
		cout << "The sound traveled " << meters << " meters." << endl;
	
	}
	else if (menuA == 3)
	{
		cout << "Please enter the number of seconds (0 - 30): ";
		cin >> seconds;
		meters = seconds * he;
		cout << "The sound traveled " << meters << " meters." << endl;

	}
	else if (menuA == 4)
	{
		cout << "Please enter the number of seconds (0 - 30): ";
		cin >> seconds;
		meters = seconds * h;
		cout << "The sound traveled " << meters << " meters." << endl;

	}
	else
		cout << "Please make a valid selection." << endl;		


// 21. Freezing and Boiling Points
/* The following table lists the freezing and boiling points of several substances.
Write a program that asks the user to enter a temperature, and then shows all the 
substances that will freeze at that temperature and all that will boil at that 
temperature. For example, if the user enters -20, the program should report that 
water will freeze and oxygen will boil at that temperature.

Substance		Freezing Point		Boiling Point
-------------------------------------------------------------
Ethyl alcohol		-173			172
Mercury			-38			676
Oxygen			-362			-306
Water			32			212
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int bEA, fEA, bM, fM, bO, fO, bW, fW;
	bEA = 172;
	fEA = -173;
	bM = 676;
	fM = -38;
	bO = -306;
	fO = -362;
	bW = 212;
	fW = 32;
	double temp;
	temp = 0;

	// Prompt user to enter a temperature
	cout << "Please enter a temperature in Fahrenheit: ";
	cin >> temp;

	if (temp <= fO)
		cout << "Oxygen, ethyl alcohol, mercury, and water  will freeze at this temperature." << endl;
	else if ((temp <= fEA) && (temp >= bO))
		cout << "Ethyl alcohol, mercury, and water will freeze at this temperature and oxygen will boil at this temperature." << endl;
	else if ((temp <= fM) && (temp >= bO))
		cout << "Mercury and water will freeze at this temperature and oxygen will boil at this temperature." << endl;
	else if ((temp <= fW) && (temp >= bO))
		cout << "Water will freeze at this temperature and oxygen will boil at this temperature." << endl;
	else if (temp >= bM)
		cout << "Mercury, water, ethyl alcohol, and oxygen will boil at this temperature." << endl;
	else if ((temp >= bW) && (temp < bM))	
		cout << "Water, ethyl alcohol, and oxygen will boil at this temperature." << endl;
	else if ((temp >= bEA) && (temp < bW))
		cout << "Ethyl alcohol and oxygen will boil at this temperature." << endl;
	else
		cout << "Please make a valid entry." << endl;


// 22. Mobile Service Provider
/* A mobile phone service has three different subscription packages for its customers:

	Package A: For $39.99 per month, 450 minutes are provided. Additional
		usage costs $0.45 per minute.
	Package B: For $59.99 per month, 900 minutes are provided. Additional
		usage costs $0.40 per minute.
	Pacakge C: For $69.99 per month, unlimited minutes are provided. 

Write a program that calculates a customer's monthly bill. It should input customer
name, which package the customer has purchased, and how many minutes were used. It
should then create a bill that includes the input information and the total amount
due. It should also display how much money Package A customers would save if they 
purchased package B, or C, and how much money package B customers would save if they
purchased package C. If there would be no savings, no message should be printed.
Wherever possible, use named constants instead of numbers. 
*/

	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	string firstName, lastName, package;
	firstName = lastName = package = "";
	double minutesUsed, totalDue, moneySaved;
	const double packageA = 39.99;
	const double Aminutes = 450;
	const double Aadditional = 0.45;
	const double packageB = 59.99;
	const double Bminutes = 900;
	const double Badditional = 0.40;
	const double packageC = 69.99;
	minutesUsed = totalDue = moneySaved = 0.0;

	// Input customer name, package purchased, minutes used
	cout << "Please enter the customer's first name: ";
	cin >> firstName;
	cout << "Please enter the customer's last name: ";
	cin >> lastName;
	cout << "Please enter which package was purchased (A, B, or C): ";
	cin >> package;
	cout << "Please enter how many minutes were used: ";
	cin >> minutesUsed;

	// Format output
	cout << setprecision(2) << fixed;

	// Calculate bill
	if (package == "A")
		{
		if (minutesUsed > 450)
			{
			totalDue = packageA + ((minutesUsed - 450) * Aadditional);
			cout << "The amount due is: $" << totalDue << endl;
				if (totalDue > packageB)
				{
					// Calculate cost difference
					moneySaved = totalDue - packageB;
					cout << "You would save: $" << moneySaved << " if you selected package B" << endl;		
				}
			}
		else if (minutesUsed <= 450)
			{
			totalDue = packageA;
			cout << "The amount due is: $" << totalDue << endl;
			}
		}
	else if (package == "B")
		{
		if (minutesUsed > 900)
			{	
			totalDue = packageB + ((minutesUsed - 900) * Badditional);
			cout << "The amount due is: $" << totalDue << endl;
				if (totalDue > packageC)
				{
					// Calculate the cost difference
					moneySaved = totalDue - packageC;
					cout << "You would save: $" << moneySaved << " if you selected package C" << endl;		
				}
			}
		else if (minutesUsed <= 900)
			{
			totalDue = packageB;
			cout << "The amount due is: $" << totalDue << endl;
			}
		}
	else if (package == "C")
		{
		totalDue = packageC;
		cout << "The amount due is: $" << totalDue << endl;
		}
	else
		cout << "Please enter a valid package option." << endl; 

return 0;
}
