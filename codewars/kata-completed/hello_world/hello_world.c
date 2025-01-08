//Write a function `greet` that returns "hello world!"
const char* greet() {
  static const char* greeting = "hello world!";
  return greeting;
}