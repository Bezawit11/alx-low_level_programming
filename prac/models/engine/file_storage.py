from os.path import exists
import json
class FileStorage:
    __file_path = "/alx-low_level_programming/prac/file.json"
    __objects = {}  # dictionary - empty but will store all objects by <class name>.id

    def all(self):
        print("all")
        return self.__objects

    def new(self, obj):
        """sets in __objects the obj with key <obj class name>.id"""
        self.__objects['obj.__class__.__name__.id'] = obj

    def save(self):
        print("saving")
        with open(self.__file_path, mode='w', encoding="utf-8") as f:
            json.dump(self.__objects, f)

    def reload(self):
        try:
            with open(FileStorage.__file_path) as f:
                objdict = json.load(f)
                for o in objdict.values():
                    cls_name = o["__class__"]
                    del o["__class__"]
                    self.new(eval(cls_name)(**o))
        except FileNotFoundError:
            return
