#include "gtest/gtest.h"
#include "incognizable.h"

TEST(Incog, Ctor1) {
    Incognizable a;
}

TEST(Incog, Ctor2) {
    Incognizable b = {};
}

TEST(Incog, Ctor3) {
    Incognizable c = {0};
}

TEST(Incog, Ctor4) {
    Incognizable d = {0, 1};
}

int main(int arc, char **argv) {
    ::testing::InitGoogleTest(&arc, argv);
    return RUN_ALL_TESTS();
}
