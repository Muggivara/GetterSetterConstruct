#include "Cat.h"
int main()
{
	Cat cat;
	cat.SetAge(10);
	cat.SetColor("red");
	cat.SetEnergy(50);
	cat.SetHungry(true);
	cat.SetName("Becherovka");
	cat.SetWeight(7.5);
	std::cout << cat.Get_Name() << "\n";
	std::cout << cat.Get_Color() << "\n";
	std::cout << cat.Get_Age() << "\n";
	std::cout << cat.Get_Weight() << "\n";
	std::cout << cat.Get_Hungry() << "\n";
	std::cout << cat.Get_Energy() << "\n";

	Cat x;
	std::cout << x.Get_Name() << "\n";
	std::cout << x.Get_Color() << "\n";
	std::cout << x.Get_Age() << "\n";
	std::cout << x.Get_Weight() << "\n";
	std::cout << x.Get_Hungry() << "\n";
	std::cout << x.Get_Energy() << "\n";

	Cat y(6,2.5);
	std::cout << y.Get_Name() << "\n";
	std::cout << y.Get_Color() << "\n";
	std::cout << y.Get_Age() << "\n";
	std::cout << y.Get_Weight() << "\n";
	std::cout << y.Get_Hungry() << "\n";
	std::cout << y.Get_Energy() << "\n";

	Cat z(false, 60);
	std::cout << z.Get_Name() << "\n";
	std::cout << z.Get_Color() << "\n";
	std::cout << z.Get_Age() << "\n";
	std::cout << z.Get_Weight() << "\n";
	std::cout << z.Get_Hungry() << "\n";
	std::cout << z.Get_Energy() << "\n";



	void Play();
	void Sleep();
	void Hunt();
	void Eating();
	void Speak();
	void Print();
	void Condition();
	void Print();
}