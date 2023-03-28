#include "Array.hpp"

int	main()
{
	try {
		Array<int>	arr;

		std::cout << "Size is " << arr.size() << std::endl;

	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n-----------------------------------\n" << std::endl;

	try {
		Array<int>	arr(5);

		for ( unsigned int i = 0; i < arr.size(); i++) {
			arr[i] = i;
			std::cout << "idx " << i << ": " << arr[i] << std::endl;
		}
		std::cout << "Size is " << arr.size() << std::endl;

		arr[-1] = 1;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n-----------------------------------\n" << std::endl;

	try {
		Array<int>	arr1(5);
		Array<int>	arr2(6);

		for ( unsigned int i = 0; i < arr1.size(); i++) {
			arr1[i] = i + 1;
			std::cout << "arr1's idx " << i << ": " << arr1[i] << std::endl;
		}

		std::cout << "Size is " << arr2.size() << std::endl;
		arr2 = arr1;

		for ( unsigned int i = 0; i < arr2.size(); i++) {
			std::cout << "arr2's idx " << i << ": " << arr2[i] << std::endl;
		}
		std::cout << "Size is " << arr2.size() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n-----------------------------------\n" << std::endl;

	try {
		Array<int>	arr1(5);

		for ( unsigned int i = 0; i < arr1.size(); i++) {
			arr1[i] = i + 10;
			std::cout << "arr1's idx " << i << ": " << arr1[i] << std::endl;
		}

		Array<int>	arr2(arr1);

		for ( unsigned int i = 0; i < arr2.size(); i++) {
			std::cout << "arr2's idx " << i << ": " << arr2[i] << std::endl;
		}
		std::cout << "Size is " << arr2.size() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n-----------------------------------\n" << std::endl;

	try {
		Array<std::string>	arr1(5);

		arr1[4] = "Hola!";

		for ( unsigned int i = 0; i < arr1.size(); i++) {
			std::cout << "arr1's idx " << i << ": " << arr1[i] << std::endl;
		}

		Array<std::string>	arr2(6);

		arr2 = arr1;
		for ( unsigned int i = 0; i < arr2.size(); i++) {
			std::cout << "arr2's idx " << i << ": " << arr2[i] << std::endl;
		}

		arr2[2] = "Error";
		for ( unsigned int i = 0; i < arr1.size(); i++) {
			std::cout << "arr1's idx " << i << ": " << arr1[i] << std::endl;
		}
		for ( unsigned int i = 0; i < arr2.size(); i++) {
			std::cout << "arr2's idx " << i << ": " << arr2[i] << std::endl;
		}

		arr2[5];
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n-----------------------------------\n" << std::endl;
	//system("leaks array");
}
