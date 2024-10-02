
#include "StopWatch.h"


bool ReStart(StopWatch& In) {
	In.S = StopWatch::Clock::now();
	In.E = In.S;
	return true;
}

bool Start(StopWatch& In) {
	In.S = StopWatch::Clock::now();
	In.E = In.S;
	return true;
}
bool Reset(StopWatch& In) {
	In.S = StopWatch::Clock::now();
	In.E = In.S;
	return true;
}
template<class T>
T elapsed(StopWatch& In) {
	return std::chrono::duration_cast<T>(StopWatch::Clock::now() - In.S);
}
bool Stop(StopWatch& In) {
	In.E = StopWatch::Clock::now();
	return true;
}

bool NanoSleep(std::chrono::nanoseconds N) {
	std::this_thread::sleep_for(N);
	return true;
}

template<class T,class U>
T ChangeMetric(const U& In) {
	return std::chrono::duration_cast<T>(In);
}