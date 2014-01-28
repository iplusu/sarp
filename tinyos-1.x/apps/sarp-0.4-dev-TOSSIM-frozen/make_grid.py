num_nodes = input("How many nodes?")
f = open("nss/blnet.nss", 'w')
for i in range(0,num_nodes):
    for j in range(0,num_nodes):
            f.write("%d:%d 1.0\n" % (i, j))

    
