package testing;

import testPk.cla;

public class Abract extends cla {

	
	public Abract(int a) {
		super(a); // used to ivoke the paraent constructor 
		// TODO Auto-generated constructor stub
	}
	

	
	public void typing() {
		System.out.println("helllo from other side");
		super.add(1,3);
		
	}
	
	public int get_from_inhert() {
//		return cla.data;
			return super.get_value();
			
			
	}
	
	
}
