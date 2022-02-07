#include<iostream>
#include<string>
#include "Binary.cpp"


int main(int argc, char** argv) {
	
	Binary a(9);
	std::cout<<"before inversion"<<std::endl;
	a.Print();
	a.Invert();
	std::cout<<"after inversion"<<std::endl;
	a.Print();
	
	std::cout<<"The number of 1s"<<std::endl;
	std::cout<<a.CountSet();
	
	std::cout<<"first position of a 1 "<<a.FirstSet()<<std::endl;

	a.Print();
	std::cout<<"its length before the set function: "<<a.Length()<<std::endl;
	a.Set(4);
	std::cout<<"After setting position 4 "<<std::endl;
	a.Print();

	std::cout<<"before clearing position 2"<<std::endl;
	a.Print();
	a.Clear(2);
	std::cout<<"after clearing position 2"<<std::endl;
	a.Print();

	return 0;
}
