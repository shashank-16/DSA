package tree;

import java.util.*;

public class generic {
	public  static class node {
		int data;
		ArrayList<node> children = new ArrayList<>(); // it is neccasry for using new word in every itelization of the refrecnse in program
		
	}
	
	public static int size(node temp)
	{
		int count =1;
		if(temp.children.size() == 0)
		{
			return 1;
		}
		for(node t:temp.children)
		{
			count+=size(t);
		}
		return count;
		
	}
	public static int max_tree(node root)
	{
		int max=0;
//		System.out.println(root.data);
		if(root.children.size()==0)
		{
			
			return  root.data;
			
		}

		
		for(node t:root.children)
		{
			int maxy=max_tree(t);
			if(maxy >= max)
			{
				max = maxy;
				
			}
			
		}
		return max;
		
	}
	
	public static void display(node temp)
	{
		String str = temp.data + "->" ;
		for(node t : temp.children)
		{
		str+= t.data+",";
		
		
		}
		str+= ".";
		
		System.out.println(str);
		
		
		for(node te :  temp.children)
		{
			display(te);
			
		}
	}
	
	public static int hieght(node head)
	{
		
		int hei= 0;
		if(head.children.size() == 0)
		{
			return -1;
		}
		
		for(node t : head.children)
		{
			int temp_height = hieght(t);
			hei=Math.max(temp_height, hei);
			
		}
		hei += 1;
		return hei;
		
	}
	
	public static void preorder(node head)
	{
		if(head.children.size() == 0)
		{
			return;
		}
		
		for(node t : head.children)
		{
			preorder(t);
			System.out.print(t.data+" ");
		}
	}
	
	public static void levelorder(node root)
	{
	
		Queue<node> world= new ArrayDeque<>() ;
		
		world.add(root);
		
		
		while(world.size() != 0)
		{
			
			node space = new node();
			space.data= -1;
			
			world.add(space);
			
			node refer= world.remove();
		
			System.out.print(refer.data+" ");
			for(node T : refer.children)
			{
				world.add(T); 
			}
			System.out.println(world.size());
		}
	}
	
	public static void levelorder_lineBy(node temp)
	{
		Queue<node> parent_node= new ArrayDeque<>();
		Queue<node> children_node= new ArrayDeque<>();
		
		parent_node.add(temp);
		
		while(true)
		{
			
			node refer = parent_node.remove();
			System.out.print(refer.data+" ");
			for(node T:refer.children)
			{
				children_node.add(T);
			}
			
			if(parent_node.size() ==0)
			{
				System.out.println();
				parent_node = children_node;
				children_node = new ArrayDeque<>(); //reinital it 
		
			}
			
			if(parent_node.size() == 0 && children_node.size() == 0)
			{
				break;
			}
		}
	}
	
	public static void removeleave(node root)
	{
		node test= root;
		
		
		for(int i =test.children.size()-1 ;i>=0;i--)
		{
			node remv= test.children.get(i);
			
			if(remv.children.size() == 0 )
			{
				test.children.remove(remv);
			}
		}
		
		for(node T : test.children)
		{
			removeleave(T);
			
		}
	}
	
	public static void linearize(node temp)
	{
		ArrayList<node> linear = new ArrayList<>();
		Queue<node> maze = new ArrayDeque<>();
		
		for(node T : temp.children)
		{
			System.out.println(T.data);
		}
	}
	
	
	public static boolean search(int value,node temp)
	{
		
		
		if(temp.data == value)
		{
			return true;
		}
		
		for(node T:temp.children)
		{
			boolean result = search(value,T);

			if(result)
			{
				System.out.print(T.data+" ");
				return true;
			}
		}
		
		return false;
	}
	
	public static ArrayList<Integer> node_to_root(int value, node temp)
	{
		
		if(temp.data == value)
		{
			ArrayList<Integer> list = new ArrayList<>();
			list.add(temp.data);
		
			return list;
		}
		
		for(node T : temp.children)
		{
			ArrayList<Integer> res= node_to_root(value,T);
			
			if(res.size() > 0)
			{
			
				res.add(T.data);
//				System.out.println(res.get(res.size()-1));
				return res;
			}
			
		}
		
		return new ArrayList<>();
	}
	
