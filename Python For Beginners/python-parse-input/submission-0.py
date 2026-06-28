from typing import List

def read_integers() -> List[int]:
    user_input = input()
    string = user_input.split(",")
    new_list = []
    for i in string:
        new_list.append(int(i))
    return new_list

# do not modify the code below
print(read_integers())
print(read_integers())
print(read_integers())
