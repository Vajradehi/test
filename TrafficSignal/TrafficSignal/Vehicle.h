#pragma once
class Vehicle
{
protected:
	TrafficSignal  *model;
    int denom;
  public:
    Vehicle(TrafficSignal  *mod, int div);
	
    virtual void update() = 0;
	virtual void MoveAhead() =0;
	virtual void Stop() =0;
  protected:
    TrafficSignal * getSubject(); 
    int getDivisor();
};

class Car:public Vehicle
{
	public:
		Car(TrafficSignal * signal);
	
		void Update();
     	
		void MoveAhead();

		void Stop();
		
};