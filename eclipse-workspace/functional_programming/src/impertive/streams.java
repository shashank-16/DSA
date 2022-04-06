//Function ,supplier, consumer adn preidcate use in stream

package impertive;

import impertive.imper.Gender;
import impertive.imper.person;
import java.util.*;
import java.util.function.*;

public class streams {
	public static void main(String [] asdas) {
		List<person> people=  List.of(new person("shahsank",Gender.MALE));
//		people.add(1, new person("charuasosa",Gender.MALE));
		List<person> pollution= new ArrayList<person>();
		
		person person1= new person("linux ",Gender.FEMALE);
		
		pollution.add(person1);
		pollution.add(new person("",Gender.FEMALE));
		

//			people.add(1, person1);
		Function<person,String> filterme= pers -> pers.name;
		ToIntFunction<String>  lenght= String::length;
		IntConsumer printlength= lengh-> System.out.print(lengh);
		Consumer<String> nameprint = name->System.out.print(name);
		
		people.stream().map(filterme).mapToInt(lenght).forEach(System.out::println);
		people.stream().map(filterme).mapToInt(lenght).forEach(printlength);
		people.stream().map(pers -> pers.name).forEach(name->System.out.print(name));
		System.out.println(people.hashCode());
		
	}
	
	
}