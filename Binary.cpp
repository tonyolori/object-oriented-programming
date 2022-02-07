#include<iostream>
#include<string>
#include "Binary.h"
#include<algorithm>
	Binary::Binary(){
	}
	
	Binary::Binary(int decimal){
		
		bin.clear();
		
		for(int i=0; decimal>0; i++){  
			//convert to decimal then store as a char by adding 48('0') 
			bin.push_back(char (decimal%2 + 48) ); 
			decimal= decimal/2;  
		}
		
		std::reverse(bin.begin(),bin.end());
		
	}


	void Binary::Invert(){
		
		for (auto &c: bin){
			if(c == 48)// if equal to 0
				c=49;// set to 1
			else if(c == 49)
				c=48;//set to 0
		}
      	
	}
	
	

	void Binary::Print(){

		std::cout<<bin<<std::endl;
	}
	
	int Binary::CountSet(){
		int n=0;
		for (auto const c: bin){
			if (c== 49)// if equal to 1
				n++;
		}
		return n;
	}
	
	int Binary::FirstSet(){
		for (int i = bin.length() - 1; i >= 0; i--) {
			//std::cout<<i+1;
        	if (bin[i]== 49)
        		return i+1;
        	}
        return -1;
	}
	
	int Binary::TotalBits(){
		for (int i = 0; i !=bin.length(); i++) {
			//std::cout<<i+1;
        	if (bin[i]== 49)//if equal to 1 return i
        		return i;
        			
        	}
        return -1;
	}
	
	void Binary::Set(int index){
		while(bin.length() < index ){
			bin.push_back(48);
		}
		
		bin[index-1]=49;
	}
	
	int Binary::Length(){
		return bin.length();
	}
	
	void Binary::Clear(){
		bin.clear();
	}
	
	void Binary::Clear(int index){
		while(bin.length() < index ){
			bin.push_back(48);
		}
		bin[index -1]=48;
	}
		
	




