let x = 20;
document.getElementById("demo").innerHTML = x;  

function MyFun(p1,p2)
{
    return p1*p2;
}

let rs = MyFun(10,2);
document.getElementById("f1").innerHTML = rs;


        // Object

const person = { 
    firstname:"Vijay" , 
    lastname:"Kush" ,
     age:21
    };
                 
        // New

const per = new Object();
per.name = "Wise";
per.role = "devloper";

         // Property 
let z = "age";

    // add

per.language = "English";

// delete 
delete person.age;

document.getElementById("demo1").innerHTML = "Information is : "+person.firstname + person.lastname + " " + per.role + person[z] + 
per.language;

document.getElementsByClassName("details")[0].innerHTML = person.lastname;

    // Nested Objects

    const inf = {
        nm :"MCA",
        ln :"IT",
        stu : 
        {
            batch : "EC",
        },
        fullname : function()
        {
            return this.nm + " " + this.ln;
        }
    }

// person.name = function()
// {
//     return (person.firstname + " " + person.lastname).toLowerCase();
// }

let a = "stu";
let b = "batch";
// document.getElementById("nested").innerHTML = inf.nm + inf[a][b] + " " + inf.fullname() + " " + person.name();
 
 
// Build a Text
// let text = "";
// for (let x in person) {
//   text += person[x] + " ";
// };

const Myaray = Object.values(person);
document.getElementById("nested").innerHTML =  Myaray;


// const Myaray = Object.values(person);
const prectice = 
{
    sub1:"Hindi",
    sub2:"English",
    // sub3: function()
    // {
    //     return this.sub1 + " " + this.sub2;
    // },
    sub4 :
    {
        sub5 : "Maths",
        sub6 : "Science",
    
    }
}

// prectice.changesubject = function(sub)
// {
//     return this.sub = sub;
// }

let text = "";
for(let x in prectice)
{
    // text += prectice[x] + " ";
    for(let y in prectice[x])
    {
        text += prectice[x][y] ;
    }
};

document.getElementById("pre").innerHTML = text;
 
// document.getElementById("pre").innerHTML = prectice.sub3() + "\n " + prectice.sub4.sub6  + " "  +  prectice["sub2"] + " " + prectice.changesubject("Social Science");


function Person(first, last, age, eye) {
    this.firstName = first;
    this.lastName = last;
    this.age = age;
    this.eyeColor = eye;
  }
  
//   Person.name = function()
//   {
//     return this.firstName + " " + this.lastName;
//   };
  // Adding name() method to prototype

Person.prototype.name = function() {
    return this.firstName + " " + this.lastName;
};
  // Create a Person object
  const myFather = new Person("John", "Doe", 50, "blue");
  
  // Display age
  document.getElementById("demod").innerHTML =
  "My father is " + myFather.name() + " " + myFather.age + "."; 

const str = `He's my "Office "`;
document.getElementById("back").innerHTML = str;

const product = {
    title : "boll pen",
    rating : 4,
    offer : 5,
    price : 770
}
document.getElementById("pen").innerHTML = product.title + " " + product.rating + " " + product.offer + " " + product.price;
console.log(product);