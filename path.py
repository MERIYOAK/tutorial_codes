from pathlib import Path


path1 = Path("ecommerce")
print(path1.exists())

#path2 = Path("emails")
#print(path2.mkdir())
#print(path2.rmdir())

path3 = Path()
print(path3.glob('*.py'))
for file in path3.glob('*.py'):
    print(file)  