#include <gtest/gtest.h>
#include "../include/replace_a_b.h"

TEST(ReplaceABTest, BasicCases) {
    EXPECT_EQ(replace_a_b("acb"), "bca");
    EXPECT_EQ(replace_a_b("aabacbaa"), "bbabcabb");
}

TEST(ReplaceABTest, OnlyAAndB) {
    EXPECT_EQ(replace_a_b("ab"), "ba");
    EXPECT_EQ(replace_a_b("ba"), "ab");
    EXPECT_EQ(replace_a_b("aabb"), "bbaa");
    EXPECT_EQ(replace_a_b("abab"), "baba");
}

TEST(ReplaceABTest, OnlyC) {
    EXPECT_EQ(replace_a_b("c"), "c");
    EXPECT_EQ(replace_a_b("cc"), "cc");
    EXPECT_EQ(replace_a_b("ccc"), "ccc");
}

TEST(ReplaceABTest, MixedWithC) {
    EXPECT_EQ(replace_a_b("abc"), "bac");
    EXPECT_EQ(replace_a_b("acb"), "bca");
    EXPECT_EQ(replace_a_b("cab"), "cba");
    EXPECT_EQ(replace_a_b("aacbbca"), "bbcaacb");
}

TEST(ReplaceABTest, EmptyString) {
    EXPECT_EQ(replace_a_b(""), "");
}

TEST(ReplaceABTest, OnlyA) {
    EXPECT_EQ(replace_a_b("a"), "b");
    EXPECT_EQ(replace_a_b("aa"), "bb");
    EXPECT_EQ(replace_a_b("aaa"), "bbb");
}

TEST(ReplaceABTest, OnlyB) {
    EXPECT_EQ(replace_a_b("b"), "a");
    EXPECT_EQ(replace_a_b("bb"), "aa");
    EXPECT_EQ(replace_a_b("bbb"), "aaa");
}

TEST(ReplaceABTest, NoAOrB) {
    EXPECT_EQ(replace_a_b("c"), "c");
    EXPECT_EQ(replace_a_b("xyz"), "xyz"); // Другие символы остаются без изменений
    EXPECT_EQ(replace_a_b("123"), "123");
}

TEST(ReplaceABTest, ComplexCases) {
    EXPECT_EQ(replace_a_b("aabbcc"), "bbaacc");
    EXPECT_EQ(replace_a_b("cacbc"), "cbcac");
    EXPECT_EQ(replace_a_b("abacaba"), "babcbab");
}

TEST(ReplaceABTest, OtherCharactersUnaffected) {
    EXPECT_EQ(replace_a_b("axbycz"), "bxaycz");
    EXPECT_EQ(replace_a_b("1a2b3c"), "1b2a3c");
    EXPECT_EQ(replace_a_b("!@#$%"), "!@#$%");
}