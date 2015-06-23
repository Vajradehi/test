// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"
#include<vector>
#include <stdio.h>
#include <tchar.h>
class Vehicle;
using namespace std;

class TrafficSignal
{
	std::vector<Vehicle*> observers;
    int value; 
public:
	void attach(Vehicle  *obs); 
	
    void setVal(int val);
	
    int getVal(); 
	
    void	DetachObserver(Vehicle * vehicle);
	
	void notify();
	

	

};





// TODO: reference additional headers your program requires here
