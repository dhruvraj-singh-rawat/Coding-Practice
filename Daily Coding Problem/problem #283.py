import heapq

def RegularNo(n):
    sol=[1]
    count =0 
    prev = 0 

    while count < n:
        current = heapq.heappop(sol)
        if(current>prev):
            yield current
            heapq.heappush(sol,current*2)
            heapq.heappush(sol,current*3)
            heapq.heappush(sol,current*5)
            prev = current
            count = count +1

k = int(raw_input('Enter Number of Regular Numbers to be generated: '))
for i in RegularNo(k):
    print(i)