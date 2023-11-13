name = input('what is your name? ' )

if len(name) < 3:
    print('name must be atleast three characters.')
elif len(name) > 10:
    print('name must be maximum of ten characters. ') 
else:
    print('name looks good. ')