def find_outlier(integers):
    
    # odd_count = 0 # redundant so commented out 
    even_count = 0
    odd_value = None;
    even_value = None;
    return_value = None;
    
    # iterate through the integers list/array
    for num in integers:
        # modulo remainder is zero if num is even
        if num % 2 == 0:
            # if this does not go above 1 it is an odd list of numbers
            even_count += 1
            # the only positive integer result to return for an otherwise odd list of numbers
            even_value = num
        else:
            # if this does not go above 1 it is an even list of numbers, redundant so commented out
            # odd_count += 1
            # the only negative integer result to return for an otherwise even list of numbers
            odd_value = num
    
    # there was only one even number
    if even_count == 1:
        return_value = even_value
    # there was only one odd number
    else:
        return_value = odd_value  
            
    return return_value