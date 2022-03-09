from PyQt5 import QtWidgets
from PyQt5.QtWidgets import QApplication, QMainWindow
import sys
import random

class MyWindow(QMainWindow):

	def __init__(self):
		super(MyWindow,self).__init__()
		self.setGeometry(500,500,400,400)
		self.setWindowTitle("Yo What's up")
		self.initUI()

	def initUI(self):
		self.label = QtWidgets.QLabel(self)
		self.label.setText("Yo What's up ")
		self.label.move(100,100)

		self.button = QtWidgets.QPushButton(self)
		self.button.setText("Click it plss")
		self.button.clicked.connect(self.clicked)

	def clicked(self):
		self.label.move(random.randrange(0, 500),random.randrange(0, 500))
		self.update()
		
	def update(self):
		self.label.adjustSize()
def window():
	app = QApplication(sys.argv)
	win = MyWindow()

	win.show()
	sys.exit(app.exec_())

window() 