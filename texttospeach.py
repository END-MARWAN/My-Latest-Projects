import pyttsx3 

engine = pyttsx3.init()  # Adjust based on your OS
name = input("What's your name? ")
engine.say(f"hello {name}")
engine.runAndWait()