// Programming Challenges for Chapter 3
// Rebecca Mosley
// June 4, 2018

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iomanip>
using std::fixed;
using std::showpoint;
using std::noshowpoint;
using std::setprecision;
using std::setw;
using std::left;
using std::right;
#include <string>
using std::string;
#include <cmath>
using std::pow;
using std::exp;
using std::sin;
using std::cos;
using std::tan;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;

int main()
{
	string border = "*******************************************************";
int problemNo = 0;

	cout << endl << border << endl;
	cout << "C++ Early Objects" << endl;
	cout << "by Gaddis, Walters, and Muganda" << endl;
	cout << "----------------------------------" << endl;
	cout << "Programming Challenges: Chapter 3 " << endl;
	cout << "Completed by: RYS Mosley" << endl;
	cout << border << endl << endl;

	// 1. Miles per Gallon
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double tankSize, range, milesPerGallon = 0;

	cout << "How many gallons can the tank hold?: ";
	cin >> tankSize;
	cout << "How many miles can the car drive on a full tank?: ";
	cin >> range;
	milesPerGallon = range / tankSize;
	cout << "Your vehicle gets " << milesPerGallon << " miles per gallon.\n";

	// 2. Stadium Seating
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double aSeatsCost = 15.00,
		bSeatsCost = 12.00,
		cSeatsCost = 9.00,
		aSeatsSales, 
		bSeatsSales,
		cSeatsSales,
		totalSales;
	aSeatsSales = bSeatsSales = cSeatsSales = totalSales = 0;
	int aSeatsSold,
		bSeatsSold,
		cSeatsSold;
	aSeatsSold = bSeatsSold = cSeatsSold = 0;

	cout << "How many A seats were sold? ";
	cin >> aSeatsSold;
	cout << "How many B seats were sold? ";
	cin >> bSeatsSold;
	cout << "How many C seats were sold? ";
	cin >> cSeatsSold;

	totalSales = (aSeatsSold * aSeatsCost) + (bSeatsSold * bSeatsCost) + 
		(cSeatsSold * cSeatsCost);

	cout << fixed << showpoint << setprecision(2) << "The income generated from ticket sales was $" << totalSales << ".\n";

// 3. Housing Costs
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	const int YEAR = 12;
	double rentMortgage,
		utilities,
		phones,
		cable,
		total,
		totalYear;
		
	cout << "What is your monthly rent or mortgage payment?: $";
	cin >> rentMortgage;
	cout << "What is your monthly utilities expense?: $";
	cin >> utilities;
	cout << "What is your monthly phone expense?: $";
	cin >> phones;
	cout << "What is your monthly cable expense?: $";
	cin >> cable;

	total = rentMortgage + utilities + phones + cable;
	totalYear = total * YEAR;

	cout << "Your monthly expenses are $" << total << ".";
	cout << "Your yearly expenses are $" << totalYear << "." << endl;

// 4. How Much Insurance?
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double bldgCost = 0;
	const double INSURE = .80;
	double insMin = 0;	

	cout << "How much does the structure cost?: $";
	cin >> bldgCost;
	insMin = bldgCost * INSURE;
	cout << "Your minimum amount of insurance is: $" << insMin << endl;

// 5. Batting Average
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int atBat, hits;
	double batAvg;

	cout << "How many times was the player at bat?: ";
	cin >> atBat;
	cout << "How many hits did the player have?: ";
	cin >> hits;

	batAvg = static_cast<double>(hits) / static_cast<double>(atBat);
	cout << "The player's batting average was: " << setprecision(4) 
		<< showpoint <<batAvg << endl;

// 6. Test Average
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double test1, test2, test3, test4, test5;
	test1 = test2 = test3 = test4 = test5 = 0;
	double avg = 0;
	
	cout << "Enter the score for test 1: ";
	cin >> test1;

	cout << "Enter the score for test 2: ";
	cin >> test2;
	
	cout << "Enter the score for test 3: ";
	cin >> test3;

	cout << "Enter the score for test 4: ";
	cin >> test4;

	cout << "Enter the score for test 5: ";
	cin >> test5;

	avg = (test1 + test2 + test3 + test4 + test5) / 5;
	cout << "The average test score is: " << fixed << showpoint 
		<< setprecision(1) << avg << endl;

// 7. Average Rainfall
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double rain1, rain2, rain3, avgRain;
	rain1 = rain2 = rain3 = 0;
	string month1, month2, month3;
	month1 = month2 = month3 = "month";

	cout << "Enter the month and rainfall in inches for month 1: ";
	cin >> month1 >> rain1;

	cout << "Enter the month and rainfall in inches for month 2: ";
	cin >> month2 >> rain2;
	
	cout << "Enter the month and rainfall in inches for month 3: ";
	cin >> month3 >> rain3;

	avgRain = (rain1 + rain2 + rain3) / 3.0;

	cout << "The average monthly rainfall for " << month1 << ", "
		<< month2 << ", and " << month3 << " was "
		<< showpoint << fixed << setprecision(2) << avgRain << " inches." 
		<< endl;

// 8. Male and Female Percentages
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int male, female, classTotal;
	male = female = classTotal = 0;
	double percMale, percFemale, percTotal;
	percMale = percFemale = percTotal = 0;

	cout << "How many males are registered for the class?: ";
	cin >> male;
	cout << "How many females are registered for the class?: ";
	cin >> female; 

	classTotal = male + female;
	percMale = (static_cast<double>(male) / static_cast<double>(classTotal)) * 100.0;
	percFemale = (static_cast<double>(female) / static_cast<double>(classTotal)) * 100.0;
	percTotal = percMale + percFemale;
	cout << "The percentage of males in the class is " << fixed << showpoint << setprecision(2)
		<< percMale << "% and the percentage of females in the class is " 
		<< fixed << showpoint << setprecision(2) << percFemale << "%." << endl;

// 9. Vacation Days
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int days, hours, minutes, seconds;
	days = hours = minutes = seconds = 0;

	cout << "How many days do you plan on spending on your vacation?: ";
	cin >> days;
	hours = days * 24;
	minutes = hours * 60;
	seconds = minutes * 60;

	cout << "Your vacation will be " << days << " days long or "
		<< hours << " hours long or " 
		<< minutes << " minutes long or " 
		<< seconds << " seconds long." << endl;


// 10. Box Office
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	string movie;
	int childSold, adultSold;
	childSold = adultSold = 0;
	const double CHILDPRICE = 6.00;
	const double ADULTPRICE = 10.00;
	double grossRevenue, netRevenue, distributorFees;
	grossRevenue = netRevenue = distributorFees = 0;

	cin.clear();
	cin.ignore(INT_MAX, '\n');
	cout << "What is the name of the movie?: ";
	getline(cin, movie);
	cout << "How many adult tickets were sold?: ";
	cin >> adultSold;
	cout << "How many child tickets were sold?: ";
	cin >> childSold;

	// Calculations
	grossRevenue = (adultSold * ADULTPRICE) + (childSold * CHILDPRICE);
	distributorFees = 0.20 * grossRevenue;
	netRevenue = grossRevenue - distributorFees; 

	// Display results
	cout << left << setw(30) << "Movie Name:  " << left << setw(20) << movie << endl;
	cout << left << setw(30) << "Adult Tickets Sold:  " << left << setw(20) << adultSold << endl;
	cout << left << setw(30) << "Child Tickets Sold:  " << left << setw(20) << childSold << endl;
	cout << left << setw(30) << "Gross Box Office Revenue:" << "$" 
		<< left << setw(20) << fixed << showpoint << setprecision(2) << grossRevenue << endl;
	cout << left << setw(29) << "Amount Paid to Distributor:" << "-$"
		<< left << setw(20) << fixed << showpoint << setprecision(2) << distributorFees << endl;
	cout << left << setw(30) << "Net Box Office Revenue:" << "$"
		<< left << setw(2) << fixed << showpoint << setprecision(2) << netRevenue << endl;

// 11. How Many Widgets?
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double widgetWeight = 12.5;
	double palletWeight = 0;
	double totalWeight = 0;
	double netWidgetWeight = 0;
	double calcWidgets = 0;

	// Questions for user
	cout << "How many pounds does the pallet weight by itself?: ";
	cin >> palletWeight;
	cout << "What is the total weight of the pallet with the widgets stacked on it?: ";
	cin >> totalWeight;
	
	// Calculations
	netWidgetWeight = totalWeight - palletWeight;
	calcWidgets = netWidgetWeight / widgetWeight;

	// Display results of widget calculations
	cout << "There are " << calcWidgets << " widgets on the pallet." << endl;

// 12. How Many Calories
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int cookiesPerBag = 30;
	int servingsPerBag = 10;
	int caloriesPerServing = 240;
	int cookiesPerServing = 0;
	double cookiesEaten = 0;
	double caloriesConsumed = 0;

	// Calculations for cookies per serving
	cookiesPerServing = cookiesPerBag / servingsPerBag;
	
	// Ask for how many cookies eaten
	cout << "How many cookies have you eaten?: ";
	cin >> cookiesEaten;
	caloriesConsumed = (cookiesEaten / cookiesPerServing) * caloriesPerServing;
	cout << "You have eaten " << caloriesConsumed << " calories." << endl;
	
// 13. Ingredients Adjuster
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double cookiesPerBatch = 48;
	double sugar = 1.5;
	double butter = 1.0;
	double flour = 2.75;
	double requestedCookies = 0;
	double batchMultiplier = 0;
	double sugarBatch = 0;
	double butterBatch = 0;
	double flourBatch = 0;

	// Request how many cookies to be made
	cout << "How many cookies would you like to bake?: ";
	cin >> requestedCookies;
	
	// Calculate the ingredients needed
	batchMultiplier = requestedCookies / 48;
	sugarBatch = sugar * batchMultiplier;
	butterBatch = butter * batchMultiplier;
	flourBatch = flour * batchMultiplier;

	// Display the amounts of ingredients needed
	cout << "You will need " << sugarBatch << " cups of sugar." << endl;
	cout << "You will need " << butterBatch << " cups of butter." << endl;
	cout << "You will need " << flourBatch << " cups of flour." << endl;

// 14. Celsius to Fahrenheit
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double tempCelsius = 0;
	double tempFahrenheit = 0; 

	// Ask the user to input a Celsius temperature
	cout << "Enter a temperature in degrees Celsius: ";
	cin >> tempCelsius;
	
	// Calculations
	tempFahrenheit = (tempCelsius * (9.0 / 5.0)) + 32;

	// Display a Fahrenheit temperature
	cout << "The temperature is " << tempFahrenheit << " degrees Fahrenheit." << endl;

// 15. Currency
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	const double YEN_PER_DOLLAR = 110.33;
	const double EUROS_PER_DOLLAR = 0.85;
	double dollar = 0;
	double yen = 0;
	double euro = 0;

	// Ask the user how many dollars to convert
	cout << "How many dollars would you like to convert? $";
	cin >> dollar;

	// Calculations
	yen = dollar * YEN_PER_DOLLAR;
	euro = dollar * EUROS_PER_DOLLAR;

	// Display how many euros or yen user would receive
	cout << "You would receive " << yen << " yen for your " << dollar
		<< " dollars or " << euro << " euros for your " << dollar << " dollars." << endl;

// 16. Monthly Sales Tax
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	string monthA = "month";
	int yearA = 0;
	double totalSalesA = 0;
	double const STATE_SALES_TAXA = 0.04;
	double const COUNTY_SALES_TAXA = 0.02;
	double totalTaxA = 0;
	double totalSalesTaxA = 0;
	double productSalesA = 0;
	double stateSalesA = 0;
	double countySalesA = 0;

	totalTaxA = STATE_SALES_TAXA + COUNTY_SALES_TAXA;

	// Ask for month, year, and total amount collected at the register
	cout << "What is the month?: ";
	cin >> monthA;
	cout << "What is the year?: ";
	cin >> yearA;
	cout << "What is the total sales collected at the cash register?: $" ;
	cin >> totalSalesA;

	// Calculate total sales
	productSalesA = totalSalesA / (1.00 + STATE_SALES_TAXA + COUNTY_SALES_TAXA);

	// Calculate total sales tax
	totalSalesTaxA = productSalesA * totalTaxA; 

	// Calculate state sales tax
	stateSalesA = STATE_SALES_TAXA * productSalesA;	
	
	// Calculate county sales tax
	countySalesA = COUNTY_SALES_TAXA * productSalesA;

	// Display report
	cout << setw(6) << left << "Month: " << monthA << " " << yearA << endl;
	cout << setw(20) << left << "--------------------" << endl;
	cout << setw(20) << left << "Total Collected: " << "$" << fixed << showpoint << setprecision(2) 
		<< totalSalesA << endl; 
	cout << setw(20) << left << "Sales: " << "$" << fixed << showpoint << setprecision(2)
		<< productSalesA << endl;
	cout << setw(20) << left << "County Sales Tax: " << "$" << fixed << showpoint << setprecision(2)
		<< countySalesA << endl;
	cout << setw(20) << left << "State Sales Tax: " << "$" << fixed << showpoint << setprecision(2)
		<< stateSalesA << endl;
	cout << setw(20) << left << "Total Sales Tax: " << "$" << fixed << showpoint << setprecision(2)
		<< totalSalesTaxA << endl;

// 17. Property Tax
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double const ASSESSED_RATE = 0.60;
	double actualValue = 0;
	double assessedValue = 0;
	double currentTaxRateInput = 0;
	double currentTaxRateCalculated = 0;
	double calculatedPropertyTax = 0;

	// Ask user the actual value of property and tax rate
	cout << "What is the actual value of the property?: $";
	cin >> actualValue;
	cout << "What is the tax rate for each $100 of assessed value?: ";
	cin >> currentTaxRateInput;
	
	// Calculate the actual tax rate and the amount of the property tax charge
	currentTaxRateCalculated = currentTaxRateInput;
	assessedValue = actualValue * ASSESSED_RATE;
	calculatedPropertyTax = assessedValue * currentTaxRateCalculated;

	// Display property tax info
	cout << "The annual tax rate for the property is: $" << calculatedPropertyTax << endl;

// 18. Senior Citizen Property Tax
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double const ASSESSED_RATEA = 0.60;
	double actualValueA = 0;
	double assessedValueA = 0;
	double currentTaxRateInputA = 0;
	double currentTaxRateCalculatedA = 0;
	double calculatedPropertyTaxA = 0;
	double seniorDiscountA = 5000;
	double seniorAssessedValueA = 0;
	double seniorCalculatedTaxA = 0;
	double quarterlyPaymentA = 0;

	// Ask user the actual value of property and tax rate
	cout << "What is the actual value of the property?: $";
	cin >> actualValueA;
	cout << "What is the tax rate for each $100 of assessed value?: ";
	cin >> currentTaxRateInputA;
	
	// Calculate the actual tax rate and the amount of the property tax charge
	currentTaxRateCalculatedA = currentTaxRateInputA;
	assessedValueA = actualValueA * ASSESSED_RATEA;
	calculatedPropertyTaxA = assessedValueA * currentTaxRateCalculatedA;
	seniorAssessedValueA = assessedValueA - seniorDiscountA;
	seniorCalculatedTaxA = seniorAssessedValueA * currentTaxRateCalculatedA;
	quarterlyPaymentA = seniorCalculatedTaxA / 4.00;

	// Display property tax info
	cout << "The annual tax rate for the property is: $" << calculatedPropertyTaxA << endl;
	cout << "The senior tax rate for the property is: $" << seniorCalculatedTaxA << endl;
	cout << "The quarterly payment is: $" << quarterlyPaymentA << endl;	

// 19. Math Tutor
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	const int MIN_VALUE = 1;
	const int MAX_VALUE = 9;
	int number1;
	int number2;
	int answer = 0;
	int studentAnswer = 0;
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
	cout << "--" << endl;
	cin >> studentAnswer;

	cout << "Your answer was " << studentAnswer << endl;
	cout << "The correct answer is " << answer << endl;

// 20. Interest Earned
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double principal = 0;
	double interestRateEntered = 0;
	double interestRate = 0;
	double interestCompounded = 0;
	double amount = 0;
	double interest = 0;

	// User enters principal, interest rate, number of times the interest is compounded
	cout << "Enter the principal amount: $";
	cin >> principal;
	cout << "Enter the interest rate: ";
	cin >> interestRateEntered;
	cout << "Enter the number of times the interest is compounded: ";
	cin >> interestCompounded;

	// Calculations
	interestRate = interestRateEntered;
	amount = principal * pow((1 + (interestRate / interestCompounded)), interestCompounded);
	interest = amount - principal;
	
	// Display results
	cout << left << setw(20) << "Interest Rate: " << interestRate * 100 << "%" << endl;
	cout << left << setw(20) << "Times Compounded: " << interestCompounded << endl;
	cout << left << setw(20) << showpoint << setprecision(2) << fixed 
		<< "Principal: " << "$" << principal << endl;
	cout << left << setw(20) << showpoint << setprecision(2) << fixed
		<< "Interest: " << "$" << interest << endl;
	cout << left << setw(20) << showpoint << setprecision(2) << fixed
		<< "Final Balance: " << "$" << amount << endl;

// 21. Monthly Payments
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double loanAmount = 0;
	double monthlyInterestRateEntered = 0;
	double monthlyInterestRate = 0;
	double annualInterestRateEntered = 0;
	double annualInteresteRate = 0;
	double numberOfPayments = 0;
	double monthlyPayment = 0;
	double amountPaidBack = 0;
	double interestPaid = 0;	

	// User enters loan amount, monthly interest rate, number of payments
	cout << "Enter the loan amount: $";
	cin >> loanAmount;
	cout << "Enter the monthly interest rate: ";
	cin >> monthlyInterestRateEntered;
	cout << "Enter the number of payments: ";
	cin >> numberOfPayments;

	// Calculations
	monthlyInterestRate = monthlyInterestRateEntered;
	monthlyPayment = (monthlyInterestRate * pow((1 + monthlyInterestRate), numberOfPayments)) / 
		(pow((1 + monthlyInterestRate), numberOfPayments) - 1) * loanAmount;
	amountPaidBack = monthlyPayment * numberOfPayments;
	interestPaid = amountPaidBack - loanAmount;

	// Display results
	cout << left << setw(24) << fixed << showpoint << setprecision(2) << "Loan Amount: " 
		<< "$" << loanAmount << endl;
	cout << left << setw(24) << "Monthly Interest Rate: " << fixed << setprecision(0) << noshowpoint  
		<< monthlyInterestRateEntered << "%" << endl;
	cout << left << setw(24) << "Number of Payments: " << fixed << setprecision(0) << noshowpoint 
		<< numberOfPayments << endl;
	cout << left << setw(24) << fixed << showpoint << setprecision(2) << "Monthly Payment: " 
		<< "$" << monthlyPayment << endl;
	cout << left << setw(24) << fixed << showpoint << setprecision(2) << "Amount Paid Back: "
		<< "$" << amountPaidBack << endl;
	cout << left << setw(24) << fixed << showpoint << setprecision(2) << "Interest Paid: " 
		<< "$" << interestPaid << endl;

// 22. Pizza Slices
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double diameterOfPizza = 0;
	double radiusOfPizza = 0;
	double areaOfSlice = 14.125;
	double const PI = 3.14159;
	double areaOfPizza = 0;
	double slicesPerPizza = 0;

	// Prompt user for diameter of pizza
	cout << "What is the diameter of the pizza in inches?: ";
	cin >> diameterOfPizza;

	// Calculations
	radiusOfPizza = diameterOfPizza / 2.0;
	areaOfPizza = PI * radiusOfPizza * radiusOfPizza;
	slicesPerPizza = areaOfPizza / areaOfSlice;

	// Display results
	cout << "The number of slices of pizza for a " << diameterOfPizza << " inch pizza is: " 
		<< static_cast<int>(slicesPerPizza) << endl;

// 23. How Many Pizzas
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double diameterOfPizzaA = 0;
	double radiusOfPizzaA = 0;
	double areaOfSliceA = 14.125;
	double const PIA = 3.14159;
	double areaOfPizzaA = 0;
	double slicesPerPizzaA = 0;
	int numberAtPartyA = 0;
	double numberOfPizzasA = 0;
	int numberOfSlicesPerPersonA = 4;
	int numberOfSlicesNeededA = 0;

	// Prompt user for diameter of pizza
	cout << "What is the diameter of the pizza in inches?: ";
	cin >> diameterOfPizzaA;
	cout << "How many people will be attending the party?: ";
	cin >> numberAtPartyA;

	// Calculations
	radiusOfPizzaA = diameterOfPizzaA / 2.0;
	areaOfPizzaA = PIA * radiusOfPizzaA * radiusOfPizzaA;
	numberOfSlicesNeededA = numberOfSlicesPerPersonA * numberAtPartyA;
	slicesPerPizzaA = areaOfPizzaA / areaOfSliceA;
	numberOfPizzasA = round(numberOfSlicesNeededA / slicesPerPizzaA);

	// Display results
	cout << "The number of slices of pizza needed are: " << numberOfSlicesNeededA << endl;
	cout << "The number of pizzas that will need to be ordered will be: " << numberOfPizzasA << endl;

// 24. Angle Calculator
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double radians = 0;
	double sinx = 0;
	double cosx = 0;
	double tanx = 0;

	// Ask user to enter an angle in radians
	cout << "Please enter an angle in radians: ";
	cin >> radians;

	// Convert from radians to degrees
	sinx = sin(radians);
	cosx = cos(radians);
	tanx = tan(radians);

	// Display sin, cosin, and tangent of values
	cout << fixed << showpoint << setprecision(4);
	cout << "The sin x is: " << sinx << endl;
	cout << "The cos x is: " << cosx << endl;
	cout << "The tan x is: " << tanx << endl;

// 25. Stock Transaction Program
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int numberOfShares = 100;
	double pricePaidPerShare = 45.50;
	double priceSoldPerShare = 47.92;
	double commission = 0.02;
	double amountPaid = 0;
	double amountSold = 0;
	double commissionBought = 0;
	double commissionSold = 0;	
	double net = 0;

	// Calculations of paid, sold, commissions, net
	amountPaid = pricePaidPerShare * numberOfShares;
	commissionBought = amountPaid * commission;
	amountSold = priceSoldPerShare * numberOfShares;
	commissionSold = amountSold * commission;
	net = amountSold - amountPaid - commissionBought - commissionSold;

	// Display results of stock trades, commissions, net
	cout << setw(20) << showpoint << fixed << setprecision(2) << endl;
	cout << "Total Amount Paid for Stock: " << "$" << amountPaid << endl;
	cout << "Commission Paid When Bought: " << "$" << commissionBought << endl;
	cout << "Total Amount Sold for Stock: " << "$" << amountSold << endl;
	cout << "Commission Paid When Sold: " << "$" << commissionSold << endl;
	cout << "Profit or Loss: " << "$" << net << endl;

	return 0;
}
