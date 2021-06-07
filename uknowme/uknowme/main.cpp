#include "Counting_sort.h"
#include "Bucket_sort.h"
#include "Bucket_sort_advanced.h"
#include "Bubble_sort.h"
#include "Insertion_sort.h"
#include "Merge_sort_rec.h"
#include "Merge_sort_iter.h"
#include "Heap_sort.h"
#include "Quick_sort_base.h"
#include "Quick_sort_advanced.h"
#include "Stack.h"
#include "Queue.h"
#include "Priority_queue.h"
#include "Binary_search.h"
#include "BST_tree.h"
#include "Position_sort.h"
using namespace std;


int main() {

//// Counting sort
    Counting_sort::counting_sort_main();

//// Position sort
    Position_sort::position_sort_main();

//// Bucket_sort - standard (with malloc)
    Bucket_sort::bucket_sort_main();

//// Bucket_sort - advanced (without malloc)
    Bucket_sort_advanced::bucket_sort_main();

//// Bubble sort
    Bubble_sort::bubble_sort_main();

//// Insertion sort
    Insertion_sort::insertion_sort_main();

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

//// Stack
    Stack::stack_main();

//// Queue
    Queue::queue_main();

//// Priority queue
    Priority_queue::priority_queue_main();

//// Binary search
    Binary_search::binary_search_main();

//// BST tree + search
    BST_tree::bst_tree_main();



    return 0;
}
