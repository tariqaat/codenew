#include <stdio.h>
#include <assert.h>
#include "CUnit_Basic.h"
#include "calc_head.h"

           //ADDITION TEST CASE

void test_case1(void)
{
assert(calculator(1,3,3)==6);
 printf("\n addition of positive numbers ok\n");

assert(calculator(1,-3,-3)==-6);
 printf("\n addition of negative numbers ok\n");

assert(calculator(1,3,-2)==1);
 printf("\n addition of positive and negative ok\n");

 assert(calculator(1,3,0)==3);
 printf("\n addition of positive number and zero ok\n");
}
           //SUBTRACTION TEST CASE
void test_case2(void)
{
assert(calculator(2,3,2)==1);
 printf("\n subtraction of positive numbers ok\n");

assert(calculator(2,-3,-2)==-1);
 printf("\n subtraction of negative numbers ok\n");

assert(calculator(2,3,-2)==5);
 printf("\n subtraction of positive and negative ok\n");

assert(calculator(2,-3,2)==-5);
 printf("\n subtraction of negative and positive ok\n");

 assert(calculator(2,3,0)==3);
 printf("\n subtraction of positive number and zero ok\n");

 assert(calculator(2,0,3)==-3);
 printf("\n subtraction of zero and positive number ok\n");
}

           //MULTIPLICATION TEST CASE


void test_case3(void)
{
assert(calculator(3,3,2)==6);
 printf("\n multiplication of positive numbers ok\n");

assert(calculator(3,-3,-2)==6);
 printf("\n multiplication of negative numbers ok\n");

assert(calculator(3,3,-2)==-6);
 printf("\n multiplication of positive and negative ok\n");

assert(calculator(3,3,0)==0);
 printf("\n multiplication of number by zero ok\n");
}

           //DIVISION TEST CASE

void test_case4(void)
{
assert(calculator(4,6,2)==3);
 printf("\n division of positive numbers ok\n");

assert(calculator(4,-6,-2)==3);
 printf("\n division of negative numbers ok\n");

assert(calculator(4,-6,2)==-3);
 printf("\n division of negative and positive number ok\n");


assert(calculator(4,2,0)==2 && "\n division of positive number by zero Condition failed\n");

}


void main()
{
  test_case1();           //ADDITION TEST CASE

  test_case2();           //SUBTRACTION TEST CASE

  test_case3();           //MULTIPLICATION TEST CASE

  test_case4();           //DIVISION TEST CASE

  }
