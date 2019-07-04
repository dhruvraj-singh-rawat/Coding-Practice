from collections import defaultdict
from heapq import heappush, heappop


class voteProg:
    def __init__(self,data,k=3):
        self.data=data
        self.k=k
        self.voters = {}
        self.tally = defaultdict(int)
        self.fraud = []
        self.run()
    
    def run(self):
        self.load_data()
        self.winner_candidates()
    
    def load_data(self):
        for voter, candidate in self.data:
            if voter not in self.voters :
                self.voters[voter] = candidate
                self.tally[candidate]+=1
            else:
                self.report_fraud(voter)
        
    def report_fraud(self,voter):
        self.fraud.append(voter)
    
    def winner_candidates(self):
        heap=[]
        for candidate,votes in self.tally.items():
            heapq.heappush(heap,(votes,candidate))
        
        for i in range(1 , self.k+1):
            candidate = heapq.heappop(heap)[1]
            print("#{} Candidate".format(i),candidate)

    
f = open("votingData.txt", "r")


voteProg(f)