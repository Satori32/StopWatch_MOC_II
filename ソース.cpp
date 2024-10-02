#include <iostream>

#include "StopWatch.h"

int main() {
	StopWatch SW;

	Start(SW);
	//auto A = ChangeMetric<std::chrono::milliseconds, std::chrono::seconds>({ 3 });
	NanoSleep({ std::chrono::seconds(3)});
	std::cout << "hoge" << std::endl;
	
	return 0;
}