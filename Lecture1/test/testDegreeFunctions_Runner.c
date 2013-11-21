//
//  testDregreeFunctions_Runner.c
//  Playing with Unity
//
//  Created by ac7391 on 2013-10-29.
//
//

#include <setjmp.h>
#include <stdio.h>
#include "unity.h"
#include "testDegreeFunctions.h"

static void runTest(UnityTestFunction test)
{
    if (TEST_PROTECT())
    {
        setUp();
        test();
    }
    if (TEST_PROTECT() && !TEST_IS_IGNORED)
    {
        tearDown();
    }
}
void resetTest()
{
    tearDown();
    setUp();
}


int main(void)
{
    Unity.TestFile = "test/testDegreeFunctions.c";
    UnityBegin();
    
    // RUN_TEST calls runTest
    RUN_TEST(test_DegreeSum_Should_NotBeZero, 10);
	RUN_TEST(test_DegreeSum_Should_HandleSomeEasyNumbersThatAreInRange, 20);
RUN_TEST(test_DegreeSum_Should_HandleSomeWeirdNumbers, 30);
    
    UnityEnd();
    return 0;
}
