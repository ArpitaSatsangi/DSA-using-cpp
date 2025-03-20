#  Classes and Objects

- What is the primary difference between a class and an object?
-- A class is a blueprint, and an object is an instance of the class.

- Which of the following best represents an attribute in a class?
-- A variable that holds data for an object.

- How is an object typically destroyed in memory in languages like Java?
-- Automatically by the garbage collector.

- An object can have different attributes compared to other objects of the same class.
-- True

- Methods in a class define the behavior of its objects.
-- True
  
 ----
 
# Attributes and Methods

- What are attributes in a class?
-- Variables that define the properties of an object.

- What are methods in a class?
-- Functions that define the behavior of objects.

- Which of the following is true about instance variables?
-- They are unique to each object of a class.

- Attributes are also referred to as instance variables.
-- True

- Methods can modify the value of instance variables.
-- True

- If an object does not have a specific value for an attribute, it will throw an error.
-- False
  
---

#  Constructors

- What is the primary purpose of a constructor?
-- To initialize objects of a class.

- Which of the following is true about constructors?
-- Constructors are invoked using the new keyword.


- Which type of constructor requires parameters to initialize an object?
-- Parameterized constructor


- What is constructor overloading?
-- Defining multiple constructors with the same name but different parameters.


- Can a constructor call another constructor in the same class?
-- Yes, using the this() keyword.


- A constructor can have any return type, including void.
-- False

- The default constructor is provided by the compiler if no other constructor is defined.
-- True

---

# Encapsulation

- What is encapsulation in Object-Oriented Programming?
--Binding data and methods together into a single unit.

- Which access modifier is typically used to achieve data hiding in encapsulation?
-- Private

- Why is encapsulation important?
-- It restricts unauthorized access to data.

- What is the primary purpose of getter and setter methods in encapsulation?
-- To provide controlled access to private variables.

- Encapsulation can only be achieved in classes with constructors.
-- False

- Making all variables in a class public violates the principle of encapsulation.
-- True

---

# Access Modifiers

- What is the main purpose of access specifiers?
-- To control the visibility of class members.

- Which access specifier allows visibility only within the same class?
-- Private

- What is the default access specifier in Java?
-- Default

- Which access specifier allows visibility to all classes?
-- Public

- Which of the following is true about the protected access specifier?
-- It is accessible in the same package and subclasses.

- Methods marked as private cannot be overridden.
-- True

- A protected member of a class can be accessed by any class in the same package?
-- True

---

# Inheritance

- What is inheritance in OOP?
-- The mechanism where one class acquires properties and methods of another class.

- Which type of inheritance is supported by Java but involves using interfaces for implementation?
-- Multiple inheritance

- Which keyword is used to inherit a class in Java?
-- extends

- Can a subclass inherit private members of a superclass?
-- No, but they can be accessed using getters/setters.

- What is the key difference between method overriding and method overloading?
-- Overloading occurs within the same class; overriding occurs between classes.

- Java supports multiple inheritance through classes.
-- False

- Method overriding requires the method to have the same signature in the parent and child classes.
-- True

- Protected members of a superclass are accessible to subclasses.
-- True

----

# Polymorphism

- What is polymorphism in Java?
-- Ability of a variable, method, or object to take on many forms.

- Which of the following is an example of compile-time polymorphism?
-- Method overloading

- Can you differentiate between overloaded methods using only their return type?
-- No

- Which of the following best describes runtime polymorphism?
-- Achieved through method overriding.

- Can static methods be overridden in Java?
-- No, they cannot be overridden.

- Method overriding requires inheritance between classes.
-- True

- Compile-time polymorphism is resolved during program execution.
-- False

- An overridden method must have the same signature as the parent class method.
-- True

---

#  Abstraction

- What is abstraction in Java?
-- The process of hiding implementation details and showing only functionality.

- How is abstraction achieved in Java?
-- Using interfaces & Using abstract classes

- Can an abstract class have a constructor in Java?
-- yes

- What percentage of abstraction can an abstract class provide?
-- 0-100%

- Why were default and static methods introduced in interfaces after Java 8?
-- To allow interfaces to have a concrete implementation for backward compatibility.

- An abstract class can extend another abstract class in Java.
-- True

- An abstract class can have both abstract and concrete methods.
-- True

- Abstract classes can be instantiated directly.
-- False

- An abstract class can implement an interface.
-- True

- A class must override all abstract methods of an abstract class it extends.
-- True

---

# Interfaces

- What is an interface in Java?
-- A blueprint of a class containing only abstract methods and constants.

- Can an interface have instance variables?
-- No

- Why use interfaces in Java?
-- To provide multiple inheritance. & To enforce a contract for a class without defining the implementation.

- What happens if a class implements multiple interfaces with methods of the same name?
-- The class must provide its own implementation for the method.

- Can interfaces extend other interfaces in Java?
-- Can interfaces extend other interfaces in Java?

- Interfaces can have constructors.
-- False

- A class can implement multiple interfaces in Java.
-- True

- Interfaces can have default and static methods after Java 8.
-- True

- All methods in an interface are abstract by default before Java 8.
-- True













