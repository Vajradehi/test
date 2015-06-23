// TrafficSignal.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "Vehicle.h"
using namespace std;





void TrafficSignal::attach(Vehicle  *obs) 
{
	observers.push_back(obs);
}

void TrafficSignal::setVal(int val)
{
	value = val;
	notify();
}
int TrafficSignal::getVal() 
{
	return value;
}

void TrafficSignal::DetachObserver(Vehicle * vehicle)
{
	observers.erase( std::remove(observers.begin(),observers.end(),vehicle),observers.end());
}

void TrafficSignal::notify()
{
	// 5. Publisher broadcasts
	for (size_t i = 0; i < observers.size(); i++)
		observers[i]->update();
}



int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

