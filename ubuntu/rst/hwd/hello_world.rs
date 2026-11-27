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
