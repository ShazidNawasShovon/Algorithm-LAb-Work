package bubble.sort;


public class BubbleSort {

    
    public static void main(String[] args) {
      
        int[] numbers = {33,10,100,36,16,40,60,87,110,150};
        
        bubbleSort(numbers);
        System.out.println( arrays. toString(numbers));
        
    }
    
    public static void bubbleSort(int arr[]){
    int n=arr.length;
        for (int i=0; i<n-1;i++){
           for(int j=0; j<n-i-1; j++){
              if (arr[j]>arr[j+1]){
                int temp = arr[j];
                  arr[j]=arr[j+1];
    }
    }
    }
    }
}
