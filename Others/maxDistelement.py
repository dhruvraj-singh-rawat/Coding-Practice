def max_dist(arr):
    pos_map = dict()
    max_dist = -1
    for pos,value in enumerate(arr):
        
        if value in pos_map.keys():            
            if (pos-pos_map[value]>max_dist):
                max_dist = pos-pos_map[value]
        else:
            pos_map[value]=pos
    
    return max_dist

arr = [1,7,8,6,1,4,0,7]
print(max_dist(arr))


