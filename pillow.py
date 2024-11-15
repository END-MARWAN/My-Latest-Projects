from PIL import Image 

before = Image.open ("wow.jpg")
box = (0,0,500,500)
after = before.crop (box)
after.show()

