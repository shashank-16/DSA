package impertive;

import java.util.function.*;
//import impertive.consumer;

public class function {
    public static void main(String[] afe)
    {
    	int result=1;
    	int inc = increment(result);
    	int inc2= function.incrementfunc.apply(result); //apply mean for applying the functiuon 
    	
    	Function<Integer,Integer> addthenmulti =incrementfunc.andThen(powerofinc);
    	
    	int inc3=addthenmulti.apply(result);
    	int inc4 = incre1thenmulti.apply(2, 5);
    	
    	
    	System.out.println(increment(result));
    	System.out.println(inc + "<---> "+ inc2 + "<<." + inc3 +"|| " + inc4 );
    
    System.out.print(consumer.getname.get());  //supplier function
    
    }
     
    public static int increment(int number)
    {
    	return ++number;
    	
    }
    
    //in bifunction we have to declare the number first;
    //bifunction and function are different so calling function by function is differnete from the fucntion or having bifucntion is different
    
    static BiFunction<Integer,Integer,Integer> incre1thenmulti = (number1 , number2) -> (number1 +1)* number2   ; //completeley like math function 
    
 static Function<Integer,Integer> incrementfunc= number -> ++number; //this expersion is for one fuction type only 
 
 
 static Function<Integer,Integer> powerofinc = number -> number * number;
 
 
}