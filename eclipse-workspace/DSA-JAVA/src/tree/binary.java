package tree;

import java.util.*;

import tree.BST.node;

public class binary {

	public static class node{
		int data;
		node left;
		node right;
		
		public node() {
			
		}
		
		public node(int data,node left,node right)
		{
			this.data= data;
			this.left = left;
			this.right= right;
		}
		
		
	}
	
	public static node construct (node root ,int[] arr)
	{
		Stack<pair> world = new Stack<>();
		int value;
//		value=Integer.parseInt(arr[0]);
		value = arr[0];
		root.data= value;
		
		pair top = new pair(root,0);
		
		world.push(top);
		
		for(int i=1;i<arr.length;i++)
		{
			if(arr[i] == -1)
			{
//				System.out.println(world.peek().state);
				world.peek().state++;
//				System.out.println("getting out from the leave or root "+ world.peek().root.data + "state "+ world.peek().state);
				if(world.peek().state == 2)
				{
					world.pop();
				}
			}
			else {
				if(world.peek().state == 2 )
				{
					world.pop();
				}
				node Top = world.peek().root;

				value = arr[i];
//				System.out.println(value);
//				System.out.println("stack value "+ world.peek().root.data +"state of the top value"+ world.peek().state);
				node temp = new node();
				temp.data= value;
				
				if(world.peek().state == 0)
				{
					
					world.peek().state++;
					pair le= new pair(temp,0);
					world.push(le);
					Top.left = temp;
					
				}
				else if(world.peek().state == 1)
				{
					world.peek().state++;
					pair re = new pair(temp,0);
					world.push(re);
					Top.right= temp;
				}
				else {
					world.pop();
					
				}
				
			}
			
		}
		return root;
	}
	public static node leftcloned(node root)
	{
		if(root == null)
		{
			return null;
			
		}
		
		node lcr= leftcloned(root.left);
		node rcr = leftcloned(root.right);
		
		node nn = new node();
		nn.data= root.data;
		nn.left= lcr;
		nn.right= null;
		
		root.left= nn;
		root.right = rcr;
		
		 return root;
	}
	
	public static void display(node root)
	{
		if(root == null)
		{
			return;	
		}
		
		String str = "<-"+ root.data +"->";
		str+= (root.left == null)?".":"left value"+root.left.data;
		str+=(root.right == null)? ".": "right value"+root.right.data;

		System.out.println(str);
		display(root.left);
		display(root.right);
	}
	
	public static int size(node root) //can help in leave root 
	{
		int size= 0;
		int sizeleft=0;
		int sizeright = 0;
		if(root.left == null && root.right == null)
		{
			return 1;
		}
		sizeleft += (root.left == null)?0:size(root.left);
		sizeright += (root.right == null)? 0 :size(root.right);
		size = 1+sizeleft+sizeright; // added 1 beause element single also contain it
		
		
		return size;
	}
	public static int sum(node root)
	{
		int sum =0;
		int sumleft=0;
		int sumright= 0;
		if(root.left ==null && root.right == null)
		{

			return root.data ;	
		}
		sumleft+=(root.left == null )?0:sum(root.left);
		sumright+= (root.right == null)?0:sum(root.right);
		sum+= root.data+sumleft+sumright;

		return sum;
	}
	
	public static int max(node root)
	{
		int max =root.data;
		int maxleft =0;
		int maxright=0;
		if(root.left == null && root.right == null)
		{
//			System.out.println(max);
			return max;
		}
		
		maxleft=(root.left== null)?root.data :max(root.left);
		maxright=(root.right== null)?root.data :max(root.right);
		
		if(maxleft>=maxright)
		{
//			System.out.println("maxleft false"+ maxleft + "maxright "+maxright);
			if(maxleft>=max)
			{
//				System.out.println("maxleft"+ maxleft + "max "+max);
				max=maxleft;				
			}
		}
		else {
//			System.out.println("maxright false"+ maxright + "max "+max);
			if(maxright>=max)
			{
//				System.out.println("maxright"+ maxright + "max "+max);
				max=maxright;				
			}
		}
		
		return max;
		
	}
	
	public static int height(node root)
	{
		int hei=0;
		int heil= 0;
		int heir=0;
		int temph=0;
		if(root.left  == null && root.right == null)
		{
			return -1;
		}
		
		heil = (root.left == null)?-1:height(root.left);
		heir= (root.right == null)?-1: height(root.right);
		temph = Math.max(heir, heil);
		hei=Math.max(hei,temph);
		
		hei+=1;
		
		
		return hei;
	}
	
