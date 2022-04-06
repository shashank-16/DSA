package pep;

import java.util.*;

public class queue {
	public static class me_queue
	{
		private int front =1;
		private int back =1;
		private  int[] array = new int[0];
		private  int cap=0,size;
		
		public me_queue(int siz)
		{
			cap = siz;
			array= new int[cap+1];
			array[front]=0;
		}
		
		public void push(int data)
		{
			if(front >= cap+1)
			{
				System.out.println("queue overflow");
				return;
			}else {
				array[front]= data;
				front++;
			}
		}
		public void pop()
		{
			if(front <= back)
			{
				System.out.println("queue underflow");
				return ;
			}else {
				System.out.println(array[back]);
				array[back]=0;
				back++;
				
			}
		}
		public void top() {
			System.out.println(array[front-1]);
		}
		public void display()
		{
			for(int i=back;i<front;i++)
			{
				System.out.println(array[i]+" ");
			}
		}
	}
	
	public static void main(String[] ad)
	{
		int n,data=0;
		Scanner input = new Scanner(System.in);
		n=input.nextInt();
		me_queue world= new me_queue(n);
		String funct;
		
		 while(true)
		    {
			 
		        funct= input.next();
		       if(funct.contentEquals("quit"))
		       {
		    	   
		           break;
		       }
		        else if(funct.contentEquals("pop"))
		        
		        {
		            world.pop();
		            System.out.println();
		        }
		        else if(funct.contentEquals("top"))
		        {
		            world.top();
		            System.out.println();
		        }
		        else if(funct.contentEquals("display"))
		        {
		            world.display();
		            System.out.println();
		        }
//		        else if(funct.contentEquals("size"))
//		        {
//		            world.getsize();
//		            System.out.println();
//		        }
		        else if(funct.contentEquals("push"))
		        {
		            data= input.nextInt();
		            world.push(data);
		            System.out.println();
		        }
//		        else if(funct.contentEquals("cap"))
//		        {
//		        	world.getcap();
//		        }
		    }
		
	}
}
