//下列代码的功能是利用堆排序将N个元素按非递减顺序排序。
#define leftchild(i) ( 2*(i)+1 )
#define ElementType int
void PercDown( ElementType A[], int i, int N )
{  int child;
   ElementType Tmp;

   for ( Tmp = A[i]; leftchild(i) < N; i = child ) {
      child = leftchild(i);
      if (Tmp>A[child])
         child ++;
      if (
)   A[i] = A[child];
      else  break;
   }
   
;
}
void Heapsort( ElementType A[ ], int N ) 
{  int i; 
   for ( i = N / 2; i>= 0; i -- ) /* BuildHeap */ 
        PercDown( A, i, N ); 
   for ( i = N-1; i >0; i -- ) { 
        Swap( &A[ 0 ], &A[ i ] ); 
        
; 
   } 
} 