def angleFinder(time_input):
    hr,min = time_input.split(':')
    hr = float(hr)
    min = float(min)
    
    if(hr>=12):
        hr = hr - 12
    angle_hr = hr * 30  + (min/60)*30
    angle_min = (min/60)*360
    print(angle_hr,' ',angle_min)

    angle = angle_hr-angle_min
    if (angle>=0):
        print('The Hr is ahead then min by: ',angle,' Degrees')
    else:
        print('The Minute is ahead then hr by: ',angle,' Degrees')
    


time_input = input('Enter the Time: ')
angleFinder(time_input)

