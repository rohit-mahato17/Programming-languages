// import java.util.*;

// public class Strings{
//     public static void main(String [] args){
//         Scanner sc = new Scanner(System.in);

//         String name = sc.nextLine();

//         System.out.print(name);
//     }
// }

// import java.util.*;

// public class Strings{
//     public static void main(String [] args){
        
//       String firstName = "tony";
//       String lastName = "stack";
//       String fullName = firstName +" "+ lastName;
//     //   System.out.println(fullName.length());
//        System.out.println(fullName.charAt(0));
//        System.out.println(fullName.charAt(1));
//        System.out.println(fullName.charAt(2));
//     }
// } 

//compare

import java.util.*;

public class Strings{
    public static void main(String [] args){
        
      String name1 = "tony";
      String name2 = "stack";
      
       if(name1.compareTo(name2) == 0){
            System.out.print("String is not equal");
       }
       else{
            System.out.print("String are not equal");
       }

       System.out.println();

       String sentence = "TonyStark";
       String name = sentence.substring(0,4);
       System.out.print(name);
    }
} 
