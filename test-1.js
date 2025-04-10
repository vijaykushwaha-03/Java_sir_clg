// const x = multiply(2,3);
// document.getElementById("demo").innerHTML = x;

// function multiply(a,b)
// {
//     return a * b;
// }


 
// for(let i=0 ; i<=100; i++)
// {
//     if (i%2 == 0)
//     {
//         console.log(i);
//     }
// }
 

// let str = "vijay";
// for(let i of str)
// {
//     console.log(i);
// }

// let strr = {
//     name : "vijay",
//     age : 20,
//     roll : 30
// }

// for (let i in strr)
// {
//     console.log(i + " : " + strr[i]);
//     document.getElementById("demo").innerHTML = i;
// }


// let gassnum = 25;

// let usernum = prompt("gass the number ");

// while(usernum != gassnum)
// {
//     usernum = prompt("Wrong gass ");

// }
//   prompt("win the game ");
// console.log("congrates");

//loops

let lps = {
    name : "js",
    df : 3,
    fn : "jf"
}

let obj = `this is special \n string ${lps.name} .com`;
console.log(obj);
for(let i in lps)
{
    console.log(i + " : " + lps[i]);
}

let marks = [85, 97, 44, 37, 76, 60];
let sum = 0;
for(let mr of marks)
{
    console.log(mr);
    sum += mr;
}

console.log(sum/marks.length);

// Qs. For a given array with prices of 5 items -> [250, 645, 300, 900, 50]
// All items have an offer of 10% OFF on them. Change the array to store final price after applying offer.
// for (let val of iteme) &

let iteme = [250, 645, 300, 900, 50];
console.log(iteme);
let nitem = [];
for (let itm in iteme)
{
    console.log("Array before descount ",iteme[itm]); 
    let ofr = iteme[itm] / 10;
    let ntem = iteme[itm] - ofr;
    console.log("Array after descount ",ntem); 
    nitem.push(ntem);
}
console.log(nitem);

const mul = (a,b) =>{
    return a*b;
}
console.log(mul(2,3));

let rray = [1,2,3,4,5,6,7,8,9,10];

// rray.forEach(function printval(val){
//     console.log(val);
// });

// Arrow function
let newArray = rray.map((val) =>{
    console.log(val);
})

let flarry = rray.filter((val)=>{
    return val %2 == 0;

})
console.log(flarry);


// rray.forEach((val) => {
//     console.log(val);
// });