	public static boolean similar(node temp,node temp1)
	{
		if(temp.children.size() != temp.children.size())
		{
			return false;
		}
		
		for(int i = 0;i<temp.children.size();i++)
		{
			boolean p1 = similar(temp.children.get(i),temp1.children.get(i));
			
			if(p1 == false)
			{
				return false;
			}
		}
		
		return true;
	}

	public static boolean areMirror(node temp,node temp1)
	{
		 if(temp.children.size() != temp.children.size())
			{
				return false;
			}
			
			for(int i = 0;i<temp.children.size();i++)
			{   
			    if(temp1.children.size()== temp.children.size())
			    {
	    			boolean p1 = areSimilar(temp.children.get(i),temp1.children.get(i));
	    			
	    			if(p1 == false)
	    			{
	    				return false;
	    			}
			    }
			    else{
			        return false;
			    }
			}
			
			return true; // first implement the second iterator code for the second node
	}
	
	static node predue;
	static node successor;
	
	static int state= 0;
	
	public static void solver(node temp,int data)
	{
		if(state == 0)
		{
			if(temp.data == data)
			{
				state++;
				return;
			}
			predue = temp;
			
		}else if(state == 1)
		{
			successor=temp;
			state++;
			return;
			
		}
		
		for(node T : temp.children)
		{
			solver(T,data);
		}
	}
	
	
	static int ceil=Integer.MAX_VALUE;
	static int floor =Integer.MIN_VALUE;

	
	public static void maxer(node temp,int data)
	{
		if(temp.data > data)
		{
			if(temp.data < ceil)
			{
				ceil= temp.data;				
			}
			
		}
		
		if(temp.data < data)
		{
			if(temp.data > floor)
			{
				
				floor = temp.data;
			}
			
		}
		for(node T : temp.children)
		{
			maxer(T,data);
		}
	}
	
	static int max_value;
	
	public static int max_subtree(node temp)
	{
		int sum =temp.data;
//		int max = 0;
		int count=0;
		if(temp.children.size() == 0)
		{
			System.out.println("base case " + temp.data);
			return 0;
		}
		
		for(node T : temp.children)
		{
//			int value = max_subtree(T);
			sum +=max_subtree(T);
		}
		
		System.out.println("sum value of base"+sum);
		return sum;
	}
	
	public static void main(String[] adas)
	{
		int a ;
		node root = null;
		Scanner cin = new Scanner(System.in);
		a= cin.nextInt();
		Stack<node> helper = new Stack<node>();
		
		int[] arr=  new int[a];
		
		for(int i =0;i<a;i++)
		{
			arr[i] = cin.nextInt();
		}
		
		for(int i =0;i<arr.length;i++)
		{
			if(arr[i] == -1 )
			{
				helper.pop();
			}else {
				node temp = new node();
				temp.data = arr[i];
				
				if(helper.size() > 0)
				{
//					System.out.println("came inside in stack children");
					helper.peek().children.add(temp);
//					System.out.println(helper.peek().data);
				}
				else
				{
//					System.out.println("came inside in root");
					root=temp;
				}
				helper.add(temp);
//				System.out.println(helper.peek().data);
				
				
			}
		}
		
		int value = cin.nextInt();
		
		
		display(root);
//		System.out.println(max_tree(root));
//		System.out.println(size(root));
		
//		System.out.println(hieght(root));
//		preorder(root);
//		System.out.print(root.data+ " ");
//		levelorder_lineBy(root);
//		removeleave(root);
//		boolean  val = search(value,root);
//		if(val)
//		{
//			System.out.print(root.data);
//		}
//		else {
//			
//		}
		
//		ArrayList<Integer> result = node_to_root(value,root);
//		if(result.size() ==0)
//		{
//			
//		}
//		else
//		{
//			
//			result.add(root.data);
//		}
//		System.out.print("[ ");
//		
//		for(Integer t: result)
//		{
//			System.out.print(t+", ");
//			
//		}
//		System.out.print(" ]");
//		maxer(root,value);
//		System.out.println(ceil+ " " + floor);
		int sum = max_subtree(root);
		System.out.print(sum);

	}
}

//24
//10 20 -50 -1 60 -1 -1 30 70 -1 -80 110 -1 -120 -1 -1 90 -1 -1 40 -100 -1 -1 -1
//70
