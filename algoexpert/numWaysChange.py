def numWaysChange(n,demons):
    num_ways = [0] * (n+1)
    num_ways[0]=1

    for i in demons:
        for j in range(n+1):
            if j>=i:
                num_ways[j]+=num_ways[j-i]
    
    return num_ways[n]

    