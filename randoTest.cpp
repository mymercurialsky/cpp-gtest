/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"

/*  
	FUNCTIONS WE NEED TO TEST:

	bool shouldWorry(bool,bool,bool);
	bool isDivisbleBy(int,int);
	bool isPrime(int);
	int nearestToZero(int,int);
*/
 
class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(RandoTest, allChildrenSmile)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true,true,true) );
}

// Four is divisible by two
TEST(RandoTest, fourDivisibleByTwo)
{
	Rando rando;
	ASSERT_TRUE( rando.isDivisbleBy(4,2) );
}

// Three is not divisible by two
TEST(RandoTest, threeNotDivisibleByTwo)
{
	Rando rando;
	ASSERT_FALSE( rando.isDivisbleBy(3,2) );
}

// 18 and 3 should pass
TEST(RandoTest, threeNotDivisibleByEighteen)
{
	Rando rando;
	ASSERT_TRUE( rando.isDivisbleBy(3,18) );
}

// You can't divide by zero
TEST(RandoTest, divideByZero)
{
  bool exceptionThrown;
  
	Rando rando;
  try
  {
	ASSERT_FALSE( rando.isDivisbleBy(3,0) );
  }
  catch (int ex){
    if (ex == -1) exceptionThrown = true;
  }
  
  ASSERT_TRUE(exceptionThrown);
}



// One is closer to zero than four
TEST(RandoTest, oneIsNearestToZero)
{
  Rando rando;
	ASSERT_EQ (1, rando.nearestToZero(1,4));
}

// Negative one is closer to zero than negative three
TEST(RandoTest, negativeOneIsNearestToZero)
{
  Rando rando;
	ASSERT_EQ (-1, rando.nearestToZero(-3,-1));
}

// 17 is a prime number
TEST(RandoTest, seventeenIsPrime)
{
  Rando rando;
	ASSERT_TRUE(rando.isPrime(17));
}

// One is not a prime number
TEST(RandoTest, oneIsNotPrime)
{
  Rando rando;
	ASSERT_FALSE(rando.isPrime(1));
}

// 479 is a prime number
TEST(RandoTest, 479IsPrime)
{
  Rando rando;
	ASSERT_TRUE(rando.isPrime(479));
}

// 477 is not a prime number
TEST(RandoTest, 477IsNotPrime)
{
  Rando rando;
	ASSERT_FALSE(rando.isPrime(477));
}

// 7919 is a prime number
TEST(RandoTest, 7919IsPrime)
{
  Rando rando;
	ASSERT_TRUE(rando.isPrime(7919));
}