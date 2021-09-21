from win32com.client import Dispatch
def speak(str):
    speak = Dispatch("SAPI.SpVoice")
    speak.Speak(str)

if __name__ == "__main__":
    print(dir(Dispatch))
    speak("You are the best, my friend")
    speak("You code a lot, my friend.")
    speak("This is a very long text")
    speak("I am getting tired of reading this.")
    speak("Please kill me.")