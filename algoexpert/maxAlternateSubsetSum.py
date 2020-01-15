def sum_max_alternate(array):
    if len(array)==0:
        return
    if (len(array)==1):
        return array[0]
    
    second = array[0]
    first = max(second,array[1])

    for i in range(2,len(array)):
        current = max(first,second+array[i])
        second=first
        first=current
    
    return current