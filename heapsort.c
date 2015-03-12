// Maxim heap

/*   a is an array to heapify.
 *   n is the size of array a.
 *   inode is the index of the node in the maximum heap(complete binary tree).
 */

#define LEFT(i)  (i<<1)
#define RIGHT(i)  (i<<1 | 0x1)
#define PARENT(i)  (i>>1)

void swap(int& a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void Max_Heapify(int *a , int n, int inode) {
    int l, r, largest;
    l = LEFT(inode);
    r = RIGHT(inode);

    if ( l < n && (a[inode] <= a[l]) )
        largest = l;
    else 
        largest = inode;

    if ( r < n && (a[largest] < a[r]) )
        largest = r;

    if ( largest != inode ) {
        swap(a[inode], a[largest]);
        Max_Heapify(a, n, largest);
    }

}

void Build_Max_Heap(int *a, int n) {

    for (int i=PARENT(n); i>=0; i--) {
        Max_Heapify(a, n, i);
    }
}

