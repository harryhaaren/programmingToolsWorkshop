
#ifndef TESTS_H
#define TESTS_H

#include <stdio.h>

static int testsPassed;
static int testsFailed;

static void TEST_EQUALS( int x, int y )
{
  if ( x == y )
  {
    printf("Test %i:\t%i == %i: test passed!\n", testsPassed+testsFailed, x, y);
    testsPassed++;
  }
  else
  {
    printf("Test %i:\t%i != %i: test failed!\n", testsPassed+testsFailed, x, y);
    testsFailed++;
  }
}

static void TEST_PRINT_RESULTS()
{
  
  printf("Results:\n\tPassed: %i\n\tFailed: %i\n\n", testsPassed, testsFailed );
}

#endif

