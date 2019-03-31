adjacency_mat = {}
stack = []

lines = []
f = open('sampleCode.cpp','r')
lines = f.readlines()

def isBranchingStatement(line_num):
    if("if" in lines[line_num]):
        return True
    if("for" in lines[line_num]):
        return True
    if("while" in lines[line_num]):
        return True
    return False

numRegions=1
for i in range(0, len(lines)):
    if("else if" in lines[i]):
        numRegions+=1
        continue
    if("if" in lines[i]):
        numRegions+=1
        continue
    if("for" in lines[i]):
        numRegions+=1
    if("while" in lines[i]):
        numRegions+=1
print("Regions : ",numRegions)
print("Cyclomatic Complexity : ",numRegions)