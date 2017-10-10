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


bool operator<(const Concert& other) const;

private:

std::string concertName;
std::vector<std::string> friends;
int desire;
std::tm date;
};

std::ostream& operator<<(std::ostream& os, const Concert& concert);
