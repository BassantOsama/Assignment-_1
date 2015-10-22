#Q1
A class is a definition of a user-defined type.A class declaration specifies how data is
to be stored,and it specifies the methods (class member functions) that can be used
to access and manipulate that data.

#Q2
A class represents the operations you can perform on a class object with a public
interface of class methods; this is abstraction.The class can use private visibility (the
default) for data members, meaning that the data can be accessed only through the
member functions; this is data hiding. Details of the implementation, such as data
representation and method code,are hidden; this is encapsulation.


#Q3
 A class defines a type, including how it can be used.An object is a variable or
another data object, such as that produced by new, which is created and used
according to the class definition.The relationship between a class and an object is
the same as that between a standard type and a variable of that type.


@4
If you create several objects of a given class, each object comes with storage for its
own set of data. But all the objects use the one set of member functions. (Typically,
methods are public and data members are private, but that’s a matter of policy, not
of class requirements.)

#Q5

class BankAccount</br>
{</br>
private:</br>
char name[40]; // or std::string name;</br>
char acctnum[25]; // or std::string acctnum;</br>
double balance;</br>
public:</br>
BankAccount(const char * client, const char * num, double bal = 0.0);</br>
//or BankAccount(const std::string & client,</br>
// const std::string & num, double bal = 0.0);</br>
void show(void) const;</br>
void deposit(double cash);</br>
void withdraw(double cash);</br>
};

#Q6
A class constructor is called when you create an object of that class or when you
explicitly call the constructor.A class destructor is called when the object expires.

#Q7
BankAccount::BankAccount(const char * client, const char * num, double bal)</br>
{</br>
strncpy(name, client, 39);</br>
name[39] = '\0';</br>
strncpy(acctnum, num, 24);</br>
acctnum[24] = '\0';</br>
balance = bal;</br>
}

#Q8

A default constructor either has no arguments or has defaults for all the arguments.
Having a default constructor enables you to declare objects without initializing
them, even if you’ve already defined an initializing constructor. It also allows you to
declare arrays.

#Q9
class Stock<br/>
{<br/>
private:<br/>
std::string company;<br/>
long shares;<br/>
double share_val;<br/>
double total_val;<br/>
void set_tot() { total_val = shares * share_val; }<br/>
public:<br/>
Stock(); <br/>
Stock(const std::string & co, long n, double pr);<br/>
~Stock() {}<br/>
void buy(long num, double price);<br/>
void sell(long num, double price);<br/>
void update(double price);<br/>
void show() const;<br/>
const Stock & topval(const Stock & s) const;<br/>
int numshares() const { return shares; }<br/>
double shareval() const { return share_val; }<br/>
double totalval() const { return total_val; }<br/>
const string & co_name() const { return company; }<br/>
};

#Q10
The this pointer is available to class methods. It points to the object used to
invoke the method.Thus, this is the address of the object,and *this represents the
object itself.



