# tehtävä 1 (5x5 neliö)
for x in range(5):
    for i in range(5):
        i = "*"
        print(i, end="")
    print('')

# välejä kuvioiden väliin
print("")

#tehtävä 2 (suorakulmainen kolmio)
for x in range(5, 0, -1):
    for j in range(1, x+1):
        i = "*"
        print(i, end="")
    print('')    


#tehtävä 3 (nuoli kuvio)
import math

for x in range(5):
    for j in range(0, x):
        print("*", end="")
    print('')

for x in range(5):
    for j in range(0, 5-x):
        print("*", end="")
    print('')


# välejä kuvioiden väliin
print("")

#tehtävä 4 (X kuvio)
for x in range(5):
    for j in range(0,5):
        if(x == j or j == 5 - 1 - x):
            print("*", end="")
        else:
            print('', end=" ")
    print('')