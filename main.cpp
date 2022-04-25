#include <iostream>

int main()
{
	int num_small_rooms;
	int num_large_rooms;

	std::cout << "Hello, welcome to Frank's Carpet Cleaning Service\n" << std::endl;
	std::cout << "How many small rooms would you like to be cleaned? ";
	std::cin >> num_small_rooms;
	std::cout << "How many large rooms would you like to be cleaned? ";
	std::cin >> num_large_rooms;

    const int expiry {15};
	const double tax_rate {6.0};
	const double cost_small_room {25};
	const double cost_large_room {35};

	std::cout << "\nEstimate for carpet cleaning service\n";
	std::cout << "Number of small rooms: " << num_small_rooms << std::endl;
	std::cout << "Number of large rooms: " << num_large_rooms << std::endl;
	std::cout << "Price per small room: $" << cost_small_room << std::endl;
	std::cout << "Price per large room: $" << cost_large_room << std::endl;

	double subtotal = num_small_rooms * cost_small_room + num_large_rooms * cost_large_room;
	double tax = subtotal * tax_rate / 100;

	std::cout << "Cost: $" << subtotal << std::endl;
	std::cout << "Tax: $" << tax << std::endl;
	std::cout << "=========================================================" << std::endl;
	std::cout << "Total estimate: $" << subtotal + tax << std::endl;
	std::cout << "This estimate is valid for " << expiry << " days\n";
	return 0;

}