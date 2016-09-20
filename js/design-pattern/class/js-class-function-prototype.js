/**
 * Define a class with function in javascript.
 * Add methods to the prototype of the constructor function.
 *
 *@REFER http://www.phpied.com/3-ways-to-define-a-javascript-class/
 */
 function PersonIn(name){
	 /**
	  * fields in PersonIn
	  */
	 this.name = name;
	 this.age = '10';
	 this.sex = 'man';
	 
 }
	 
 /**
  * methods in person
  * this method can just be created once in the prototype and all the objects of Person can\
  * use in the same way.
  *
  *@DRAWBACK this method is recreated every time you create a new object.
  */
 Person.prototype.getInfo = function(){
	 return 'Name : ' + this.name + ', Age : ' + this.age + ', Sex : ' + this.sex;
 };