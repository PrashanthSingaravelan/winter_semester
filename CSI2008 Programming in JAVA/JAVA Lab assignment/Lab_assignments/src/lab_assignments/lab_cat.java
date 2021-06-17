package lab_assignments;

class AgeOutOfRangeException extends Exception  {
    private String message;
    private int messageNumber;
    
    AgeOutOfRangeException(String message_main , int messageNumber_main) {
            this.message = message_main;
            this.messageNumber = messageNumber_main;
    }
    
    @Override  // Including public member function called getMessage to display the Exception message and the messageNumber
    public String getMessage() { return ("The Message is : " + this.message + " and the Message number : " + this.messageNumber);}
}
        
class Student {
    private String Name;
    private int age;
    
    Student(String name_main,int age_main) {
        this.Name = name_main;
        this.age = age_main;
    }
    
    public void age_check(String message_main , int messageNumber_main) throws AgeOutOfRangeException{   
        System.out.println("Student name : " + this.Name + "    Student age : " + this.age);
        
        // Raise an exception in the Student class if the Student’s age is not between 16 and 20.  
        if(this.age>=16 && this.age<=20) {     throw new AgeOutOfRangeException(message_main,messageNumber_main);  } 
        else {   System.out.println("Your age is not inbetween 16 and 20");       }
    }
}

public class lab_cat {
    public static void main(String args[]) {
          Student obj1 = new Student("Prashanth",17);
          Student obj2 = new Student("Sam Curran",22);
          Student obj3 = new Student("Michael",18);
          Student obj4 = new Student("Chris Gayle",25);
          Student obj5 = new Student("Jaden Smith",19);
          
          try { obj1.age_check("Prashanth here",1);   }         catch (AgeOutOfRangeException e) { System.out.println(e); };  
          try { obj2.age_check("Sam here",2);   }                   catch (AgeOutOfRangeException e) { e.getMessage(); };
          try { obj3.age_check("Michael here",3);   }           catch (AgeOutOfRangeException e) { System.out.println(e); };
          try { obj4.age_check("Chris Gayle here",4);   }     catch (AgeOutOfRangeException e) { System.out.println(e); };
          try { obj5.age_check("Jaden Smith here",5);   }   catch (AgeOutOfRangeException e) { System.out.println(e); };
          }
}
