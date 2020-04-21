import time


start = time.time()

addition = 0
for num in range(1000000):
    addition += num;


end = time.time()


print("finished in {:.2} seconds".format(end-start))
