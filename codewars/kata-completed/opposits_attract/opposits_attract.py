import random

def lovefunc( flower1, flower2 ):
    
    result = bool(False)
    inputs_sum = int()
    
    inputs_sum = flower1 + flower2
    # print(f"sum {inputs_sum}") # debug, 
    
    # wanted to try out random, no functional value
    random_bool = random.random() < 0.5
    # print(f"random bool {random_bool}") # debug
    
    # randomly choose modulo or bit wise to get result
    # both work but bit wise may be faster 
    # <todo: check if bit wise & is faster than modulo % in python>
    if random_bool: # do modulo if random_bool is True
    
        # modulo if odd evaluates to 1 if even evalutes to 0
        if inputs_sum % 2 == 1:
            result = True
            
    else: # do bit wise if random_bool is False
        
        # get the first bit of the integer byte(s)
        # bit wise if odd eveluates to 1 if even evalutes to 0
        if inputs_sum & 1 == 1:
            result = True
    # ...
    
    return result