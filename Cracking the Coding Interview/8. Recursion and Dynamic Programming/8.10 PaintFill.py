canvas_2D = [[0,0,1,0],[0,0,0,1],[0,0,0,1],[0,1,1,1]]

point = (2,3)


def paintBox(canvas_2D,point,colour_new,position,colour_old):

     

    if(colour_old==None):
        colour_old = canvas_2D[point[0]][point[1]]

    if((position[0]>=len(canvas_2D)) or position[0]<0):
        return
    elif ((position[1]==len(canvas_2D[1])) or point[1]<0):
        return
    
    if(canvas_2D[position[0]][position[1]] == colour_old and canvas_2D[position[0]][position[1]] != colour_new ):
        canvas_2D[position[0]][position[1]] = colour_new
        temp = (position[0],position[1])

        #print(position[0],' ',position[1],' the value at the pos is ',canvas_2D[position[0]][position[1]])

        #print('Going Right')
        position = (temp[0],temp[1]+1)
        paintBox(canvas_2D,point,colour_new,position,colour_old)

        #print('Going Down')   
        position = (temp[0]+1,temp[1])
        paintBox(canvas_2D,point,colour_new,position,colour_old)
        
        #print('Going UP',' ',position[0],' ',position[1])
        position = (temp[0]-1,temp[1])
        paintBox(canvas_2D,point,colour_new,position,colour_old)

        #print('Going Left')
        position = (temp[0],temp[1]-1)
        paintBox(canvas_2D,point,colour_new,position,colour_old)

        position = (temp[0]+1,temp[1]+1)
        paintBox(canvas_2D,point,colour_new,position,colour_old)

        position = (temp[0]+1,temp[1]-1)
        paintBox(canvas_2D,point,colour_new,position,colour_old)

        position = (temp[0]-1,temp[1]+1)
        paintBox(canvas_2D,point,colour_new,position,colour_old)

        position = (temp[0]-1,temp[1]-1)
        paintBox(canvas_2D,point,colour_new,position,colour_old)

    return canvas_2D

colour_old = None
colour_new = 5
point = (3,1)
print(paintBox(canvas_2D,point,colour_new,point,colour_old))






