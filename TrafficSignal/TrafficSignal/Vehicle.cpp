#include "stdafx.h"
#include "Vehicle.h"


Vehicle::Vehicle(TrafficSignal  *mod, int div)
{
	model = mod;
	denom = div;
	// 4. Observers register themselves with the Subject
	model->attach(this);
}

TrafficSignal * Vehicle::getSubject() 
{
	return model;
}

int Vehicle:: getDivisor() 
{
	return denom;
}



Car::Car(TrafficSignal * signal):Vehicle(signal,0)
{
}

void Car::Update()
{
    int signal = model->getVal();
	
	if(signal ==1)
	{
		MoveAhead();
		model->DetachObserver(this);
	} 
	else if(signal ==0 )
	{
		Stop();
	}

}

void Car::MoveAhead()
{

}

void Car::Stop()
{

}
