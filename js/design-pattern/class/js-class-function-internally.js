/**
 * Define a class with function in javascript.
 * Methods defined internally
 *
 *@REFER http://www.phpied.com/3-ways-to-define-a-javascript-class/
 */
 function PersonIn(name){
	 /**
	  * fields in Person
	  */
	 this.name = name;
	 this.age = '10';
	 this.sex = 'man';
	 
	 /**
	  * methods in person
	  * this method can just work in PersonIn
	  *
	  *@DRAWBACK this method is recreated every time you create a new object.
	  */
	 this.getInfo = function(){
		 return 'Name : ' + this.name + ', Age : ' + this.age + ', Sex : ' + this.sex;
	 };
	 
 }