# Hello World hwd

Java workshop example hello world.

## Notes

Objectives
* First istance use of workshop
* Use of library dependency in wrokdshop example

## Status
TODO
* <todo: consider, finish write up of this process>

DONE
* <todo: consider, intent to commit>

## Libs

* OpenJDK SDK, Eclipse

## Output

### Hello World - Java
Status: Success! :)

Create the workshop yaml file
* Available java openjdk sdks 17, 21, 25
```
$ workshop init dev --sdks openjdk/21/stable --base ubuntu@24.04
"dev" workshop definition created at /home/york-earwaker/Documents/dev/repo/coding-practice/workflows/sde/jva/hwd/.workshop/dev.yaml
```

View yaml file contents
```
$ cat .workshop/dev.yaml
name: dev
base: ubuntu@24.04
sdks:
  - name: openjdk
    channel: 21/stable
```

Write java app
* create the file with touch
* edit the file with nano
* view the file contents with cat, sanity check
```
$ touch HelloWorld.java

$ nano HelloWorld.java

$ cat HelloWorld.java
/**
 * Ubuntu Workshop java
 * hellow world example
 */
public class HelloWorld {

  public String  getGreeting() {
    return "Hello World! ubuntu workshop java example";
  }
  
  public static void main(String[] args) {
    System.out.println(new HelloWorld().getGreeting());
  }

}
```

Launch workshop
* First time use of project dev.yaml instance
* Compile the java app code
* Run the java app
* Stop workshop
```
$ workshop launch dev
"dev" launched

$ workshop exec dev -- javac HelloWorld.java -d bin

$ workshop exec dev -- java -cp bin HelloWorld
Hello World! ubuntu workshop java example

$ workshop stop
"dev" stopped
```

View the contents of the bin directory to see the compiled class file
```
$ dir
bin  HelloWorld.java  README.md

$ dir bin
HelloWorld.class
```

Make a change to the java app
* Task add the arguments to the java app output
* Edit the HelloWorld.java file in nano
* Join the arguments to the main method to the greeting strimg
* View java code with cat, sanity check
```
$ nano HelloWorld.java

$ cat HelloWorld.java
/**
 * Ubuntu Workshop java
 * hello world example
 */
public class HelloWorld {

  public String  getGreeting() {
    return "Hello World! ubuntu workshop java example";
  }
  
  public static void main(String[] args) {
    System.out.println(new HelloWorld().getGreeting() + " " + String.join(" ", args) );
  }

}
```

Start workshop
* Check the workshop status
* Start workshop, note no launch this time
* Refresh workshop, if changes have been made to the dev.yaml file ensure workshop refresh, for example manually editing the yaml file
* Recompile the java app
* Run the java app
* Stop workshop
```
$ workshop list
WORKSHOP  STATUS   NOTES
dev       Stopped  -

$ workshop start
"dev" started

$ workshop refresh
"dev" refreshed

$ workshop exec dev -- javac HelloWorld.java -d bin

$ workshop exec dev -- java -cp bin HelloWorld now with appended arguments
Hello World! ubuntu workshop java example now with appended arguments

$ workshop stop
"dev" stopped
```

Get the workshop instances full details
```
$ workshop info dev
name:     dev
base:     ubuntu@24.04
project:  ~/Documents/dev/repo/coding-practice/workflows/sde/jva/hwd
status:   stopped
runtime:  lxd-container
notes:    –
sdks:
  system:
    installed:  (2)
  openjdk:
    tracking:   21/stable
    installed:  21.0.12  2026-09-28  (52)
```

## References

* OpenJDK SDK, 
