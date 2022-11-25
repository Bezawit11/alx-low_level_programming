from os.path import exists
from models.base_model import BaseModel
import json


class FileStorage:
    """  """
    __file_path = "/alx-low_level_programming/prac/file.json"
    __objects = {}  # dictionary - empty but will store all objects by <class name>.id

    def all(self):
        """  """
        print("all")
        return self.__objects

    def new(self, obj):
        """sets in __objects the obj with key <obj class name>.id"""
        FileStorage.__objects["{}.{}".format(obj.__class__.__name__, obj.id)] = obj.to_dict()

    def save(self):
        """ """
        print("saving")
        out_file = open(self.__file_path, "w")
        json.dump(self.__objects, out_file, indent=6)
        out_file.close()

    def reload(self):
        """  """
        try:
            with open(FileStorage.__file_path) as f:
                read = json.load(f)
                for keys, values in read.items():
                    for k, v in values.items():
                        if k == "__class__":
                            values.pop("__class__")
                            break
                        break
                    self.__objects[keys] = values
        except (json.decoder.JSONDecodeError, FileNotFoundError):
            return
