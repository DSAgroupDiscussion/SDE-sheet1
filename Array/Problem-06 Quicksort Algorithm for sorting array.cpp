
//   I have pivoted the rightmost element....this code can be more optimized by taking more suitable pivots....


int partition(int arr[],int l,int r){
	int pivot=arr[r];
	int i=l-1,j=l;
	for(j=l;j<r;j++){
		if(arr[j]<=pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[r]);
	return i+1;
}

void quickSort(int arr[],int l,int r){
	if(l<r){
		int part=partition(arr,l,r);
		quickSort(arr,l,part-1);
		quickSort(arr,part+1,r);
	}
}


// Suggestion most welcomed...
