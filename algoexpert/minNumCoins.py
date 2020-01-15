def minNumberOfCoinsForChange(n,denoms):
    
    num_ways = [float("inf")]*(n+1)
    num_ways[0]=0

    for i in range(n+1):
        for j in denoms:
            if i>=j:
                num_ways[i] = min(num_ways[i], num_ways[i-j])
    
    if num_ways[n] == float("inf"):
        return -1
    
    return num_ways[n]
