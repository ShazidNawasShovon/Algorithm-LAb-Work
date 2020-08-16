
package linear.search;


public class LinearSearch {

    
    public static void main(String[] args) {
   
        int [] num ={90,10,23,45,12,67,36,87};
        
        int key = -9;
        
        boolean flag = false ;
                int i=0;
                
                while(i<num.length){
                if (num[i]== key){
                flag=true;
                    
                break;
                    
                }
                i++ ;
                }
                if(flag){
                System.out.println(key+"found index:"+i);
                }
                else{
                System.out.println(key+"not found");
                }
    }
    
}
