from math import sqrt

n = input("How many nodes for the grid? (Enter a perfect square): ")

root = int(sqrt(n))

f = open("grid.nss", 'w')

for i in range(0, n):
   for j in range(0, n):
      j_in_route = False

      if i is j:
         pass
      elif 0 is i:
         if (j is i + 1) or (j is i + root):
            f.write("%d:%d 0.0\n" % (i, j))
            j_in_route = True
      elif (root - 1) is i:
         if (j is i - 1) or (j is i + root):
            f.write("%d:%d 0.0\n" % (i, j))
            j_in_route = True
      elif (root * (root - 1)) is i:
         if (j is i + 1) or (j is i - root):
            f.write("%d:%d 0.0\n" % (i, j))
            j_in_route = True
      elif (root * root - 1) is i:
         if (j is i - 1) or (j is i - root):
            f.write("%d:%d 0.0\n" % (i, j))
            j_in_route = True
      elif (0 < i) and (i < (root - 1)):
         if (1 is abs(j - i)) or (j is i + root):
            f.write("%d:%d 0.0\n" % (i, j))
            j_in_route = True
      elif (0 is not i) and ((root * (root - 1)) is not i) and  (0 is (i % root)):
         if (root is abs(j - i)) or (j is i + 1):
            f.write("%d:%d 0.0\n" % (i, j))
            j_in_route = True
      elif ((root - 1) is not i) and (root * root - 1 is not i) and ((root - 1) is (i % root)):
         if (root is abs(j - i)) or (j is i - 1):
            f.write("%d:%d 0.0\n" % (i, j))
            j_in_route = True
      elif (root * (root - 1) < i) and (i < root * root - 1):
         if (1 is abs(j - i)) or (j is i - root):
            f.write("%d:%d 0.0\n" % (i, j))
            j_in_route = True
      else:
         if (1 is abs(j - i)) or (root is abs(j - i)):
            f.write("%d:%d 0.0\n" % (i, j))
            j_in_route = True
      
      if not j_in_route:
         f.write("%d:%d 1.0\n" % (i, j))

print "Network file written to grid.nss"
    
