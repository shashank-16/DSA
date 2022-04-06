package testing;

import testPk.*;


public class mainclass implements Rules{
	
	public int getadd() {
		return 1+2;
		
	}
	
	public static void main(String[] args) {
//		Rohan r1 = new Rohan(1);
		
		cla cl = new cla(12);
//		 int x = cl.valueable();
		
//		cla.get_value();
		
		int n=5;
		int space=n-1;
		int mid= n/2;
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==j || i+j == n-1)
				{
					System.out.print("*  ");
					
				}
//				else if(i+j <= n-1 ) 
//				
				else if(i+j <= n-1 && i<= mid){
					System.out.print("*  ");
				}
//					System.out.print("*  ");
//				}
				else if(i == 0 || i == n-1)
				{
					System.out.print("*  ");
				}
				else {
					System.out.print("   ");
				}
				
			}
			space =space-2;
			System.out.println();
			
		}
		
//		Abract ab = new Abract(15);
		
//		System.out.print(cl.get_value() + "   " +ab.get_from_inhert());
		
	}
	
}


