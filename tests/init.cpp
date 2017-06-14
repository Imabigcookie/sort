#include <iteratorsort.hpp>
#include <catch.hpp>

SCENARIO ("array")
{
  int a[] = {4, 1, 5, 2, 3};
  int* s=a;
  int* l=a+5;
 insertion_sort(s,l);
 REQUIRE(a[0] == 1);
 REQUIRE(a[1] == 2);
 REQUIRE(a[2] == 3);
 REQUIRE(a[3] == 4);
 REQUIRE(a[4] == 5);
}
SCENARIO("matr")
{
  int arr[3][3] = {4, 21, 12, 5, 2, 7, 42, 26, 8};
  int * beg = &arr[0][0];
  int * end = &arr[2][3];
  insertion_sort(beg,end);
  REQUIRE(arr[0][0] == 2);
  REQUIRE(arr[0][1] == 4);
  REQUIRE(arr[0][2] == 5);
  REQUIRE(arr[1][0] == 7);
  REQUIRE(arr[1][1] == 8);
  REQUIRE(arr[1][2] == 12);
  REQUIRE(arr[2][0] == 21);
  REQUIRE(arr[2][1] == 26);
  REQUIRE(arr[2][2] == 42);
}
