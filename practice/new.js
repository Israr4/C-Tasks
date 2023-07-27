// sudo apt install nodejs
// sudo apt install npm
// npm init -y
// npm install prompt-sync
// declare that line on top of every js file as a header file            const prompt = require('prompt-sync')();


const prompt = require('prompt-sync')();

// Object.var = 10   //property
// Object.start()    //method
// start()           //function  
// Number is a function to convert string into a number
   



// // Printing function
// console.log('hello world')
// console.log('new member')








// prompt(input) vs alert(output)          but normally we use forms for input in javascript
// neww = prompt('What is your name')
// console.log(neww)

// let food = prompt('How much was the food')
// let tipPercentage = prompt('tip')
// let total = food + tipPercentage
// console.log(total)






// //variables in javascript
// let variable = "Israr"
// console.log(variable) 


// variable types in javascript      (const     let    var)   normally we dont use var     but we use let(dont a global scope for your variable)






// datatypes in javascript (strings   numbers    arrays     object    boolean)
// let food = prompt('How much was the food')
// let tipPercentage = prompt('tip')
// let total = food + tipPercentage
// console.log(total)    // it show concatenation of number because variable store as a string

// let food = Number(prompt('How much was the food'))
// let tipPercentage = Number(prompt('tip'))
// let total = food + tipPercentage
// console.log(total)    // it show addition of number because now datatype is number








// Math mehtods in javascript
// floor  rounds down 
// ceil   rounds up

// Math.floor(Math.random() * 3)     //it generate random number between 0 to 3





// Functions in javascript
// Regular function
// function greeting(variables)    // during argument we dont use the let keyword for variable
// {
//     food = variables
//     drink = 20
//     neww = food * drink
//     console.log(neww)
// }

// greeting(100)

//Arrow function its the advanced term that we use now a days
// greeting = (variables,drink) =>
// {
//     neww = variables * drink
//     console.log(neww) 
// }
// greeting(100,20)


// function sum(a,b)                            or            // sum = (a,b) => a + b        arrow function   implicit return 
// {
//     return  a + b
// }
// num1 = sum(20,30)
// console.log(num1)  // it simply print the result but if we console.log in place of return then in line    ""num1 = sum(20,30)""     it gives error 
 









// Template literals(just as concatenation of strings)  in javascript
// function greeting(name)
// {
//     console.log('My Name is name')   // it simply display this 
// }

// greeting('Israr')


// function greeting(name) 
// {
//     console.log(`My Name is ${name}`)   // here the usage of template literals
// }

// greeting('Israr')







// // Arrays in javascript
// element = ["a","b","c","d"]
// console.log(element) 
// console.log(element[0]) 
// element.push('e')
// console.log(element)
// console.log(element.slice(2,5))    // Slicing in Array
// console.log(element.indexOf("c"))
// console.log(element.length)


   




// Objects in Javascript(key value pair)      same as dictionary in python            simple yeh ha ka variable ki jagah object ko use karna function ma  
// person = {                             
//      namee:'Israr',
//      shirt:'White'
// }

// console.log(person)
// console.log(person.namee)       //dot notation
// console.log(person['shirt'])    //bracket notation

// person.phone = "03101885990"
// person['address'] = "Islamabad"
// console.log(person.phone)
// console.log(person.address)
// console.log(person)

// usage of object in function as a constructor in other languages

// introducer = (namee,shirt) =>
// {
//     person = {
//         namee:namee,
//         shirt:shirt,
//         price:1000,
//         tax:200,
//     }
//     introd = `My name is ${person.namee} and i wear ${person.shirt} shirt and its total price is ${person.price + person.tax}`
//     return introd
// }

// neww = introducer('Israr','White')
// console.log(neww)

// introducer = (namee,shirt) =>
// {
//     person = {
//         namee:namee,
//         shirt:shirt,
//         price:1000,
//         tax:200,
//         // totalprice:price+tax,      // thats the wrong approach bcause        // object ma jitna bi keys values hoti han wo ek hi bari execute hoti han  is lia hum upar wali key ko neecha ni use kar sakta agar use karna ho to function likhta han hum
//         totalprice: function(){
//             return this.price + this.tax
//         }  
//     }
//     introd = `My name is ${person.namee} and i wear ${person.shirt} shirt and its total price is ${person.totalprice()}`
//     return introd
// }

// neww = introducer('Israr','White')
// console.log(neww)












// Loops in javascript          if we write "of"  it show actual values     but if we write "in"    it show looped value means how many time loop runs(0,1,2,34) 
// elements = [1,2,3,4,5]        
// for(let i=0;i<elements.length;i++)   //not used that type of loop in javascript
// {
//     console.log(elements[i])
// }

// for(const i of elements)             //always use this type of loop
// {
//     console.log(i)
// }


// double = (elements) =>{
//     arrayy=[]
//     for(i of elements)
//     {
//         arrayy.push(i)
//     }
//     return arrayy   // passing data from one array to other
// }
// console.log(double([1,2,3,4,5]))

let result = 0
const howManyLetters = () => {               // function to calculate total alphabets in sentence using loop but start from 1 not from 0
    sentence =  'My name is Israr, I live in Islamabad'
    for(i in sentence)              // if we write "of"  it show actual values     but if we write "in"    it show looped value means how many time loop runs(0,1,2,34) 
    {
        // console.log(Number(i)+1)
        result = Number(i) + 1
    }
    return {result:result}
}
console.log(howManyLetters())