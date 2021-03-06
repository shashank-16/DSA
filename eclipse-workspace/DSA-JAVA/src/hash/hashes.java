package hash;

import java.util.*;

public class hashes {
	
	public static void largest(int[] arr,int k)
	{
		PriorityQueue pq = new PriorityQueue();
		
		for(int i: arr)
		{
			pq.add(i);
		}
		int size =pq.size()-k -1;
		int count=0;
		int limit = pq.size()-1;
		while(count<=limit)
		{
			if(count>=size)
			{
				System.out.println(pq.remove());
			}
			else {
				pq.remove();
			}
			count++;
		}
		
	}
	
	public static void rotate(int number,int k)
	{
		int rem= 0;
		Stack<Integer> ps = new Stack<>();
		Stack<Integer> helper = new Stack<>();
		int count= 0;
		
		while(number!=0)
		{
			rem=number%10;
//			System.out.println("rem" + rem);
			number= number/10;
			count++;
			ps.add(rem);
//			System.out.println("top " + ps.peek());
		}
		
		int value = 0;
		while(ps.size()!=0)
		{
			helper.add(ps.pop());
		}
		k = k%count;
		
		while(k != 0)
		{
			System.out.print(helper.pop());
			k--;
			if(k == 0)
			{
				while(helper.size() !=0)
				{
					ps.add(helper.pop());
				}
			}
		}
		
		while(ps.size() !=0)
		{
			System.out.print(ps.pop());
		}
	}
	
	public static void sort(int[] arr)
	{
		PriorityQueue pq = new PriorityQueue();
		
		for(int i: arr)
		{
			pq.add(i);
		}
		
		int count = 0;
		int size = pq.size()-1;
		while(count <= size)
		{
			System.out.println(pq.remove());
			count++;
		}
	}
	
	public static class medianK  {

	 public static	PriorityQueue<Integer> lefthalf = new PriorityQueue(Collections.reverseOrder());
	public static PriorityQueue<Integer> righthalf = new PriorityQueue();
		
		
		public static void add(int data)
		{
			int diff = lefthalf.size() - righthalf.size();
			if(lefthalf.size() == 0 )
			{
				lefthalf.add(data);
				diff= lefthalf.size() - righthalf.size();
			}
			
			if(diff )
		}
		
		
		public static void display()
		{
			System.out.println(lefthalf);
			System.out.println(righthalf);
		}
		
	}
	
	public static void main(String[] adas){
		Scanner input = new Scanner(System.in);
		
//		int number = input.nextInt();
//		int limit= input.nextInt();
//		otate(number,limit);
		medianK ps = new medianK();
		System.out.print(ps.hashCode());
		
//		int[] array= new int[limit];
//		
//		for(int i= 0;i<limit;i++)
//		{
//			array[i] = input.nextInt();
//		}
//		int k = input.nextInt();
//		largest(array,k);
//		sort(array);
		
	}
}
