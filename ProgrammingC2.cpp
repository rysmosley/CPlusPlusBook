// Programming Challenges for Chapter 2
// Rebecca Mosley
// May 28, 2018

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;

int main()
{
	string border = "*******************************************************";
	int problemNo = 0;

	cout << endl << border << endl;
	cout << "C++ Early Objects" << endl;
	cout << "by Gaddis, Walters, and Muganda" << endl;
	cout << "----------------------------------" << endl;
	cout << "Programming Challenges: Chapter 2 " << endl;
	cout << "Completed by: RYS Mosley" << endl;
	cout << border << endl << endl;

// 1. Sum of Two Numbers
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int a = 50,
	    b = 100,
	    total = 0;

	total = a + b;

	cout << "The total of a + b is: " << total << endl;

// 2. Sales Prediction
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double totalSales = 8600000;
	double eastCoastSalesPercentage = 0.58;
	double eastCoastSalesTotal = 0;

	eastCoastSalesTotal = eastCoastSalesPercentage * totalSales;

	cout << "East Coast Sales totals equals: " << eastCoastSalesTotal 
	<< endl;

// 3. Sales Tax
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double price = 95,
	    stateTax = 0.065,
	    countyTax = 0.02,
	    totalTax = 0;

	totalTax = price * (stateTax + countyTax);
	cout << "The total tax is: " << totalTax << endl;
	cout << "The state tax is: " << stateTax << endl;
	cout << "The county tax is: " << countyTax << endl;

// 4. Restaurant Bill
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double meal = 44.50,
	    tax = 0.0675,
	    tip = 0.15,
	    taxAmount = 0,
	    tipAmount = 0,
	    mealTotal = 0;

	// Calculations
	taxAmount = meal * tax;
	tipAmount = (taxAmount + meal) * tip;
	mealTotal = meal + taxAmount + tipAmount;	

	cout << "Meal cost: " << meal << endl;
	cout << "Tax amount: " << taxAmount << endl;
	cout << "Tip amount: " << tipAmount << endl;
	cout << "Meal total: " << mealTotal << endl;

// 5. Miles per Gallon
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double gallons = 16,
	    miles = 312,
	    milesPerGallon = 0;

	milesPerGallon = miles / gallons;

	cout << "The car gets " << milesPerGallon << " miles per gallon." 
	<< endl;

// 6. Distance per Tank of Gas
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double gallonsTank = 20,
	    mpgCity = 23.5,
	    mpgHwy = 28.9,
	    distanceCity = 0,
	    distanceHwy = 0;

	distanceCity = gallonsTank * mpgCity;
	distanceHwy = gallonsTank * mpgHwy;

	cout << "The car gets " << distanceCity << " gallons in the city and "
	<< distanceHwy << " gallons on the highway. " << endl;

// 7. Number of Acres
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double acre = 43450,
	    feet = 0,
	    numAcres = 0;

	numAcres = (869 * 360) / acre;
	
	cout << "The number of acres in this tract is " << numAcres 
	<< " acres." << endl;

// 8. Land Calculation
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	// Using variables from above
	double meter = 10.7639,
	    metersPerAcre = 0,
	    halfAcre = 0;

	metersPerAcre = acre / meter;
	halfAcre = metersPerAcre / 2;

	cout << "There are " << halfAcre 
	<< " square meters in a half acre of land." << endl;

// 9. Circuit Board Price
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double boardPrice = 14.95,
	    profitMargin = 0.35,
	    totalPrice = 0;

	totalPrice = boardPrice + (boardPrice * profitMargin);

	cout << "The company should charge " << totalPrice 
	<< " in order to make a " << profitMargin * 100 
	<< " percent profit margin." 
	<< endl;

// 10. Personal Information
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	string name = "Rebecca Mosley", 
	    address = "1104 Elk Ridge Road", 
	    city = "Grangeville", 
	    state = "Idaho", 
	    zip = "83530", 
	    phone = "316.833.7474", 
	    major = "CS";

	cout << name << endl << address << endl 
	<< city << ", " << state << " " << zip << endl
	<< phone << endl << major << endl; 

// 11. Triangle Pattern
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	string line1 = "   *   ",
	    line3 = "  ***  ",
	    line5 = " ***** ",
	    line7 = "*******";

	cout << line1 << endl << line3 << endl << line5 << endl << line7 << endl;

// 12. Diamond Pattern
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	// Using variables from Triangle Pattern

	cout << line1 << endl << line3 << endl << line5 << endl << line7 << endl
	<< line5 << endl << line3 << endl << line1 << endl;

// 13. Pay Period Gross Pay
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double salary = 39000,
	    semimonthly = 24,
	    biweekly = 26, 
	    semiPay = 0,
	    biPay = 0;

	semiPay = salary / semimonthly;
	biPay = salary / biweekly;

	cout << "Semimonthly pay is $" << semiPay << " per pay period." << endl;
	cout << "Biweekly pay is $" << biPay << " per pay period." << endl; 

// 14. Basketball Player Height
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int height = 74,
	    hfeet = 0,
	    hinches = 0;

	hfeet = height / 12;
	hinches = height % 12;

	cout << "The player's height is " << hfeet << " feet and " << hinches
	<< " inches." << endl;

// 15. Stock Loss
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int shares = 750;
	double stockPriceBought = 35.00,
	    stockPriceSold = 31.15,
	    totalPaid = 0,
	    totalSold = 0,
	    totalLost = 0;

	totalPaid = shares * stockPriceBought;
	totalSold = shares * stockPriceSold;
	totalLost = totalPaid - totalSold;

	cout << "Total paid: $" << totalPaid << endl;
	cout << "Total sold: $" << totalSold << endl;
	cout << "Total lost: $" << totalLost << endl;

// 16. Energy Drink Consumption
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	int customers = 16500;
	double drinksPerWeek = 0.15,
	    citrusDrinks = 0.52,
	    numCustomersDrinks = 0,
	    numCustomersCitrus = 0;

	numCustomersDrinks = customers * drinksPerWeek;
	numCustomersCitrus = numCustomersDrinks * citrusDrinks;

	cout 
	<< "The number of customers who purchase one or more energy drinks per week: " 
	<< numCustomersDrinks << endl;
	cout 
	<< "The number of customers who purchase citrus flavored energy drinks: " 
	<< numCustomersCitrus << endl;

// 17. Past Ocean Levels
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double mmRisePerYear = 1.8,
		cmRisePerCentury = 0,
		inRisePerCentury = 0,
		mmToCM = 0.1,
		cmToMM = 10,
		cmToIN = 0.3937,
		century = 100;

	cmRisePerCentury = (mmRisePerYear * century) * mmToCM;
	cout << "Number of centimeters ocean levels rose in the last"
	<< " century: " << cmRisePerCentury << endl;

	inRisePerCentury = cmRisePerCentury * cmToIN;
	cout << "Number of inches ocean levels rose in the last" 
	<< " century: " << inRisePerCentury << endl; 

// 18. Future Ocean Levels
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double mmRecentRisePerYear = 3.1,
		cmRiseNext15 = 0,
		inRiseNext15 = 0;

	cmRiseNext15 = (mmRecentRisePerYear * 15) * mmToCM;
	cout << "Number of centimeters ocean levels are expected to rise " 
	<< "in the next fifteen years is: " << cmRiseNext15 << " centimeters." << endl;

	inRiseNext15 = cmRiseNext15 * cmToIN;
	cout << "Number of inches ocean levels are expected to rise " 
	<< "in the next fifteen years is: " << inRiseNext15 << " inches." << endl;


// 19. Annual High Temperatures
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double julyNYC = 85,
		julyDenver = 88,
		julyPhoenix = 106,
		upNYC = 0,
		upDenver = 0,
		upPhoenix = 0,
		rise = 1.02;

	upNYC = julyNYC * rise;
	upDenver = julyDenver * rise;
	upPhoenix = julyPhoenix * rise;

	cout << "Original July average for NYC: " << julyNYC << endl;
	cout << "Higher July average for NYC: " << upNYC << endl;
	cout << "Original July average for Denver: " << julyDenver << endl;
	cout << "Higher July average for Denver: " << upDenver << endl;
	cout << "Original July average for Phoenix: " << julyPhoenix << endl;
	cout << "Higher July average for Phoenix: " << upPhoenix << endl;


// 20. How Much Paint
	problemNo++;
	cout << endl << border << endl;
	cout << "Problem number: " << problemNo << endl;
	cout << border << endl;

	double sqftPerGallon = 340,
		fenceLength = 100,
		fenceHeight = 6,
		gallonsNeeded = 0;

	gallonsNeeded = (fenceLength * fenceHeight * 2) / sqftPerGallon;
	cout << "Gallons needed will be: " << gallonsNeeded << " gallons." << endl;
	
return 0;
}
