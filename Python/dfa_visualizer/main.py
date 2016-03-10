import pygame
import sys
from pygame.locals import *
import random

white = (255,255,255)
black = (0,0,0)

def random_location(self,width,height):
    return random.randint(height,width),random.randint(height,width)

class State(object):
    def __init__(self,locx,locy,id):
        self.id = id
        self.locx = locx
        self.locy = locy

class Dfa(object):
    def __init__(self):
        pygame.init()
        self.font = pygame.font.SysFont('Arial', 12)
        self.state_circle = [State(100,200,0),State(200,300,1),State(50,150,2)]
        pygame.display.set_caption('Dfa Visualiser')
        self.screen = pygame.display.set_mode((600,400), 0, 32)
        self.screen.fill((white))
        pygame.display.update()

    def get_random_location(self,width=50,height=100):
        return (random.randint(width,height),random.randint(width,height))

    def addCircle(self):
        selected = random.choice(self.state_circle)
        self.circ = pygame.draw.circle(self.screen,(0,0,255),
            (selected.locx,
            selected.locy),
            15,1)
        self.addText(selected)

    def addText(self,state):
        self.screen.blit(self.font.render('1', True, (255,0,0)),
            (state.locx,
            state.locy))
        pygame.display.update()


if __name__ == '__main__':
    dfa = Dfa()
    dfa.addCircle()
    while True:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit(); sys.exit();