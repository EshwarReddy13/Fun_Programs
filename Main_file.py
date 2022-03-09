import pygame,sys
import random
from Player_Class import Player
from Player_Class import Dagger
from Enemy_Class import Enemy
from Enemy_Class import Skull
from pygame.locals import *
pygame.init()
win = pygame.display.set_mode((1000,500))
pygame.display.set_caption("Gladiator Rush")
Title = pygame.image.load("images/Title.png")
bg = pygame.image.load("images/background.png")
instructions_image = pygame.image.load("images/instructions.png")
clock = pygame.time.Clock()
keys = pygame.key.get_pressed()
startfont = pygame.font.SysFont("hanging letters",70)
Player = Player(100,200)
enemy = Enemy(400)
skulls = []
daggers = []
clicked = False			 	    
def TitleScreen():
	while True:
		win.fill((0,0,0))
		clock.tick(60)
		mx,my = pygame.mouse.get_pos()
		button = pygame.Rect(310,380,370,80)
		win.blit(Title,(0,0))
		starttext = startfont.render("Click To Play" , 1,(random.randrange(0,256),random.randrange(0,256),random.randrange(0,256)))
		win.blit(starttext , (320,380))		
		pygame.display.update()
		if button.collidepoint((mx,my)):
			if clicked:
				instructions()
		clicked = False				
		for event in pygame.event.get():
			if event.type == pygame.QUIT:
				pygame.quit()
				sys.exit()
			if event.type == pygame.KEYDOWN:
				if event.key == pygame.K_ESCAPE:
					pygame.quit()
					sys.exit()
			if event.type == pygame.MOUSEBUTTONDOWN:
				if event.button == 1:
					clicked = True			

def instructions():
	run = True
	while run:
		clock.tick(60)
		mx,my = pygame.mouse.get_pos()
		win.fill((0,0,0))
		win.blit(instructions_image,(0,0))
		button_to_play = pygame.Rect(800,24,180,50)
		if button_to_play.collidepoint((mx,my)):
			if clicked:
				MainScreen()
		clicked = False				
		for event in pygame.event.get():
			if event.type == pygame.QUIT:
				pygame.quit()
				sys.exit()
			if event.type == pygame.MOUSEBUTTONDOWN:
				if event.button == 1:
					clicked = True
		pygame.display.update()			

def MainScreen():
	daggers_left = 10
	i=0
	throw_delay =0			
	run = True
	while run:
		keys = pygame.key.get_pressed()
		facing = 1
		clock.tick(60)
		win.fill((0,0,0))
		scorefont =pygame.font.SysFont("BatmanForeverAlternate" , 30)
		scorefont1 =pygame.font.SysFont("BatmanForeverAlternate" , 40)
		scorefont2 =pygame.font.SysFont("BatmanForeverAlternate" , 100)							
		Player.move()		
		for event in pygame.event.get():
			if event.type == pygame.QUIT:
				pygame.quit()
				sys.exit()
			if event.type == pygame.KEYDOWN:
				if event.key == pygame.K_ESCAPE:
					run = False
					TitleScreen()
		if Player.right:
			facing =1
		else:
			facing = -1

		if throw_delay > 0:
			throw_delay +=1
		if throw_delay > 3:
			throw_delay = 0	

		if daggers_left > 0 and throw_delay == 0:					
			if keys[pygame.K_SPACE]:		
				daggers.append(Dagger(Player.x+20,Player.y-23,facing))
				daggers_left -= 1							
		for dagger in daggers:
			if dagger.x > 0  and dagger.x < 1000:	
				dagger.x += dagger.vel
			else:
				daggers.pop(daggers.index(dagger))

		if enemy.visible == True:
			if Player.hitbox[1] < enemy.hitbox[1] + enemy.hitbox[3] and Player.hitbox[1] + Player.hitbox[3] > enemy.hitbox[1]:
				if Player.hitbox[0] + Player.hitbox[2] > enemy.hitbox[0] and Player.hitbox[0] < enemy.hitbox[0] + enemy.hitbox[2]:
					enemy.hit()
					Player.health -= 1
					print("You have been HIT!!!!")

		Draw_on_MainScreen()
		scoretext =scorefont.render("Daggers :- "+str(daggers_left) , 1,(0,0,0))
		win.blit(scoretext,(650,10))
		while i <200:			
			spawntext = scorefont1.render("Spawning....." ,1 ,(0,0,0))
			win.blit(spawntext,(300,100))
			pygame.time.delay(10)
			i +=1
			pygame.display.update()	
		enemy.show(win)			
		enemy.move()							
		pygame.display.update()	

def Draw_on_MainScreen():
	win.blit(bg , (0,0))
	Player.show(win)		
	for dagger in daggers:
		dagger.show(win)				
	pygame.display.update()		

TitleScreen()