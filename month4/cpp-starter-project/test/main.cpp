#include "gmock/gmock.h"
#include "getMeHello.h"

TEST(TestHelloWorld, WhatIsntValue)
{
  ASSERT_NE(getMeHello(), "Hello demo");
}

TEST(TestHelloWorld, WhatIsValue)
{
  ASSERT_EQ(getMeHello(), "Hello World");
}