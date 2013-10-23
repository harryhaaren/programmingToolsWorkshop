
#include <stdio.h>

#include "test.h"

int main()
{
  printf("Running tests...\n");
  
  TEST_EQUALS(4, 5);
  TEST_EQUALS(4, 7);
  TEST_EQUALS(7, 7);
  TEST_EQUALS(28, 27);
  
  TEST_PRINT_RESULTS();
  
  return 0;
}

