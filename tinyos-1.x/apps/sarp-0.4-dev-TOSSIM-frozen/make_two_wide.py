num_nodes = input("How many nodes?")
f = open("two_wide.nss", 'w')
for i in range(0,num_nodes):
    for j in range(0,num_nodes):
        if i == j:
            pass
        elif (i % 2 == 0): # if it is even
            if ( (j == i + 1) or (j == i + 2) or (j == i - 2) or(j == i - 3) ):
                f.write("%d:%d 0.0\n" % (i, j))
            else:
                f.write("%d:%d 1.0\n" % (i, j))
        elif (i % 2 > 0): # if it is odd
            if ( (j == i + 2) or (j == i + 3) or (j == i - 2) or (j == i - 1) ):
                f.write("%d:%d 0.0\n" % (i, j))
            else:
                f.write("%d:%d 1.0\n" % (i, j))

print "Network file written to two_wide.nss"
