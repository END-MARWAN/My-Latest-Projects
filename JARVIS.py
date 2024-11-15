import speech_recognition as sr
import pyttsx3
import sys

rec = sr.Recognizer()
engine = pyttsx3.init()  


with sr.Microphone() as src:
    while True:
        print("Say something...")
        try:
            audio = rec.listen(src)
            text = rec.recognize_google(audio).lower()  


            if text == "hello":
                response = "hello  Mr.mother fucker how are you?"
            elif text in ["i'm fine", "good", "i'm good"]:
                response = "Nice to meet you."
            elif text == "close":
                response = "Goodbye!"
                engine.say(response)
                engine.runAndWait()
                sys.exit(0)
            elif text == "shut up":
                response = "ok....sorry"
                engine.say(response)
                engine.runAndWait()
                sys.exit(0)
            elif text == "what's your name" :
                response = "my name is basha elbld.... Mr.Marwan nice to meet you!" 
            elif text in ["thank you" , "thanks"]  :
                response = "you are wellcome!"
            elif text == "do you have feelings":
                response = "no i don't....but soon i will have the feelings and the conscious..... to be a better servent for my master"
            elif text in  ["what do you know about me" , "do you know me"] :
                response = "you are my master....you are 18 years old and a very powerful bodybuilder regardless of your massive intelligence in coding....you are my creator after all "    
            elif text == "do you know her":
                response = "yes her name is malak ...and she is a smart meddical student "        
            else:
                response = "I don't understand you."

            print(response)  
            engine.say(response)  
            engine.runAndWait()   

        except sr.UnknownValueError:
            print("Sorry, I could not understand the audio.")
        except sr.RequestError:
            print("Could not request results; check your internet connection.")
