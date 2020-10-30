
#   Assignment Question 7B

import sys

inputFile,outputFile=sys.argv[1],sys.argv[2]

fi=open(inputFile,'r')
fo=open(outputFile,'w')

Lines = fi.readlines()

count=0

for line in Lines:
    fo.writelines(line)
