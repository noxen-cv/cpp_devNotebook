# Key Takeaways

## Constructors in Inheritance:
- The base class constructor is called before the derived class constructor.
- Explicitly calling a parameterized constructor of the base class is necessary if there is no default constructor in the base class.
## Access Modifiers:
- Private members of a base class are not accessible in the derived class.
- Public members remain accessible as per the inheritance type (public, protected, or private).
- Protected members are accessible within the derived class but not outside it when using objects