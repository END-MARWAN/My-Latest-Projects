
#r => only read
#r+ => read and write

#w => only write create file     clear old data
#w+ => read and write   create file     clear old data

#a => append  only write    create file  save to old data
#a+ => append read and write   create file  save to old data

with open ("text.csv" , "r") as file:
    file.read
