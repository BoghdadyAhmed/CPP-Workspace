counter = 0
while counter < 3:
    counter = counter + 1
    print('looop')
else:
    print('insid else')
    print('----------------------------------------------')
    for i in range(10):
     if i == 2:
       break
     print(i)
    print('----------------------------------------------')