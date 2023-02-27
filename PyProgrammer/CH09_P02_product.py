#object oriented programming

class Product:

    def __init__(self,id,name,price,category):
        self.id = id
        self.name = name
        self.price = price
        self.category = category

    def display(self):
        print("id : ",self.id," name : ",self.name," price : $",self.price," category : ",self.category)

        
p1 = Product(1,"vivo",299,"mobile");
p2 = Product(2,"oppo",600,"camera");
p3 = Product(3,"sumsung",872,"number");
p4 = Product(4,"apple",789,"fruit");
p5 = Product(5,"Micromax",699,"charger");
p6 = Product(6,"Asus",999,"laptop");


products = list()

products.append(p1);
products.append(p2);
products.append(p3); 
products.append(p4);
products.append(p5);
products.append(p6);

for i in products:
    i.display()

