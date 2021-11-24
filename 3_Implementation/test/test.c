
#include "unity.h"
#include "function.h"


#define PROJECT_NAME    "HANDCRICKET"


void setUp()
{   

}

void tearDown()
{

}

void odd_or_even()
{
     int x=10;
     int n=0;
     TEST_ASSERT_EQUAL("Invalid", odd_or_even(n));
     TEST_ASSERT_EQUAL("Invalid", odd_or_even(x));
}

int main()
{
  UNITY_BEGIN();
  RUN_TEST(odd_or_even);
 
  return UNITY_END();
}
