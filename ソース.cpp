#include <iostream>

#include "StopWatch.h"

int main() {
	StopWatch SW;

	Start(SW);
	//auto A = ChangeMetric<std::chrono::milliseconds>(std::chrono::duration_cast<std::chrono::seconds(3));
	std::cout << "Hage" << std::endl;
	NanoSleep({ std::chrono::seconds(3)});
	std::cout << "hoge" << std::endl;
	
	return 0;
}