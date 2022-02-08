#include <fdn/server/server.h>
#include <gtest/gtest.h>

TEST(HelloTest, BasicAssertions) {
  auto server = fdn::Server(100);
  EXPECT_TRUE(true);
  EXPECT_EQ(100, server.GetX());
}
