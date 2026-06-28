from typing import List, Dict

def create_dict(name: str, age: int) -> Dict[str, int]:
    #my_dict = {}
    return {name:age}


def list_to_dict(words: List[str]) -> Dict[str, int]:
    my_dict = {}
    for w in range(len(words)):
        temp = words[w]
        my_dict[temp] = w

    return my_dict

# don't modify code below this line
print(create_dict("Alice", 25))
print(create_dict("Jane", 35))
print(create_dict("Joe", 45))

print(list_to_dict(["Alice", "Jane", "Joe"]))
print(list_to_dict(["Apple", "Banana", "Watermelon", "Pineapple"]))
