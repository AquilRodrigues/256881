#include "unity.h"
#include "unity_internals.h"
#include "conversion.h"
#include <string.h>

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void test_induction_output(void)
{
  TEST_ASSERT_EQUAL(0,induction_output(0.31,1500,0.8,220,7));
  TEST_ASSERT_EQUAL(0,induction_output(0.31,1500,0.8,220,7));
}

void test_shunt_output(void)
{
    TEST_ASSERT_EQUAL(0,shunt_output(0.31,1500,210,7));
    TEST_ASSERT_EQUAL(0,shunt_output(0.31,1500,210,7));
}


int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_induction_output);
  RUN_TEST(test_shunt_output);
  


  /* Close the Unity Test Framework */
  return UNITY_END();
}