/*  
February 28, 2019
Ann Blodgett

A program to take a string from Standard Input and then prints the same string to the screen but spelled out with the NATO phoenetic alphabet.

Example:
input: limeox25
output: Lima India Mike Echo Oscar X-Ray 2 5

*/
import java.lang.StringBuilder;
import java.util.*;


class Nato {

  private static final String BLANK_SPACE=" ";
 
 public static void toNato(String input){

   System.out.println(input);

    input = input.toLowerCase();

   StringBuilder transform = new StringBuilder(input);
   StringBuilder result = new StringBuilder("");

   //Make a 26 element hashmap with the keys being the lowercase alphabet and the value being the Nato words plus a space.
   HashMap<Character, String> hash_map = new HashMap();

   hash_map.put('a',"Alpha ");//1
   hash_map.put('b',"Bravo ");//2
   hash_map.put('c',"Charlie ");//3
   hash_map.put('d',"Delta ");//4
   hash_map.put('e',"Echo ");//5
   hash_map.put('f',"Foxtrot ");//6
   hash_map.put('g',"Golf ");//7
   hash_map.put('h',"Hotel ");//8
   hash_map.put('i',"India ");//9
   hash_map.put('j',"Juliet ");//10
   hash_map.put('k',"Kilo ");//11
   hash_map.put('l',"Lima ");//12
   hash_map.put('m',"Mike ");//13
   hash_map.put('n',"November ");//14
   hash_map.put('o',"Oscar ");//15
   hash_map.put('p',"Papa ");//16
   hash_map.put('q',"Quebec ");//17
   hash_map.put('r',"Romeo ");//18
   hash_map.put('s',"Sierra ");//19
   hash_map.put('t',"Tango ");//20
   hash_map.put('u',"Uniform ");//21
   hash_map.put('v',"Victor ");//22
   hash_map.put('w',"Whiskey ");//23
   hash_map.put('x',"X-Ray ");//24
   hash_map.put('y',"Yankee ");//25
   hash_map.put('z',"Zulu ");//26
   


   for( int i =0; i < transform.length(); i++){

     if(hash_map.containsKey(transform.charAt(i))){

       //Get the nato value and append it to the result StringBuilder array.
       result.append(hash_map.get(transform.charAt(i)));
     }
     else{
       // if the character at i is a non alphabetic or special character, just append the character to the array
       result.append(transform.charAt(i));
       result.append(BLANK_SPACE);
     }
   }
  // Print the string representation of the result StringBuilder object
   System.out.println(result.toString());
 
}

  public static void main(String[] args) {
    boolean exit = true;
    do{
    Scanner scan = new Scanner(System.in);
    String inputString;
    
    System.out.println("Please enter the string you would like transformed to NATO spellings: ");
    inputString = scan.nextLine();
    
    toNato(inputString);
    
    String again;
    System.out.println("Do you want to run the program again? Enter yes or no");
    again = scan.next();

    again = again.toLowerCase();
    again = again.trim();


    if(again.equals("no")){
      exit = false;
    }
    
    }while(exit);

    System.out.println("Thank you. The program will now exit.");
  }
}
