#include <string>
#include "concert.h"
#include <vector>
#include <ctime>

/*
 * Default Concert Constructor
 */
Concert::Concert(){
	concertName = "";
	friends.push_back("");
	desire = 0;
	std::tm date = {};
	this->date = date;
};


/*
 * Customized Concert Constructor
 */
Concert::Concert( std::string concertName, std::vector<std::string> friends, int desire, std::tm date){

	this->concertName = concertName;
	this->friends = friends;
	this->desire = desire;
	this->date = date;
};


/*
 * Get's Concert's name
 */
std::string Concert::getConcertName() const{
	return concertName;
}


/*
 * Get's list of friends 
 */
std::vector<std::string> Concert::getFriends() const{
	return friends;
} 


/*
 * Get's desire to see concert
 */
int Concert::getDesire() const{
	return desire;
}


/*
 * Return's date of concert
 */
std::tm Concert::getDate() const{
	return date;
}


std::ostream& operator<<(std::ostream& os, const Concert& concert) {

	os << concert.getConcertName() << " " << concert.getDate().tm_mon + 1 << "/" << concert.getDate().tm_mday << "/" << concert.getDate().tm_year + 1900 << " Desire: " << concert.getDesire() << std::endl;

return os;
}


/*
 * overloads the < operator for sorting 
 */
bool Concert::operator<(const Concert& other) const {

	if(this->date.tm_year < other.date.tm_year)
		return true;
	if(this->date.tm_year > other.date.tm_year)
		return false;
	if(this->date.tm_mon < other.date.tm_mon)
		return true;
	if(this->date.tm_mon > other.date.tm_mon)
		return false;
	if(this->date.tm_mday > other.date.tm_mday)
		return true;
	if(this->desire > other.desire)
		return true;
	return false;
}




