#include <vector>
#include <ctime>
#include <algorithm>
#include <iostream>
#include "concert.h"

int main( int argc, char* argv[]){
	
/*
 * Creates 2 vectors of different friends
 */
	std::vector<std::string> coolDudes = {"Bob", "Ross"};
 
	std::vector<std::string> badDudes = {"George", "Thorogood"};



/*
 * Creates 10 different dates for concerts
 */
	std::tm date1;
	date1.tm_year = 117;
	date1.tm_mon = 1;
	date1.tm_mday = 3;


	std::tm date2;
	date2.tm_year = 117;
	date2.tm_mon = 2;
	date2.tm_mday = 3;


	std::tm date3;
	date3.tm_year = 117;
	date3.tm_mon = 2;
	date3.tm_mday = 4;


	std::tm date4;
	date4.tm_year = 117;
	date4.tm_mon = 5;
	date4.tm_mday = 3;


	std::tm date5;
	date5.tm_year = 117;
	date5.tm_mon = 9;
	date5.tm_mday = 13;


	std::tm date6;
	date6.tm_year = 117;
	date6.tm_mon = 6;
	date6.tm_mday = 20;


	std::tm date7;
	date7.tm_year = 117;
	date7.tm_mon = 1;
	date7.tm_mday = 3;

 
	std::tm date8;
	date8.tm_year = 117;
	date8.tm_mon = 10;
	date8.tm_mday = 31;


	std::tm date9;
	date9.tm_year = 118;
	date9.tm_mon = 11;
	date9.tm_mday = 4;


	std::tm date10;
	date10.tm_year = 119;
	date10.tm_mon = 12;
	date10.tm_mday = 3;


/*
 * Creates 10 concerts
 */
	Concert c1("Muse", coolDudes,10, date1); 
	Concert c2("The Cowmen", coolDudes,10, date2); 
	Concert c3("Pink Floyd", coolDudes,10, date3); 
	Concert c4("The Pretty Reckless", coolDudes,10, date4); 
	Concert c5("Brusht One String", coolDudes,10, date5); 
	Concert c6("Kanye West", coolDudes,10, date6); 
	Concert c7("Gojira", coolDudes,10, date7); 
	Concert c8("The Who", coolDudes,10, date8); 
	Concert c9("The Avalanches", coolDudes,1, date9); 
	Concert c10("Rascal Flatts", badDudes,10, date10);


/*
 * creates a vector of concerts 
 */
	std::vector<Concert> Concerts;
	Concerts.push_back(c1); 
	Concerts.push_back(c2); 
	Concerts.push_back(c3); 
	Concerts.push_back(c4); 
	Concerts.push_back(c5); 
	Concerts.push_back(c6); 
	Concerts.push_back(c7); 
	Concerts.push_back(c8); 
	Concerts.push_back(c9); 
	Concerts.push_back(c10);
 	


/*
 * Sorts the Concerts 
 */
	std::cout << std::endl;
	std::cout <<"Original";
	std::cout << std::endl;


	for(int i= 0; i < 10; ++i) {
		std::cout << Concerts[i];
	}


	std::cout << std::endl;
	std::cout << "Final";
	std::cout << std::endl;
	
	std::sort(Concerts.begin(), Concerts.end());

	for(int i = 0; i < 10; ++i) {
		std::cout << Concerts[i];
	}

	std::cout << std::endl;
	
	return 0;



 
}	
