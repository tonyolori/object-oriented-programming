#pragma once

#include<iostream>
#include<string>


	class Binary{
		public:
			
		Binary();
		Binary(int);
		
		std::string get_bin(){
		return bin;
		}
		
		void Invert();
		void Print();
		int CountSet();
		int FirstSet();
		int TotalBits();
		void Set(int);
		int Length();
		void Clear();
		void Clear(int);

		
		std::string bin;
	};
	




