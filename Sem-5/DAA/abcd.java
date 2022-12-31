import java.io.IOException;

public class abcd {  
  
    public static void main(String[] args) {  
          
        // int data=50/0; //may throw exception   
        
        try{
            throw new IOException(",,");
        }
        catch(RuntimeException e){
            System.out.println("RuntimeException");
        }
        finally{
            System.out.println("Finally");
        }

        // System.out.println("rest of the code");  
          
    }  
      
} 