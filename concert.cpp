#include "concert.h"
#include <string>
#include <vector>
#include <ctime>
#include <iostream>

Concert::Concert(){
	concertName = "None";
	friends.empty();
	desire = 0;
	concertDate.tm_mday = 1;
	concertDate.tm_mon = 1;
	concertDate.tm_year = 0;
}


Concert::Concert(std::string cName, std::vector<std::string> f, int desire, std::tm d) {
	this->concertName = cName;
	this->friends = f;
	this->desire = desire;
	this->concertDate = d;
}

// getters
std::string Concert::getConcertName() {
	return concertName;
}

std::vector<std::string> Concert::getFriends() {
	return friends;

}
int Concert::getDesire() {
	return desire;
}

std::tm Concert::getDate() {
	return concertDate;
}

// setters
void Concert::setConcertName(std::string cName) {
	concertName = cName;
}

void Concert::setFriends(std::vector<std::string> f) {
	friends = f;
}

void Concert::setDesire(int d) {
	desire = d;
}

void Concert::setDate(std::tm d) {
	concertDate = d;
}

bool Concert::operator<(const Concert& c) const{
	
	if ( concertDate.tm_year < c.concertDate.tm_year)
		return true;
	if ( concertDate.tm_year > c.concertDate.tm_year)
                return false;
	if ( concertDate.tm_mon < c.concertDate.tm_mon)
                return true;
	if ( concertDate.tm_mon > c.concertDate.tm_mon)
                return false;
	if ( concertDate.tm_mday < c.concertDate.tm_mday)
                return true;
	if ( concertDate.tm_mday > c.concertDate.tm_mday)
                return false;
	if ( desire > c.desire )
		return true;
	return false;
}

std::ostream& operator<<(std::ostream& os, const Concert& c) {
	os << "Concert name: " << c.concertName << "\nConcert date: " << c.concertDate.tm_mon << "/" << c.concertDate.tm_mday << "/" << (c.concertDate.tm_year+1900);
	return os;
}
