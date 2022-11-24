import cmd
class HBNBCommand(cmd.Cmd):
    def __init__(self):
        cmd.Cmd.__init__(self)
        self.prompt = '(hbnb) '

    def do_quit(self, arg):
        return True
    
    def help_quit(self):
        print("Quit command to exit the program")
        
    def do_EOF(self, arg):
        return True
        
    def help_EOF(self):
        print("terminate")
        
if __name__ == '__main__':
    HBNBCommand().cmdloop()
        
    
