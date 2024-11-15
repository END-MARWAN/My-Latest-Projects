import speech_recognition as sr
import sys
rec = sr.Recognizer()

with sr.Microphone() as src:
    while True:
          print("say something...")
          audio = rec.listen(src)
          text = rec.recognize_ (audio)
    
    

if text in "hello":    
    print("hi marwan, how are you?")
elif text in ["i am fine" , "good" , "i'm good"]:
    print("nice to meet you")

elif text in ["close"]:
    sys.exit(0)

else:
    print("i don't understand you")  