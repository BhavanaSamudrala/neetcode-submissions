from typing import Dict # this adds type hinting for Dict

def count_characters(word: str) -> Dict[str, int]:
    my_dict ={}
    # all unique letters in the string will be keys in the dictionary
    # maybe create a new list
    for i in word:
        if i in my_dict:
            my_dict[i] += 1
        else:
            my_dict[i] = 1
        

    return my_dict




# don't modify below this line
print(count_characters("hello"))
print(count_characters("world"))
print(count_characters("hello world"))
print(count_characters("this is a longer sentence"))
