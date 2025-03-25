# Inner Classes

Inner classes are classes that are defined within another class. They are a powerful feature in Java that allows you to logically group classes that are only used in one place, making the code more readable and encapsulated. They have direct access to all the members (both static and non-static) of the outer class.

Java provides several types of inner classes to suit different use cases. These are:

* Static Nested Classes
* Non-Static Inner Classes
* Local Inner Classes
* Anonymous Inner Classes

## 1. Static Nested Classes
A static nested class is defined with the static modifier. Since it is static, it does not require an instance of the outer class to be created. Static nested classes can only access the static members of the outer class.

Here, the StaticNestedClass can access the OuterClass's static members directly without requiring an instance of the outer class.
### Keypoints:
Declared using the static keyword.
Can only access the static members of the outer class.
No reference to an outer class instance is maintained.

Static nested classes are often used to group classes that are tightly related and do not need access to instance-specific data.
## 2. Non-Static Inner Classes
A non-static inner class is associated with an instance of the outer class. It has access to all members (both static and non-static) of the outer class, including private members.

In the example, the InnerClass can access instanceVar directly because it is tied to an instance of OuterClass.
### Keypoints:
Declared without the static keyword.
Requires an instance of the outer class to be instantiated.
Can access all members of the outer class.

Non-static inner classes are used when you need access to instance-specific data of the outer class.
## 3. Local Inner Classes
Local inner classes are defined within a method or a block of code. They are only accessible within the scope of that method or block. Local inner classes can access all members of the outer class but can only access the effectively final local variables of the enclosing method.
Consider the code snippet given below:


In the example, LocalInnerClass accesses the localVar because it is effectively final.
### Keypoints:
Defined within a method or block.
Can access all members of the outer class.
Can only access effectively final local variables of the enclosing method.

Local inner classes are useful for encapsulating logic within a method.

## Anonymous Inner Classes
Anonymous inner classes are a type of local inner class without a name. They are often used to implement interfaces or extend classes for one-time use.

In the example, an instance of the Greeting class is created with an overridden sayHello() method, allowing custom behavior without explicitly defining a new class.

### Keypoints:
Do not have a name.
Are instantiated at the point of declaration.
Typically used when a class is needed only once.

Anonymous inner classes are commonly used in GUI applications or when implementing event listeners.
