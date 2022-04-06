package impertive;

import java.util.ArrayList;
import java.util.List;

public class imper {
	// impertive approach
	 
	public static void main(String[] ars)
	{
		List<person> people =List.of(
				new person("shashank",Gender.MALE),
				new person("rvo",Gender.FEMALE),
				new person("rohan",Gender.FEMALE)
				
				);
		
		List<person> females= new ArrayList<>();
		
		System.out.print("Imperative ");
		
		for(person Person : people)
		{
			if(Gender.FEMALE.equals(Person.sex))
			{
				females.add(Person);
//				System.out.print(Person.name);
			}
//		
		}
//		
		for(person lady : females)
		{
			System.out.println(lady.name);
			
		}
		//declarative approach 
		
		
	people.stream().filter
	(Person->Gender.FEMALE.equals
			(Person.sex)).
	forEach(System.out::println);
	
			
		
	}
	
	
	 static class person{
	
		public final   String name;
		public final Gender sex;
		
		public person(String name,Gender sex)
		{
			this.name= name;
			this.sex = sex;
			
		}

		
	}
	
	  enum Gender{
		MALE,FEMALE;
	}
	
}
	

