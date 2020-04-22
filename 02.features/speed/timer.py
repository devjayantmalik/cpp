import time

# Get the start time
start = time.time()

# Perform calculations
addition = 0
for num in range(1000000):
    addition += num

# Get the end time
end = time.time()

# Print the time difference
print("The program finished in {:.2f} seconds".format(end-start))
