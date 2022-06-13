#pragma once
#include<iostream>
class Cat
{
private:
	std::string name;
	std::string color;
	int age;
	double weight;
	bool is_hungry;
	int energy;

public:
	Cat ()
	{
		SetName("Becherovka");
		SetColor("green");
		SetAge(5);
		SetWeight(12.5);
		SetHungry(true);
		SetEnergy(50);
	}
	Cat(std::string n, std::string c)
	{
		SetName(n);
		SetColor(c);
		SetAge(4);
		SetWeight(4.5);
		SetHungry(true);
		SetEnergy(50);
	}
	Cat(int a,double w) 
	{
		SetName("Smurdyzk");
		SetColor("black");
		SetAge(a);
		SetWeight(w);
		SetHungry(true);
		SetEnergy(50);
	}
	Cat(bool h,int e)
	{
		SetName("Smurdyzk");
		SetColor("black");
		SetAge(9);
		SetWeight(3.5);
		SetHungry(h);
		SetEnergy(e);
	}
	void SetName(std::string Name);
	void SetColor(std::string Color);
	void SetAge(int Age);
	void SetWeight(double Weight);
	void SetHungry(bool Hungry);
	void SetEnergy(int Energy);
	std::string Get_Name()const;
	std::string Get_Color()const;
	int Get_Age()const;
	double Get_Weight()const;
	bool Get_Hungry()const;
	int Get_Energy()const;
	void Play(); 
	void Sleep();
	void Hunt();
	void Eating();
	void Speak();
	void Print();
	void Condition();
	void Print();
};