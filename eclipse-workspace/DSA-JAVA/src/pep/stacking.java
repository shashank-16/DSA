//package pep;
//
//import java.util.Scanner;
//
//public class stacking {
//	 // static resolution fixing is pending
//	public static class stack{
//	    
//	  private static int top=0;
//	  private static  int size=0;
//	  private static int[] array= new int[0];
//	  private static int top_min=0;
//	  private static int[] min_array= new int[0];
//	  private static int cap;
//	  private static int min=0;
//	  private static boolean firs=true;
//	    
//	   public stack(int less){
//	        this.cap=less;
//	        min_array= new int[less + 1];
//	  
//	        array= new int[less+1];
//	        array[top]=0;
//	        min_array[top]=0;
//	    }
//
//	    public static void displayEveryValue()
//	    {
//	        for(int i=top;i>0 ;i--)
//	        {
//	            System.out.print(array[i]+" ");
//	        }
//	    }
//	    public static void insertatend(int data)
//	    {
//	        if(top>=cap)
//	        {
//	        	System.out.print("Stack overflow");
//	        	int[] temp = new int[cap+1];
//	        	// dynamic progress --------------------------->
//	        	cap= cap*2; 
//	        	for(int i =top;i>0;i--)
//	        	{
//	        		temp[i]=array[i];
//	        		System.out.println(temp[i]+" ");
//	        	}
//	        	array =new int[cap+1];
//	        	    	
//	        	
//	        	for(int i =top;i>0;i--)
//	        	{
//	        		array[i]=temp[i];
//	        		System.out.println("second "+ array[i]);  
//	        	}
//	        	top++;
//	            ++size;
//	            array[top]=data;
//	            
//	        }
//	        else{
//	            top++;
//	            ++size;
//	            array[top]=data;
//	            if(firs)
//	            {
//	            	++top_min;
//	            	min_array[top_min]=array[top];
//	            	min = min_array[top_min];
//	            	firs= false;
//	            }else {
//	            	if(array[top]<min)
//	            	{
//	            			++top_min ;
//	            			min_array[top_min]=array[top];
//	    	            	min = min_array[top_min];
//	            			
//	            	}else {
//	            		
//	            	}
//	            }
//	        }
//	    }
//    	
//	    public  static void  getmin_value()
//	    {
//	    	System.out.print(min_array[top_min]);
//	    	
//	    }
//	    
//	    public static void getvalue()
//	    {
//	    	if(top == 0)
//	    	{
//	    		System.out.print("Stack underflow");
//	    	}
//	    	else {	    		
//	    		int value= array[top];
//	    		System.out.print(value);
//	    	}
//	    }
//	    
//	    public static void display_min()
//	    {
//	    	for(int i = top_min;i>0;i--)
//	    	{
//	    		System.out.print(min_array[i]+" ");
//	    	}
//	    }
//	    public static void getsize()
//	    {
//	    	System.out.print(size);
//	    }
//	    public static void removeElement()
//	   {
//	       if(top == 0)
//	       {
//	    	   System.out.print("Stack underflow");
//	       }
//	       else{
//	    	   if(min_array[top_min] == array[top])
//	    	   {
//	    		 min_array[top_min]= 0;
//	    		 top_min--;
//	    		 
//	    	   }else {
//	    		   //nothing to do 
//	    	   }
//	        array[top]=0;
//	        top--;
//	        --size;
//	        
//	       }
//	   }
//
//	    public static void getcap()
//	   {
//		   System.out.print(cap);
//	   }
//	}
//	
//	public static void main(String[] adas)
//	{
//		Scanner cin = new Scanner(System.in);
//		String funct= new String();
//		int n;
//		n=cin.nextInt();
//		stack world = new stack(n);
//		int data;
//		
//
//		
//	}
//}



package pep;
import java.util.Scanner;

public class stacking{
	 // static resolution fixing is pending
	public static class stack{
	    
