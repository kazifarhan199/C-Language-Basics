#include <iostream>

int main() {
	// 'void' pointers mean we don't care for the datatyper we just want the address
			// void* pointer = 0;
			// void* pointer = NULL;
			// void* pointer = nullptr;

	int var = 8;
	
	int* ptr2 = &var;

	// if 
	// int* a, b ;
	// "a" is a pointer but "b" is not a poinetr

	//We cant use ptr hear because compiler dosent know its data type 
	//(so it can guess weather it is int char or float)
	// Saying *(pointer) is called derefrensing it
	
	*ptr2 = 10;
	std::cout << var;
	
	// double ptr2 = (double*)&var; 
}

// Adding to a pointer will add bytes to its 
// position depending on what type of pointer it is 

// Change type of pointer
// (* char)ptr