	public static void leveldown(node root,int level)
	{
		if(root == null)
		{
			return;
		}
		 
		if(level == 0)
		{
			System.out.print(root.data+" " );
		}
		
		leveldown(root.left,level-1);
		leveldown (root.right, level-1 );
		return;
	}
	
	public static void level_order(node root ,int level)
	{
		Queue<node> maze= new ArrayDeque<>();
		maze.add(root);

		node top;
		int count=1;
		int powe=1;
		int pow= 1;
		
		while(maze.size() >0){
			top = maze.peek();
			if(top.left != null)
			{	
				maze.add(top.left);
			
			}
			
			if(top.right !=null)
			{
				
				maze.add(top.right);
			}
			
			if(powe == pow)
			{
				System.out.println();
				pow*=2;
//				powe++;
			}
//			maze.remove();
			System.out.print(maze.remove().data+" ");
//		System.out.print(maze.remove());
		count++;
			
		}
	}
	
	public static node removed_clone(node root)
	{
		if(root == null)
		{
			return null;
		}
		
		node ln =removed_clone(root.left.left);
		node rn = removed_clone(root.right);
//		System.out.println(root.data + "value around it left"+root.left.data + " right"+ root.right.data);
		
		root.left= ln;
		root.right= rn;
		
		return root;
		
	}

	
	public static void pre_order(node root)
	{
		String prestr= new String();
		String poststr = new String();
		String instr=new String();
		
		Stack<pair> pe= new Stack<>();
		pair top = new pair(root,1);
		
		pe.push(top);
		System.out.print(pe.peek().root.data+" ");
		while(pe.size() > 0)
		{

			if(pe.peek().state == 1)
			{
				if(pe.peek().root.left != null)
				{
					pe.push( new pair(pe.peek().root.left,1));
					prestr+=pe.peek().root.data+" ";
		
					
//					System.out.print(pe.peek().root.data+" ");
//					System.out.println("pe top "+pe.peek().root.data + " " + pe.peek().state);
				}
				else {
					pe.peek().state++;
//					System.out.println("pe top state "+pe.peek().root.data + " " + pe.peek().state);
				}
			}
			else if(pe.peek().state == 2)
			{
				instr+=pe.peek().root.data+" ";
				if(pe.peek().root.right != null)
				{
					pe.push(new pair(pe.peek().root.right,1));
					prestr+=pe.peek().root.data+" ";
					
//					System.out.print(pe.peek().root.data+" ");
//					System.out.println("pe top "+pe.peek().root.data + " " + pe.peek().state);
				}else {
					pe.peek().state++;
//					System.out.println("pe top state "+pe.peek().root.data + " " + pe.peek().state);
				}
			}
			else {
			poststr+= pe.pop().root.data+" ";
//				System.out.println("pop it"+ 	pe.pop().root.data+"size of stack" + pe.size());
				if(pe.size() == 0)
				{
					System.out.println(prestr);
					System.out.println(instr);
					System.out.println(poststr);
					return ;
				}
				pe.peek().state++;
			}
		}
		
	}
	
	public static int tilt(node temp)
	{
		int sum=0;
		
		if(temp == null)
		{
			return sum;
		}
		
		int lh=tilt(temp.left);
		int rh = tilt(temp.right);
		
//		System.out.println(lh + "  " + rh);
		
		sum = temp.data+lh+rh;
//		sum += temp.left == null ? 0 : temp.left.data;
//		sum += temp.right == null ? 0 : temp.right.data;
		
		return sum;
	}
	
	public static boolean find(node root,int data)
	{
		if(root.data == data)
		{
//			System.out.print(root.data+" ,");
			return true;
		}
		
		boolean find_left =(root.left == null)? false: find(root.left,data) ;
		boolean find_right =(root.right == null) ? false:  find(root.right,data);
		
		if(find_left == true || find_right == true)
		{
//			System.out.print(root.data+" ,");
			return true;
		}
		
		return false;
	}
	 
	public static ArrayList<Integer>  roottonode(node root,int data)
	{
		if(root.data == data)
		{
			ArrayList<Integer> res = new ArrayList<>();
			res.add(root.data);
			
			return res;
		}
		
		ArrayList<Integer> find_left =(root.left == null)? new ArrayList<>() : roottonode(root.left,data) ;
		ArrayList<Integer> find_right =(root.right == null) ? new ArrayList<>() :  roottonode(root.right,data);
		
		if(find_left.size() > 0)
		{find_left.add(root.data);
			return find_left;
		}
		
		if( find_right.size() > 0)
		{
			find_right.add(root.data);
			return find_right;
		
		}
		
		return new ArrayList<>();
	}
	
