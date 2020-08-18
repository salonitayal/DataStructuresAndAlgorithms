#include<iostream>
#include<vector>
#include<algorithm> 

int main () 
{ 
	std::vector<int> vec { 10, 20, 30, 40 }; 
	
	// Iterator used to store the position 
	// of searched element 
	std::vector<int>::iterator it; 
	
	// Print Original Vector 
	std::cout << "Original vector :"; 
	for (int i=0; i<vec.size(); i++) 
		std::cout << " " << vec[i]; 
		
	std::cout << "\n"; 
	
	// Element to be searched 
	int ser = 30; 
	
	// std::find function call 
    int i = 0;
    for(auto it = vec.begin(); it != vec.end(); it++, ++i)
    {
        if(*it == ser)std::cout << "Find index w/o find: " <<i+1 << std::endl;
    }
    // Alternative way of finding index
	it = std::find (vec.begin(), vec.end(), ser); 
	if (it != vec.end()) 
	{ 
		std::cout << "Element " << ser <<" found at position : " ; 
		std:: cout << it - vec.begin() + 1 << "\n" ; 
	} 
	else
		std::cout << "Element not found.\n\n"; 
		
	return 0; 
} 
