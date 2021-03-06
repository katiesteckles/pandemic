//#include <iostream>
#include "mapClass.h"

using namespace std;

int main() {
	mapClass gameMap;
	string filename = "Cities_test.txt";	// name of file containing map information

	cout << gameMap.getNumberofCities() << endl;			// outputs number of cities in map before populate function
	
	cout << "Populating map from file." << endl;
	gameMap.populateMap(filename);
	cout << "Finished populating map."  << endl;

	cout << gameMap.getNumberofCities() << endl << endl;;	// outputs number of cities in map after populate function

/*
	// Used for testing setting infected levels and function for checking if isInfected changes properly
	gameMap.worldMap[13].setInfectedBlack(1);
	gameMap.worldMap[24].setInfectedBlue(2);
	gameMap.worldMap[35].setInfectedRed(3);
	gameMap.worldMap[46].setInfectedYellow(1);
*/

	// test of searching map for city and returning city info
	cityClass* currentCity = gameMap.locateCity("Montreal");
	if(currentCity != NULL) {
		// cout << currentCity->getCityName() << endl;
		currentCity->setInfectedBlue(3);
	}

/*
	// outputs cities in map - how to access information contained in each city
	for(int i = 0; i < gameMap.getNumberofCities(); i++) {
		cout << "City:   " << gameMap.worldMap[i].getCityName()			<< endl;
		cout << "Color:  " << gameMap.worldMap[i].getCityColor()		<< endl;
		cout << "Pop:    " << gameMap.worldMap[i].getPopulation()		<< endl;
		cout << "Black:  " << gameMap.worldMap[i].getInfectedBlack()	<< endl;
		cout << "Blue:   " << gameMap.worldMap[i].getInfectedBlue()		<< endl;
		cout << "Red:    " << gameMap.worldMap[i].getInfectedRed()		<< endl;
		cout << "Yellow: " << gameMap.worldMap[i].getInfectedYellow()	<< endl;
		cout << "IsInf:  " << gameMap.worldMap[i].getInfected()			<< endl;
		cout << "HasSta: " << gameMap.worldMap[i].getResearchStation()	<< endl;

		vector<string> cityList(gameMap.worldMap[i].getAdjCity());
		cout << "Adj:    " << cityList[0] << endl;
		for(size_t i = 1; i < cityList.size(); i++) {
			cout << "        " << cityList[i] << endl;
		}
		cout << endl;
	}
*/

	// test of infectedList formatted output
	cout << endl << gameMap.infectedList() << endl;
	
	cout << "Press any key to exit.";
	cin.get();

	return 0;
}
