//
//  TestDegreeFunctions.c
//  Playing with Unity
//
//  Created by ac7391 on 2013-10-29.
//
//

#include "unity.h"
#include "../src/DegreeFunctions.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_DegreeSum_Should_NotBeZero(void)
{
	TEST_ASSERT_FALSE(DegreeSum(10, 10)==0);
}


void test_DegreeSum_Should_HandleSomeEasyNumbersThatAreInRange(void)
{
    TEST_ASSERT_EQUAL_INT(0, DegreeSum(0, 0));
    TEST_ASSERT_EQUAL_INT(132, DegreeSum(55, 77));
    TEST_ASSERT_EQUAL_INT(358, DegreeSum(350, 8));
}



void test_DegreeSum_Should_HandleSomeWeirdNumbers(void)
{
    TEST_ASSERT_EQUAL_INT(0, DegreeSum(-33, 33));
    TEST_ASSERT_EQUAL_INT(180, DegreeSum(-180, 0));
    TEST_ASSERT_EQUAL_INT(2, DegreeSum(360, 2));
}