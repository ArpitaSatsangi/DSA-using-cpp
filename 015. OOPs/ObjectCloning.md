# Object Cloning

Object cloning refers to creating an exact copy (or a near-identical copy) of an object. The cloned object has the same structure and data as the original but occupies a different memory location.
In Java, cloning is supported by the Cloneable interface and the Object class's clone() method.

## Key characteristics:
* The cloned object is independent of the original object.
* Changes to the cloned object do not affect the original object (except in shallow cloning for reference types).

---

## Purpose behind usind Object Cloning

* Efficiency: Instead of recreating and reinitializing an object from scratch, cloning allows the creation of a duplicate with minimal effort.
* Reducing Coupling: It ensures that changes to one object do not propagate unintentionally to another.
* Preserving State: Cloning helps preserve the current state of an object for tasks such as undo/redo operations or caching.
* Working with Immutable Objects: When you want to modify an object but cannot (e.g., immutable collections), cloning can create modifiable copies.
* Prototyping: In design patterns like the Prototype Pattern, cloning is frequently used to replicate objects.

## Working of Cloning

### 1. The Cloneable Interface
The Cloneable interface is a marker interface (it has no methods). Its purpose is to signal to the Java Virtual Machine (JVM) that the clone() method of a class is safe to invoke.
### 2. The clone() Method
The clone() method is defined in the Object class. By default, it performs a shallow copy of the object. When invoked, it:
- Allocates a new memory location for the cloned object.
- Copies the field values (primitives are copied, references are copied but not the objects they refer to).

----

## Types of Cloning
Cloning in Java can be categorized into two types:

* Shallow Cloning: Copies primitive fields and references for objects. The cloned object shares the same reference for nested objects.
* Deep Cloning: Creates a completely independent copy of the original object, including copies of all nested objects.

---

## Shallow Cloning

Shallow cloning creates a new object that is a duplicate of the original object but only at the surface level. The new object will have the same values for all primitive fields, and references to the same memory locations for any reference-type fields (e.g., objects, arrays, or collections). This means that while the cloned object is distinct from the original, any modifications to shared references will be reflected in both objects. Shallow cloning is done using clone() method.
```
// Address class
class Address {
    String city;
    
    // Constructor
    Address(String city) {
        this.city = city;
    }
}

// Person class (which is clonable)
class Person implements Cloneable {
    String name; // Primitive field 
    Address address; // Reference-type field

    // Constructor
    Person(String name, Address address) {
        this.name = name;
        this.address = address;
    }
    
    // clone() method is inherited from Object class and must be Overriden 
    @Override
    protected Object clone() throws CloneNotSupportedException {
        return super.clone();  // Shallow copy
    }
}

class Main {
    public static void main(String[] args) throws CloneNotSupportedException {
        Address address = new Address("Mumbai");
        Person person = new Person("Rahul", address);

        Person clonedPerson = (Person) person.clone(); // Cloning person

        // Modifying the address in the cloned object
        clonedPerson.address.city = "New Delhi";

        // Output to check if changes are reflected in the original
        System.out.println(person.name + " lives in " + person.address.city);  // New Delhi
        System.out.println(clonedPerson.name + " lives in " + clonedPerson.address.city);  // New Delhi
    }
}
```
### Breakdown of code:
* @Override Annotation: This ensures that we are correctly overriding the clone() method from the Object class.
* protected Object clone() Method: The clone() method is inherited from the Object class and must be overridden to enable object cloning.
* throws CloneNotSupportedException: CloneNotSupportedException is thrown if the class does not implement the Cloneable interface. Java enforces this to prevent accidental cloning of objects that are not explicitly designed for cloning.
* super.clone(): Calls the clone() method from the Object class. This performs a shallow copy meaning:
- Primitive fields (eg: String name) are copied as-is.
- References to the References-fields (eg: Address address) are copied (not the objects themselves). This means that any changes in Refrences-fields are reflected in the cloned objects.

### Explanation:
- The cloned object clonedPerson gets a copy of person, but the address field is shared.
- Changing clonedPerson.address.city also changes person.address.city, proving that the object reference is shared.
- This is a key limitation of shallow cloning.

----

## Deep Cloning:
Deep cloning ensures that a completely independent copy of the object is created, including all nested objects. This prevents unintended modifications in the original object when the cloned object is modified. Since the default clone() method performs a shallow copy, deep cloning requires manual cloning of all referenced objects. This can be done using the clone() method recursively.

``` // Address class
class Address {
    String city;
    
    // Constructor
    Address(String city) {
        this.city = city;
    }
}

// Person class (which is clonable)
class Person implements Cloneable {
    String name; // Primitive field 
    Address address; // Reference-type field

    // Constructor
    Person(String name, Address address) {
        this.name = name;
        this.address = address;
    }
    
    // clone() method is inherited from Object class and must be Overriden 
    @Override
    protected Object clone() throws CloneNotSupportedException {
        return super.clone();  // Shallow copy
    }
}

class Main {
    public static void main(String[] args) throws CloneNotSupportedException {
        Address address = new Address("Mumbai");
        Person person = new Person("Rahul", address);

        Person clonedPerson = (Person) person.clone(); // Cloning person

        // Modifying the address in the cloned object
        clonedPerson.address.city = "New Delhi";

        // Output to check if changes are reflected in the original
        System.out.println(person.name + " lives in " + person.address.city);  // New Delhi
        System.out.println(clonedPerson.name + " lives in " + clonedPerson.address.city);  // New Delhi
    }
}
```
### Breakdown of code:
@Override Annotation:
This ensures that we are correctly overriding the clone() method from the Object class.
Used in both Person and Address classes to override the clone() method.
protected Object clone() Method in Person:
The clone() method is inherited from the Object class and must be overridden to enable object cloning.
Calls super.clone() for a shallow copy but additionally clones the Address object manually for Deep Cloning.
throws CloneNotSupportedException: CloneNotSupportedException is thrown if the class does not implement the Cloneable interface. Java enforces this to prevent accidental cloning of objects that are not explicitly designed for cloning.
super.clone(): Calls the clone() method from the Object class. This performs a shallow copy. This behaviour is modified by cloning the Adress object manually.
Why overriding clone() in Address class is required for Deep Cloning?
If Address did not override clone(), clonedPerson.address = (Address) address.clone(); would fail. This also ensures each Person object has its own independent Address object.
### Explanation:
* The cloned object clonedPerson gets a copy of person, and the Address field is cloned manually.
* Changing person.address.city does not change clonedPerson.address.city, proving that the object reference is not shared.

## Shallow Cloning vs Deep Cloning

Aspect	Shallow Cloning	Deep Cloning
Copies Primitive Fields	Yes	Yes
Copies Object References	No (shares references)	Yes (creates separate objects)
Requires Overriding in Nested Objects?	No	Yes
Independent Nested Objects?	No	Yes
Use Case	When objects have only primitive fields	When objects have references to other mutable objects


