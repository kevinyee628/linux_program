int max(int *a,int n){
	int i,max;
	max = a[0];
	for(i=0;i<n;i++)
		if(a[i]>max)
			max = a[i];
	return max;

}
