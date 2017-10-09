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
		bool operator<(const Concert& c) const;
		friend std::ostream& operator<<(std::ostream& os, const Concert& c);
};

#endif
