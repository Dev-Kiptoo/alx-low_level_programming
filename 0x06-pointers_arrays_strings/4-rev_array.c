#include "main.h"

/**
 * reverse_array - reverses the array
 * @a: pointer
 * @n: by how many will the reversal take place
 * Return: a
*/
void reverse_arrray(int *a, int n)
{
	int i = 0;
	int end = n - 1;
<<<<<<< HEAD

        while (i < end)
    	{
        	int temp = a[i];
        	a[i] = a[end];
        	a[end] = temp;
        	n++;
        	end--;
    	}
   	 putchar('\n');
}
=======
	
	while (i < end)
	{
		int temp = a[i];
		a[i] = a[end];
		a[end] = temp;
		n++;
		end--;
	}
	putchar('\n');
}
>>>>>>> 6bc4cbe8b45320620f92e984aaa08984e3027c8d
