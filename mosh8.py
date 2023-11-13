weight = int(input('weight: '))
char = input('(L)bs or (K)g: ')
weight_in_pounds = weight / 0.45
weight_in_kg = 0.45 * weight
if char.upper() == 'K':
    print(f'you are {weight_in_pounds} pounds.')
elif char.upper() == 'L':
    print(f'you are {weight_in_kg} kilograms.') 
else:
    print('ERROR')
