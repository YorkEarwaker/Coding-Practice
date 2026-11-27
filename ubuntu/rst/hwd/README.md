# Hello world hwd

A first rust example using a text editor on the command line.

stub.

## Notes

Objectives
* Use nano to create first hello world rust example

## Status
TODO
* <todo: consider, extend this example, for example print arguments to the binary at runtime>

DONE
* <done: consider, intent to commit>
* <done: consider, write hello world rust code in nano text editor and compile and run>

## Output
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

## References

* Rust By Example, [WS](https://doc.rust-lang.org/rust-by-example/index.html)
