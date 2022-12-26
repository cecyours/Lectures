import java.util.*
var sc1 = Scanner(System.`in`)
fun main() {

    print("Enter name")
    var getName = sc.nextLine()

    print("Enter age")
    var getAge = sc.nextInt()

    println("===========================================")

    var obj = details(NAME = getName,AGE = getAge)
    print("Getter -->")
    println(obj.name)

    
    obj.age = 9; // call setter
    print("Setter -->")
    println(obj.age)

    obj.age = -9; // call setter
    print("Setter -->")
    println(obj.age)

}

class details(NAME:String,AGE:Int){

    var name:String=NAME
    get(){

        return field.toUpperCase()
    }

    var age:Int = AGE
        set(value) {
         if(value>0)
         {
             field=value
         }
            else{
                println("sorry, -ve value");
                field = -1
         }



    }
}