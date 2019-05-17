#include "Greeter.h"
#include "gtest/gtest.h"

using namespace std;
using namespace hello;

// https://github.com/google/googletest/blob/master/googletest/docs/primer.md

TEST(Greeter, GreetWorld) {
  ostringstream expect;
  expect << "Hello, World!" << endl;
  ostringstream result;
  Greeter greeter;
  greeter.greet(result);
  ASSERT_EQ(expect.str(),result.str());
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
