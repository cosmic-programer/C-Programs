#include<stdio.h>
int main()
{
	int a[]={-2,-3,4,-1,-2};
	int n;
	int max_sum=max_sub_array_sum(a,n);
	
	printf("The largest sum of contiguous subarrays is: %d\n",max_sum);
	
}

int max_sub_array_sum(int a[],int n)
{
	int i;
	int max_so_far=a[0];
	int max_ending_here=a[0];
	
	for(i=1;i<n;i++)
	{
		// Find the maximum ending at the current position
		max_ending_here = (max_ending_here + a[i] > a[i]) ? max_ending_here + a[i]: a[i];
		
		// Update the maximum so far if needed
		max_so_far = (max_so_far > max_ending_here) ? max_so_far : max_ending_here;
	}
	
	return max_so_far;
}
