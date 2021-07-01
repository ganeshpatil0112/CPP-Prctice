"""
Example 1:

Input:

str = aaaabbbccc

Output: a4b3c3
"""
def encode(arr):
    
    x = arr[0]
    count = 1
    for i in range(len(arr)-1):
        if arr[i] == arr[i+1]:
            count += 1;
        else:
            x = x + str(count)
            count = 1
            x = x + arr[i+1]
    x = x + str(count)
    return x

encode("aaaabbbccc")  #Output : a4b3c3