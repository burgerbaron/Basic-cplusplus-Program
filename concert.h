#include<string>
#include<iostream>
#include<ctime>
#include<vector>


class Concert {

public:

Concert();

Concert(std::string concertName, std::vector<std::string> friends, int desire, std::tm date);

/*
 * Getters
 */
std::string getConcertName() const;
std::vector<std::string>  getFriends() const;
int getDesire() const;
std::tm getDate() const;

/*
 * overload operator
 */
bool operator<(const Concert& other) const;

private:

// Who will be performing
std::string concertName;

// A list of the people you want
// to take with you. May be empty
// or arbitrarily full.
std::vector<std::string> friends;

// A value from 1-10 concerning how 
// badly you want to see this show.
int desire;

// The date of teh show
std::tm date;
};

std::ostream& operator<<(std::ostream& os, const Concert& concert);
