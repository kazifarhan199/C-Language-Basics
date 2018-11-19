// It has <stdio.h> as dependency

int take_input(int a[]){
	int n, i;

	printf("Enter no of elements : ");
	scanf("%d",&n);

	printf("Enter the elements \n");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	return n;
}

void print_output(int a[], int n){
	int i;
	printf("The sorted list is :\n");
	for(i=0; i<n; i++){
		printf("%d\t", a[i]);
	}	
}
void swap_int_address(int *a, int *b){
	int t;
	t = *a;
	*a = *b;
	*b = t;
}