/***************************************************************
 *
 * Main function that creates 10 concert objects with varying 
 * dates and desires and places them into a vector of type
 * Concert and sorts them and prints them out.
 *
 **************************************************************/


#include "concert.h"
#include <string>
#include <vector>
#include <iostream>
#include <ctime>
#include <algorithm>

int main() {

	std::vector<Concert::Concert> concerts;

	std::vector<std::string> friends = {"Rupert", "Zach"};
	tm concertDate;
	concertDate.tm_mday = 10;
	concertDate.tm_mon = 10;
	concertDate.tm_year = 117;

	Concert c("Bach", friends, 7, concertDate);

	concertDate.tm_year = 118;
        Concert cA("Beethoven", friends, 6, concertDate);

	concertDate.tm_year = 117;
	concertDate.tm_mon = 11;
	Concert cB("Handel", friends, 6, concertDate);

        concertDate.tm_mon = 4;
	concertDate.tm_mday = 15;
        Concert cC("Chopin", friends, 7, concertDate);

        concertDate.tm_year = 116;
        Concert cD("Brahms", friends, 7, concertDate);

        concertDate.tm_mon = 10;
	concertDate.tm_mday = 10;
	concertDate.tm_year = 117;
        Concert cE("Hayden", friends, 7, concertDate);

        concertDate.tm_mon = 11;
        Concert cF("Tchaikovsky", friends, 7, concertDate);

        concertDate.tm_mon = 9;
        Concert cG("Vivaldi", friends, 7, concertDate);

        concertDate.tm_mon = 10;
        Concert cH("Schubert", friends, 8, concertDate);

        concertDate.tm_mon = 10;
        Concert cI("Strauss", friends, 6, concertDate);


	concerts = {c, cA, cB, cC, cD, cE, cF, cG, cH, cI};
	
	// shuffles the vector of Concerts to ensure that the sort actually works
	std::random_shuffle ( concerts.begin(), concerts.end() );
	
	// sorts the vector of Concerts
	std::sort (concerts.begin(), concerts.end());
	
	std::cout << "Concert Name\tDate\t\tDesire" << std::endl;
	
	// prints out all the names, dates, and desires of each instance
	for (auto& x : concerts) {
		std::cout << "---------------------------------------" << std::endl;
		std::cout << x << std::endl;
	}

	return 0;
}

