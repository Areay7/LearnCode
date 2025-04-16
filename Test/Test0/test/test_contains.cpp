#include <gtest/gtest.h>
#include <gmock/gmock.h>


#include "math_utils.h"
#include "global.h"


// using namespace ::testing;

using ::testing::Contains;
using ::testing::ElementsAre;
using ::testing::IsEmpty;
using ::testing::Not;
using ::testing::SizeIs;
using ::testing::UnorderedElementsAre;
using ::testing::IsSupersetOf;
using ::testing::Each;
using ::testing::Gt;
using ::testing::Eq;
using ::testing::Pair;
using ::testing::AllOf;
using ::testing::Pointee;
using ::testing::Field;
using ::testing::Property;
using ::testing::Field;

TEST(ContainsTest, ExactMatch)
{
    EXPECT_THAT(vec, ElementsAre(1, 2, 3));
}

TEST(ContainsTest, ContainsElement)
{
    EXPECT_THAT(fruits, Contains("apple"));
    EXPECT_THAT(fruits, Contains("banana"));
    EXPECT_THAT(fruits, Not(Contains("water")));
}

TEST(ContainsTest, SizeCheck)
{
    EXPECT_THAT(prices, SizeIs(2));
    EXPECT_THAT(prices, Not(IsEmpty()));
    EXPECT_THAT(empty_vec, IsEmpty());
}

TEST(ContainsTest, NestedContainer)
{
    EXPECT_THAT(matrix, ElementsAre(ElementsAre(1, 2), ElementsAre(3, 4)));
}

TEST(ContainsTest, UnorderedElements)
{
    EXPECT_THAT(nums, UnorderedElementsAre(1,2,3));
    EXPECT_THAT(nums, IsSupersetOf({1,3}));
}

TEST(ContainsTest, KeyValueCheck)
{
    EXPECT_THAT(age_map, Contains(Pair("Alice", 25)));
    EXPECT_THAT(age_map, Not(Contains(Pair("Areay", 7))));
}

TEST(ContainsTest, AllElementsSatisfy)
{
    EXPECT_THAT(scores, Each(Pair(Not(IsEmpty()), Gt(84))));
    // EXPECT_THAT(scores, ::testing::Each(::testing::Pair(
    //     ::testing::Not(::testing::IsEmpty()),  // 键非空
    //     ::testing::Gt(60)                      // 值>60
    // )));
}

TEST(ContainsTest, MultiCondition)
{
    EXPECT_THAT(data, AllOf(SizeIs(4), Contains(20), Contains(40)));
}

TEST(PointerContainerTest, PointerElements)
{
    EXPECT_THAT(ptrs, ElementsAre(Pointee(Eq(42))));
    EXPECT_THAT(uptrs, ElementsAre(Pointee(Eq(42))));
}

TEST(CustomClassTest, FieldMatcher)
{
    EXPECT_THAT(people, Contains(Field(&Person::name, "Alice")));
    EXPECT_THAT(people ,Contains(Property(&Person::GetAge, Gt(76))));
}