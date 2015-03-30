# This little piece of script produces nice cryptic sounds from the old computer days. Enjoy
import winsound
from random import random
from time import sleep
freq=int((random()*10000)%5000)
dur=int(random()*100)
while True:
    try:
        winsound.Beep(freq,dur)
    except ValueError:
        freq+=1000
    freq=int((random()*10000)%5000)
    dur=int(random()*100)
    sleep(0.02)
