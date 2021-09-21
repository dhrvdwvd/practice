def some_big_work():
    import time
    large_text = "this is a very large text and yes huge text, extravagant text."
    # Some 4 seconds task such as reading a huge file.
    time.sleep(4)
    # The above is a coroutine, which is run first time, this signifies some long
    # calculations needed to initialize a function/method.
    while(True):
        text = (yield)
        if text in large_text:
            print("Your text is in the large_text")
        else:
            print("Your text is not in the large_text")

if __name__ == "__main__":
    print("Initiating the co-routine...")
    srch = some_big_work()
    next(srch)
    print("Search started...")
    srch.send("huge")
    input("Press any key...")
    srch.send("huge and")
    srch.close()
    # After closing, if some text is sent, stop iteration error is displayed.
    srch.send("huge text")