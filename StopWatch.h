#pragma once
#include <iostream>
#include <chrono>
#include <thread>

struct StopWatch {
	typedef std::chrono::steady_clock Clock;
	Clock::time_point S = Clock::now();
	Clock::time_point E = S;
};

bool Start(StopWatch& In);
bool Reset(StopWatch& In);
template<class T> T elapsed(StopWatch& In);
bool Stop(StopWatch& In);
bool NanoSleep(std::chrono::nanoseconds N);
template<class T, class U> T ChangeMetric(const U& In);