/************************************************************
 *
 * Basic class structure to store the information about a 
 * concert. It stores the date, the desire of how much you 
 * want to go, a list of friends that are going, and the name
 * of the concert.
 *
 ***********************************************************/


#ifndef concert
#define concert
#include <string>
#include <vector>
#include <ctime>
#include <iostream>

class Concert {
	
	private:
		std::string concertName;
		std::vector<std::string> friends;
		int desire;
		struct tm {
			int tm_mday;
			int tm_mon;
			int tm_year;
		};
		std::tm concertDate;

	public:
		Concert();
		
		Concert(std::string cName, std::vector<std::string> f, int desire, std::tm d);

		// getters
		std::string getConcertName();
		std::vector<std::string> getFriends();
		int getDesire();
		std::tm getDate();

		// setters
		void setConcertName(std::string cName);
		void setFriends(std::vector<std::string> f);
		void setDesire(int desire);
		void setDate(std::tm d);
		// overwrite the < operator so it can sort a vector of concerts
		bool operator<(const Concert& c) const;
		// overwrite the << operator so it can print out a Concert object
		friend std::ostream& operator<<(std::ostream& os, const Concert& c);
};

#endif
