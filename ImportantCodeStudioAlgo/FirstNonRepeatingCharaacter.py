NO_OF_CHARS = 256
def getCharCount(string):
    count = [0] * NO_OF_CHARS
    for i in string:
        count[ord(i)] += 1
    return count

def nonRepeatingChar(string):
    # Please add your code here
    count = getCharCount(string)
    i = -1
    k = 0
    for j in string:
        if count[ord(j)] == 1:
            i = k
            break
        k += 1
    return string[i]

# Main
string = input()
print(nonRepeatingChar(string))