	  private static int top=0;
	  private static  int size=0;
	  private static int[] array= new int[0];
	  private static int top_min=0;
	  private static int[] min_array= new int[0];
	  private static int cap;
	  private static int min=0;
	  private static boolean firs=true;
	    
	   public stack(int less){
	        this.cap=less;
	        min_array= new int[less + 1];
	  
	        array= new int[less+1];
	        array[top]=0;
	        min_array[top]=0;
	    }

	    public static void displayEveryValue()
	    {
	        for(int i=top;i>0 ;i--)
	        {
	            System.out.print(array[i]+" ");
	        }
	    }
	    public static void insertatend(int data)
	    {
	        if(top>=cap)
	        {
	        	// System.out.print("Stack overflow");
	        	int[] temp = new int[cap+1];
	        	// dynamic progress --------------------------->
	        	cap= cap*2; 
	        	for(int i =top;i>0;i--)
	        	{
	        		temp[i]=array[i];
	        	
	        	}
	        	array =new int[cap+1];
	        	    	
	        	
	        	for(int i =top;i>0;i--)
	        	{
	        		array[i]=temp[i];
	        		  
	        	}
	        	top++;
	            ++size;
	            array[top]=data;
	            
	        }
	        else{
	            top++;
	            ++size;
	            array[top]=data;
	            if(firs)
	            {
	            	++top_min;
	            	min_array[top_min]=array[top];
	            	min = min_array[top_min];
	            	firs= false;
	            }else {
	            	if(array[top]<min)
	            	{
	            			++top_min ;
	            			min_array[top_min]=array[top];
	    	            	min = min_array[top_min];
	            			
	            	}else {
	            		
	            	}
	            }
	        }
	    }
    	
	    public  static void  getmin_value()
	    {
	    	System.out.print(min_array[top_min]);
	    	
	    }
	    
	    public static void getvalue()
	    {
	      		
	    		int value= array[top];
	    		System.out.print(value);
	    	
	    }
	    
	    public static void display_min()
	    {
	    	for(int i = top_min;i>0;i--)
	    	{
	    		System.out.print(min_array[i]+" ");
	    	}
	    }
	    public static void getsize()
	    {
	    	System.out.print(size);
	    }
	    public static void removeElement()
	   {
		   
	       if(top == 0)
	       {
	    	   System.out.print("Stack underflow");
           		return ;
	       }
	       else{
	    	   if(min_array[top_min] == array[top])
	    	   {
	    		 min_array[top_min]= 0;
	    		 top_min--;
	    		 
	    	   }else {
	    		   //nothing to do 
	    	   }
           System.out.print(array[top]);
	        array[top]=0;
	        top--;
	        --size;
	        
	       }
	   }

	    public static void getcap()
	   {
		   System.out.print(cap);
	   }
	}
	
	public static void main(String[] adas)
	{
		Scanner cin = new Scanner(System.in);
		String funct= new String();
		int n;
		n=cin.nextInt();
		stack world = new stack(n);
		int data;
		 while(true)
		    {
			 
		        funct= cin.next();
		       if(funct.contentEquals("quit"))
		       {
		    	   
		           break;
		       }
		        else if(funct.contentEquals("pop"))
		        {
		            world.removeElement();
		            System.out.println();
		        }
		        else if(funct.contentEquals("top"))
		        {
		            world.getvalue();
		            System.out.println();
		        }
		        else if(funct.contentEquals("display"))
		        {
		            world.displayEveryValue();
		            System.out.println();
		        }
		        else if(funct.contentEquals("size"))
		        {
		            world.getsize();
		            System.out.println();
		        }
		        else if(funct.contentEquals("push"))
		        {
		            data= cin.nextInt();
		           world.insertatend(data);
		            // System.out.println();
		        }
		        else if(funct.contentEquals("min"))
		        {
		        	world.getmin_value();
		        }
		    }

		
	}
}
