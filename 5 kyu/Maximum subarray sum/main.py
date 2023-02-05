def max_sequence(arr):
    if(len(arr)== 0):
        return 0
    maxsum, current_sum = arr[0],arr[0]
    for it in range(1,len(arr)):
        current_sum = max(arr[it],current_sum + arr[it])
        maxsum = max(maxsum,current_sum)
    if(maxsum <= 0):
        return 0
    return maxsum
