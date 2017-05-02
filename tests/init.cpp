#include <literatorsort.hpp>
#include <catch.hpp>

SCENARIO ("array")
{
  int a[] = {3, 2, 4, 5, 6};
  int* s=a;
  int* l=a+5;
 sort_iterator(s,1);
 REQUIRE(a[0] == 2);
 REQUIRE(a[1] == 3);
 REQUIRE(a[2] == 4);
 REQUIRE(a[3] == 5);
 REQUIRE(a[4] == 6);
}
SCENARIO("matrix")
{
  int array[3][3] = {4, 21, 12,5,2,7,42,26,8};
  int * beg = &array[0][0];
  int * end = &array[2][3];
  sort_iterator(beg,end);
  REQUIRE(array[0][0] == 2);
  REQUIRE(array[0][1] == 4);
  REQUIRE(array[0][2] == 5);
  REQUIRE(array[1][0] == 7);
  REQUIRE(array[1][1] == 8);
  REQUIRE(array[1][2] == 12);
  REQUIRE(array[2][0] == 21);
  REQUIRE(array[2][1] == 26);
  REQUIRE(array[2][2] == 42);
}
