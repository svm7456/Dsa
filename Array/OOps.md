# Class Definition
Class is template for creating object.
Objects are instance of classes,they represent real world entities.
## Example:
Suppose we want to model a 'car' in java.
1. Class Definition:
````
   // car class
   class Car
   {
    // Fields (attributes)
     String make;
     String model;
     int year;
     // constructor
     car(String make,String model, int year){
         this.make=make;
         this.model=model;
         this.year=year;
      }
      void displayInfo(){
        System.out.println("Make : "+make);
        System.out.println("Model :"+model);
        System.out.println("Year :"+year);
    }
}
class main(){
  public static void main(String[] args){
     Car car1 = new Car("Swift","Maruti",2010);
     Car car2 = new Car("Fortuner","toyota",2005);
   }
}
      

````   

   