	public static class  pair{
		int state;
		node root;
		
		public pair(node temp ,int state)
		{
			this.state= state;
			this.root= temp;
			
		}
	}
	
	public static void print_single(node root)
	{
		if(root == null)
		{
			return;
		}
		
		if(root.left != null && root.right !=null)
		{
			
			print_single(root.left);
			print_single(root.right);
		}
		
		if(root.left!=null && root.right == null)
		{
			System.out.println(root.left.data);
		}
		
		if(root.left == null && root.right !=null)
		{
			System.out.println(root.right.data);

		} 

		return ;
	}
	
	public static node removeleave(node temp)
	{
		if(temp == null)
		{
			return null;
		}
		if(temp.left == null && temp.right == null)
		{
			return null;
		}
		 
		temp.left = removeleave(temp.left);
		temp.right = removeleave(temp.right);
		
		return temp;
	}
	
	static int tiler= 0;
	public static int diameter(node temp){
		
		int sum=0;
		
		int lh = height(temp.left);
		int rh = height(temp.right);
		
		sum = lh+ rh+2;
		tiler += Math.abs(lh-rh);
		
		return sum;
		
	}
	
	public static boolean bst(node temp)
	{
//		if(temp.left == null && temp.right == null)
//		{
//			return true;
//		}
		if(temp == null)
		{
			return true;
			
		}
		
		if(temp.left!=null && temp.left.data > temp.data)
		{
			return false;
		}
		
		if(temp.right!=null && temp.right.data < temp.data)
		{
			return false;
			
		}
		
		if(!bst(temp.left) || !bst(temp.right))
		{
			return false;
			
		}
		
		return true  ;
		
	}
	
	public static node addnode(node temp,int data)
	{
		node nl = null;
		node nr = null;
		
		if(temp.left == null && temp.right == null)
		{
			node nn = new node(data,nl,nr);
			if(temp.data< data)
			{
				temp.right = nn;
			}
			else {
				temp.left = nn;
			}
			return temp;
			
		}
		
		if(temp.left!=null && temp.right !=null)
		{
			
			if(data > temp.left.data)
			{
				nr= addnode(temp.right,data);
//			
				
			}else {
				nl= addnode(temp.left,data);
//				
			}
		}
		else if(temp.left  == null && temp.right!=null)
		{
			if(temp.data < data )
			{
				nr = addnode(temp.right,data);				
			}
			else {
			 node nn = new node(data,null,null);
			 temp.left= nn;
			 
			}
//	
			
		}
		else if(temp.left !=null && temp.right == null)
		{
			if(data <temp.data)
			{
				nl= addnode(temp.left,data);				
			}
			else {
				node nn = new node(data ,null,null);
				temp.right = nn;
			}
		
		}
		else {
			
		}
		return temp;
	}
	
	
	public static void main(String[] asa)
	{
		node root = new node();
		int lenght;
		Scanner cin = new Scanner(System.in);
		lenght= cin.nextInt();
		
		int[] arr= new int[lenght];
		for(int i=0;i<arr.length;i++)
		{
			arr[i]= cin.nextInt();		
		}
		int value = cin.nextInt();
		root = construct(root,arr);
		display(root);
//		int sum = sum(root);
//		System.out.println("sum of the binary tree"+sum);
//		System.out.println(size(root));
//		System.out.println(max(root));
//		level_order(root,value);
//		leveldown(root,value);
//		leftcloned(root);
//		removed_clone(root);
//		System.out.print("--------");
//		display(root);
//		pre_order(root);
//		print_single(root);
//		removeleave(root);
//		System.out.print(bst(root));
		root = addnode(root,value);
		display(root);
		
		int i=0;
		while(value > 0)
		{
			value=value/10;
			i++;
		}
		System.out.print(i);
//		System.out.println(find(root,value));
//	ArrayList<Integer> result=roottonode(root,value);
//	System.out.print('[');
//	boolean first= true;
//	for(int i: result)
//	{
//		if(first)
//		{
//			System.out.print(i);
//			first =false;
//		}
//		else {
//			System.out.print(" ,"+i);
//			
//		}
//		
//	}
//	System.out.print(']');
	}
//	
}

//19
//50 25 12 -1 -1 37 30 -1 -1 -1 75 62 -1 70 -1 -1 87 -1 -1


//23
//50 25 12 -1 -1 37 30 -1 -1 40 -1 -1 75 62 60 -1 -1 70 -1 -1 87 -1 -1
