class Solution:
    def calPoints(self, operations: List[str]) -> int:
        record = []

        for i in operations:
            if i == "+":
                record.append(record[-1]+record[-2])
            elif i == "D":
                record.append(record[-1]*2)
            elif i == "C":
                record.pop(-1)
            else:
                record.append(int(i))
        
        return sum(record)
        