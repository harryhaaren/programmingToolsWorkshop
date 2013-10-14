
#ifndef TESTS_H
#define TESTS_H

#include <stdio.h>

static int testsPassed;
static int testsFailed;

static void TEST_EQUALS( int x, int y )
{
  if ( x == y )
  {
    testsPassed++;
  }
  else
  {
    testsFailed++;
  }
}

static void TEST_PRINT_RESULTS()
{
  
  printf("Results:\n\tPassed: %i\n\tFailed: %i\n\n", testsPassed, testsFailed );
}

#endif

