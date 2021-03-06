/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_circularBufferNew_should_create_new_CircularBuffer_object_of_integer_type(void);
extern void test_circularBufferNew_should_create_new_CircularBuffer_object_of_double_type(void);
extern void test_circularBufferAddInt_should_add_1_integer(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "test_GenericCircularBuffer.c";
  UnityBegin();
  RUN_TEST(test_circularBufferNew_should_create_new_CircularBuffer_object_of_integer_type, 8);
  RUN_TEST(test_circularBufferNew_should_create_new_CircularBuffer_object_of_double_type, 23);
  RUN_TEST(test_circularBufferAddInt_should_add_1_integer, 38);

  return (UnityEnd());
}
