package testPk;

import  testing.staticity;
import testPk.cla;
public class subclass {

	public static void main(String[] args) {
		staticity ci = new staticity(1);
		
		staticity di = new staticity(1);
		
		cla cl= new cla(1);
		
		boolean g  =  ci == di;
		
		
		
		
		char c =0x7f;
		int a = 0b001_0001;
		int b= 016;
		
		
		System.out.println(ci.equals(cl));
//		System.out.println(di.hashCode()+" "+ ci.hashCode());
		
	}

}
