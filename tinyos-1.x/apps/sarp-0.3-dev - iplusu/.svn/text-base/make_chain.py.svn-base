num_nodes = input("How many nodes?")
f = open("nss/chnet.nss", 'w')
for i in range(0,num_nodes):
    for j in range(0,num_nodes):
        if i == j:
            pass
        elif (j == i - 1):
            f.write("%d:%d 0.0\n" % (i, j))
        elif (j == i + 1):
            f.write("%d:%d 0.0\n" % (i, j))
        else:
            f.write("%d:%d 1.0\n" % (i, j))
print "Topology file writtern to 'chnet.nss'"
    
