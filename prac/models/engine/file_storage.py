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
        FileStorage.__objects["{}.{}".format(obj.__class__.__name__, obj.id)] = obj.__dict__

    def save(self):
        print("saving")
        out_file = open(self.__file_path, "w")
        json.dump(self.__objects, out_file, indent=6)
        out_file.close()
        #with open(self.__file_path, mode='w', encoding="utf-8") as f:
         #   json.dump(self.__objects, f)

    def reload(self):
        try:
            with open(FileStorage.__file_path) as f:
                read = json.load(f)
                for keys, values in read.items():
                    self.__objects[keys] = values
        except (json.decoder.JSONDecodeError, FileNotFoundError):
            return
