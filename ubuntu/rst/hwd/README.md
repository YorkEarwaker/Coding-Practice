# Hello world hwd

A first rust example using a text editor on the command line.

## Notes

Objectives
* Use nano to create first hello world rust example

Note
* With the aid of the Brave AI

## Status
TODO
* <todo: consider, already overworked, leave this example alone, >

DONE
* <done: consider, intent to commit>
* <done: consider, write hello world rust code in nano text editor and compile and run>
* <done: consider, extend this example, for example print arguments to the binary at runtime>

## Output

### hello world - simple
Status: Success! :)

Create the rust source code file.
```
$ touch hello_world.rs
```

Edit the rust source code file.
* Using nano or some other text editor
```
$ nano hello_world.rs
```

Enter rust code into source file.
* save rust code source file contents
```
// Hello World rust example
// AGW example code snippets

// Main entry function
fn main() {
    // print text to the terminal window
    println!("Hello World!");
}
```

Compile rust source code
```
$ rustc hello_world.rs
```

Execute the compiled binary file
```
$ ./hello_world
Hello World!
```

List the directory contents
```
ls -al
total 4408
drwxrwxr-x 2 york-earwaker york-earwaker    4096 Nov 27 12:49 .
drwxrwxr-x 4 york-earwaker york-earwaker    4096 Nov 27 11:53 ..
-rwxrwxr-x 1 york-earwaker york-earwaker 4493232 Nov 27 12:49 hello_world
-rw-rw-r-- 1 york-earwaker york-earwaker     166 Nov 27 12:41 hello_world.rs
```

### hello world - command line arguments
Status: Success! :)

Open the hello world rust source code file
```
$ nano hello_world.rs
```

Edit the rust code in the source file contents
* save rust code source file contents
```
// Hello World rust example
// AGW example code snippets

// standard library imports
// std::env - for access to fuctions like: var, args, set_var, ...
use std::env;

// Main entry function
fn main() {
    // collect the evironment command line arguments
    // put them in a string vector variable called args
    let args: Vec<String> = env::args().collect();
    
    // print text to the terminal window
    // along with the values in the args variable
    dbg!();                                                    // debug statement with no text message
    eprintln!("all arguments, including binary path args[0]"); // standard debug text output
    println!("Hello World! {:?}\n", args.join(" "));            // debug format {:?}
}
```

Compile rust source code
```
$ rustc hello_world.rs
```

Execute the compiled binary file
```
./hello_world once upon a time in rust land
[hello_world.rs:16:5]
all arguments, including binary path args[0]
Hello World! "./hello_world once upon a time in rust land"
```

#### hello world - lots of printing options
Status: Success! :)

Code
```
// Hello World rust example
// AGW example code snippets

// standard library imports
// std::env - for access to fuctions like: var, args, set_var, ...
use std::env;

// Main entry function
fn main() {
    // collect the evironment command line arguments
    // put them in a string vector variable called args
    let args: Vec<String> = env::args().collect();

    // print text to the terminal window
    // as before does not use the vector args
    dbg!();
    eprintln!("option 1: no arguments");
    println!("Hello World!\n");

    // print the entire vector includeing args[0] the binary path    
    dbg!();
    eprintln!("does not work, option 2: all arguments, including binary path args[0]");
    eprintln!("does not work, println!(\"Hello World! {{args}}\");");
    eprintln!("returns, error[E0277]: `Vec<String>` doesn't implement `std::fmt::Display`");
    eprintln!("returns, {{args}} `Vec<String>` cannot be formatted with the default formatter\n");

    // print the entire vector includeing args[0] the binary path
    dbg!();
    eprintln!("option 3: all arguments, including binary path args[0]");
    println!("Hello World! {:?}", args);
    println!("Hello World! {:?}", args.join(" ")); // debug format {:?}
    println!("Hello World! {}\n", args.join(" ")); // display format {}

    // print all arguments except the very first args[0] the binary path
    dbg!();
    eprintln!("option 4: slice");
    println!("Hello World! {:?}", &args[1..]);
    println!("Hello World! {:?}", &args[1..].join(" ")); // debug format {:?}
    println!("Hello World! {}\n", &args[1..].join(" ")); // display format {}


    // prinr only args after args[0], that is won't print binary path
    // the idiomatic way to discard the program path
    dbg!();
    eprintln!("option 5: iterator, won't panic on empty");
    println!("Hello World! {:?}", args.iter().skip(1).collect::<Vec<_>>());
    println!("Hello World! {:?}", args.iter().skip(1).map(|s| s.as_str()).collect::<Vec<_>>().join(" ")); // debug format {:?}
    println!("Hello World! {}\n", args.iter().skip(1).map(|s| s.as_str()).collect::<Vec<_>>().join(" ")); // display format {}

    // loop over the args
    dbg!();
    for arg in args.iter().skip(1) {
        println!("{arg}");
    }
}
```

Compile
```
$ rustc hello_world.rs
```

Run
```
$ ./hello_world once upon a time in rust land
[hello_world.rs:16:5]
option 1: no arguments
Hello World!

[hello_world.rs:21:5]
does not work, option 2: all arguments, including binary path args[0]
does not work, println!("Hello World! {args}");
returns, error[E0277]: `Vec<String>` doesn't implement `std::fmt::Display`
returns, {args} `Vec<String>` cannot be formatted with the default formatter

[hello_world.rs:28:5]
option 3: all arguments, including binary path args[0]
Hello World! ["./hello_world", "once", "upon", "a", "time", "in", "rust", "land"]
Hello World! "./hello_world once upon a time in rust land"
Hello World! ./hello_world once upon a time in rust land

[hello_world.rs:35:5]
option 4: slice
Hello World! ["once", "upon", "a", "time", "in", "rust", "land"]
Hello World! "once upon a time in rust land"
Hello World! once upon a time in rust land

[hello_world.rs:43:5]
option 5: iterator, won't panic on empty
Hello World! ["once", "upon", "a", "time", "in", "rust", "land"]
Hello World! "once upon a time in rust land"
Hello World! once upon a time in rust land

[hello_world.rs:50:5]
once
upon
a
time
in
rust
land
```

## References

* Rust By Example, [WS](https://doc.rust-lang.org/rust-by-example/index.html), hello world
* The Rust Programming Language, [WS](https://doc.rust-lang.org/stable/book/), accepting command line arguments
