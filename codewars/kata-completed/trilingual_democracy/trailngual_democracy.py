# input is a string of three chars from the set 'D', 'F', 'I', 'K';
# output is a single char from this set
def trilingual_democracy(group):
    # implement the rules...
    
    # print(f"input group is {group}") # debug, check input value
    
    language_to_use = str() # return value
    
    chars_permitted = "DFIK" # needed to check for set difference
    chars_permitted_set = set()
    chars_permitted_set.update(chars_permitted) # set of permitted values
                               
    char_input_set = set() # easy way to count unique input items, only stores one instance of letter
    char_input_set.update(group) # put input letters string into the set
    
    # print(f"set of inputs {char_input_set}") # debug, check group stirng conversion to set
    
    char_set_list = list() # to convert set back to list to index more easily
    
    if len(char_input_set) == 1:
        # rule 1 - use same lanaguage
        # rule_num = 1 # no need for complexity we have found the answer
        char_set_list = list(char_input_set)
        language_to_use = char_set_list[0]
    elif len(char_input_set) == 3:
        #rule 3 - use different language
        # rule_num = 3 # no need for complexity use set logic difference
        dif_set = chars_permitted_set.difference(char_input_set)
        char_set_list = list(dif_set)
        language_to_use = char_set_list[0]
    else: # set has only two members
        #rule 2 - use minority language
        # rule_num = 2
        char_set_list = list(group) # 
        for element in char_input_set:
            if char_set_list.count(element) == 1: # the minority language 
                language_to_use = element
                break;
    
    # Rule 1
    # When all three are native speakers of the same language, 
    # it also becomes their group's language.5a
    
    # Rule 2
    # When two are native speakers of the same language, 
    # but the third person speaks a different language, 
    # all three will converse in the minority language.5b

    # Rule 3
    # When native speakers of three different languages meet, 
    # they eschew these three languages and instead use the remaining of
    # the four official languages.5c
    
    return language_to_use
