// here want practise, how to write class in c#

using system 

// class definition 
namespace C#_PRACTICE
{
    public class Students
    {
        // filds (data meber )  - these are fundamentally variables belonging to the class. 

        public string Name;
        public int age;
        public double gpa;
        public string program;

        //properties methods (behavior members) - these are fundamentally functions belonging to the class.

        public study ()
        {
            console.WriteLine($"I am studying {program}");
        }
        public void sleep()
        {
            console.WriteLine($"I am sleeping");
        }
        public void eat()
        {
            console.WriteLine($"I am eating");
        }
        public void sayHello()
        {
            console.writeline($"Hello, my name is {name} and I am {age} years old.");
        }
    }

// testing the class 

public class TestStudents
{
    public static void main(string[] args)
    {
        // create an instance of the class -- the objct 
        Students student1 = new Students();

        student1.name= "King Tiger";
        student1.age= 20;
        student1.gpa= 3.9;
        student1.program= "Computer Science";

        student1.sayHello();
        student1.study();
        student1.sleep();
        student1.eat();
    }




}