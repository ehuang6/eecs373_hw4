int compare(int a, int b) {
	    return b - a;
}

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a );
}
