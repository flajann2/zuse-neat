#include "neat.h"
#include "gtest/gtest.h"
#include <cwrap>

using namespace std;
namespace
{
  // The fixture for testing the innovation counter.
  class InnovationTest : public ::testing::Test {
  protected:
    // You can remove any or all of the following functions if its body
    // is empty.
    
    InnovationTest() {
      // You can do set-up work for each test here.
    }
    
    virtual ~InnovationTest() {
      // You can do clean-up work that doesn't throw exceptions here.
    }
    
    // If the constructor and destructor are not enough for setting up
    // and cleaning up each test, you can define the following methods:
    
    virtual void SetUp() {
      // Code here will be called immediately after the constructor (right
      // before each test).
    }
    
    virtual void TearDown() {
      // Code here will be called immediately after each test (right
      // before the destructor).
    }
    
    // Objects declared here can be used by all tests in the test case for Foo.
  };
  
  // Tests that Foo does Xyz.
  TEST_F(InnovationTest, DoesIncrement) {
    auto a = neat::innovation();
    auto b = neat::innovation();
    EXPECT_EQ(1, b - a);
  } 
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
