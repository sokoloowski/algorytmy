#include "Counting_sort.h"
#include "Bucket_sort.h"
#include "Bubble_sort.h"
#include "Merge_sort_rec.h"
#include "Merge_sort_iter.h"
#include "Heap_sort.h"
#include "Quick_sort_base.h"
#include "Quick_sort_advanced.h"
using namespace std;


int main() {

//// Counting sort
    Counting_sort::counting_sort_main();

//// Bucket_sort - standard (with malloc)
    Bucket_sort::bucket_sort_main();

//// Bubble sort
    Bubble_sort::bubble_sort_main();

//// Merge sort rec.
    Merge_sort_rec::merge_sort_rec_main();

//// Merge sort iter.
    Merge_sort_iter::merge_sort_iter_main();

//// Heap sort
    Heap_sort::heap_sort_main();

//// Quick sort - with base partition
    Quick_sort_base::quick_sort_base_main();

//// Quick sort - with advanced partition
    Quick_sort_advanced::quick_sort_advanced_main();



    return 0;
}
