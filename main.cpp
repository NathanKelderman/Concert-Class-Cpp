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

	Concert c("Bach", friends, 6, concertDate);

	concertDate.tm_year = 118;
        Concert cA("Bach1", friends, 6, concertDate);

	concertDate.tm_year = 117;
	concertDate.tm_mon = 11;
	Concert cB("Bach2", friends, 6, concertDate);

        concertDate.tm_mon = 10;
        Concert cC("Bach3", friends, 7, concertDate);




	concerts = {c, cA, cB, cC};

	std::random_shuffle ( concerts.begin(), concerts.end() );
	std::sort (concerts.begin(), concerts.end());

	for (auto& x : concerts)
		std::cout << x << std::endl;

	return 0;
}

