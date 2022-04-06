package pep;

import java.util.Scanner;
import java.util.*;

public class conversion {
	
	public static int prece(char oper)
	{
	    if(oper == '+')
	    {
	        return 1;
	    }
	    else if(oper == '-')
	    {
	        return 1;
	    }
	    else if(oper == '*')
	    {
	        return 2;
	    } 
	    else{

	    }
	    return -1;
	}
	
	public static void postfix(String exp,Stack<Character> operat,Stack<String> postix)
	{
		  for(int i =0;i<exp.length();i++)
		    {
		    	char symbol=exp.charAt(i);
		        if(symbol == '+' || symbol == '-' || symbol == '/' || symbol == '*' || symbol == '(' || symbol==')')
		        {
		        	  if(operat.size()>0)
				        {
		        		  System.out.println("operator to inserted "+symbol);
				            if(prece(symbol) > prece(operat.peek()) || symbol =='(')
				             {
				            	operat.push(symbol);
				            	System.out.println("insert at top"+operat.peek());
				             }
				            else if(prece(symbol) <= prece(operat.peek()) || symbol == ')')
				            {
				            	String exp2=postix.pop();
					    		String exp1= postix.pop();
					    		String result = exp1+exp2+operat.pop();
					    		
					    		System.out.println(exp1+" "+ exp2 + "=" + result);
					    		
					    		postix.push(result);
					    		
				            	while(operat.size()>0 && (prece(symbol) == prece(operat.peek()) || operat.peek() == '('))
				            		
				            	{
				            		System.out.println("inside bracket loop still symbol is  "+symbol);
					            	if(operat.peek() != '(')
							    	{
							    		
							    		String exp4=postix.pop();
							    		String exp3= postix.pop();
							    		String result1 = exp3+exp4+operat.pop();
							    		
							    		System.out.println(exp3+" "+ exp4 + "=" + result1);
							    		
							    		postix.push(result1); //error was here 
							    		
							    	}else if(operat.peek() == '('){
							    		System.out.println("poped out "+operat.pop());
							    		
							    	}
							    	else {
							    		
							    	}
					            	
				            	}
					            	if(symbol == ')')
					            	{
					            		
					            	}else {
					            		
					            		operat.push(symbol);
					            		System.out.println("after operation symbol"+operat.peek());
					            	}
				            }
				            else {
				            	
				            	operat.push(symbol);
				            	System.out.println("operator at top of stack  "+operat.peek());	
				            }
				        }
		        	  else {
		        		  operat.push(symbol);
		        		  System.out.println("lower power"+operat.peek());
		        	  }
		        }
		        else{
		       
		            postix.push(symbol+"");
		            System.out.println(postix.peek());		  
		            
		        }
		        
		    }
		    
		    while(operat.size() > 0)
		    {
		    		
		    		String exp2=postix.pop();
		    		String exp1= postix.pop();
		    		String result = exp1+exp2+operat.pop();
		    		System.out.println(exp1+" "+ exp2 + "=" + result);
		    		postix.push(result);
	    	}
		System.out.println("final answer"+postix.peek());

	}
	
	public static void prefix(String exp,Stack<Character> operat,Stack<String> postix)
	{
		
		  for(int i =0;i<exp.length();i++)
		    {
		    	char symbol=exp.charAt(i);
		        if(symbol == '+' || symbol == '-' || symbol == '/' || symbol == '*' || symbol == '(' || symbol==')')
		        {
		        	  if(operat.size()>0)
				        {
		        		  System.out.println("operator to inserted "+symbol);
				            if(prece(symbol) > prece(operat.peek()) || symbol =='(')
				             {
				            	operat.push(symbol);
				            	System.out.println(operat.peek());
				             }
				            else if(prece(symbol) <= prece(operat.peek()) || symbol == ')')
				            {
				            	String exp2=postix.pop();
					    		String exp1= postix.pop();
					    		String result = operat.pop()+exp1+exp2;
					    		
					    		System.out.println(exp1+" "+ exp2 + "=" + result);
					    		
					    		postix.push(result);
					    		
				            	while(operat.size()>0 && (prece(symbol) == prece(operat.peek()) || operat.peek() == '('))
				            		
				            	{
					            	if(operat.peek() != '(')
							    	{
							    		
							    		String exp4=postix.pop();
							    		String exp3= postix.pop();
							    		String result1 = operat.pop()+exp3+exp4;
							    		
							    		System.out.println(exp3+" "+ exp4 + "=" + result1);
							    		
							    		postix.push(result1);
							    	}else if(operat.peek() == '('){
							    		operat.pop();
							    		
							    	}
							    	else {
							    		
							    	}
				            	}
				            	
					            	if(symbol == ')')
					            	{
					            		
					            	}else {
					            		
					            		operat.push(symbol);
					            		System.out.println("after operation symbol"+operat.peek());
					            	}
				            }
				            else {
				            	
				            	operat.push(symbol);
				            	System.out.println("operator at top of stack  "+operat.peek());	
				            }
				        }
		        	  else {
		        		  operat.push(symbol);
		        		  System.out.println(operat.peek());
		        	  }
		        }
		        else{
		       
		            postix.push(symbol+"");
		            System.out.println(postix.peek());		  
		            
		        }
		        
		    }
		    
		    while(operat.size() > 0)
    	{
		    		String exp2=postix.pop();
		    		String exp1= postix.pop();
		    		String result = operat.pop()+exp1+exp2;
		    		System.out.println(exp1+" "+ exp2 + "=" + result);
		    		postix.push(result);
		    	
	    	}
		System.out.println("final answer "+postix.peek());

	}
	
	public static void main(String[] sdas)
	{
		String exp;
		Scanner cint = new Scanner(System.in);
		exp = cint.nextLine();
		Stack<Character> operat= new Stack<>(); 
		Stack<String> postix = new Stack<>();
		
		Stack<Character> operat1= new Stack<>(); 
		Stack<String> postix1= new Stack<>();
		
		postfix(exp,operat,postix);
		prefix(exp,operat1,postix1);
  	}
}
