#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include<repetition.h>
#include<iostream>

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

//factorial function test
int mainFactorial() 
{
//TEST CASE 1
	int result1 = factorial(3);
	assert(result1 == 6);

//TEST CASE 2
	int result2 = factorial(5);
	assert(result2 == 120);

//TEST CASE 3
	int result3 = factorial(6);
	assert(result3 == 720);

	std::cout << "All factorial tests passed!" << std::ends;

	return 0;
}

//gcd function test


int mainGcd()
{
//TEST CASE 1
	int result1 = gcd(5, 15);
	assert(result1 == 5);

//TEST CASE2 
	int result2 = gcd(21, 28);
	assert(result2 == 7);

//TEST CASE 3
	int result3 = gcd(25, 100);
	assert(result3 == 25);

	std::cout << "All gcd tests passed!" << std::ends;

	return 0;
}