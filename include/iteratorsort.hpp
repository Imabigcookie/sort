#include <iostream>
template <typename iterator>
void insertion_sort(iterator begin , iterator end)
{
   if(!(begin < end))
    return;
   for(iterator i = begin + 1 ; i != end ; ++i)
    for(iterator j = 1; j =!begin && *j < *(j-1); --j)
        std::iter_swap(j - 1, j);
}
