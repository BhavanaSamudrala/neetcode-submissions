from typing import List

def contains_duplicate(words: List[str]) -> bool:
    my_set = set()
    for w in words:
        if w in my_set:
            return True
        my_set.add(w)
    return False

# do not modify code below this line
print(contains_duplicate(["hello", "world", "hello"]))
print(contains_duplicate(["hello", "world", "i", "am", "great"]))
print(contains_duplicate(["hello", "hello", "hello"]))
print(contains_duplicate(["Hello", "hellooo", "hello"]))
