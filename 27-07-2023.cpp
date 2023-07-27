class Solution
{
    public:
    void swap(int arr[],int i,int j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
        int largest=i,left=i*2+1,right=i*2+2;
        if(left<n&& arr[left]>arr[largest])largest=left;
        if(right<n&&arr[right]>arr[largest])largest=right;
        if(largest!=i){
            swap(arr,largest,i);
            heapify(arr,n,largest);
        }
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
    for(int i=(n-2)/2;i>=0;i--)
    {
        heapify(arr,n,i);
    }
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        buildHeap(arr,n);
        for(int i=n-1;i>0;i--)
        {
            swap(arr,0,i);
            heapify(arr,i,0);
        }
    }
};
