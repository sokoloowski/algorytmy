#include <iostream>
#include "Bar_sort.h"
#include "Bucket_sort.h"
#include "Merge_sort_rec.h"
#include "Merge_sort_iter.h"
using namespace std;


int main() {

//// Sortowanie przez zliczanie
    Bar_sort::bar_sort_main();

//// Bucket_sort.h
    Bucket_sort::bucket_sort_main();

//// Merge sort rec.
    Merge_sort_rec::merge_sort_rec_main();

//// Merge sort iter.
    Merge_sort_iter::merge_sort_iter_main();








    return 0;
}
