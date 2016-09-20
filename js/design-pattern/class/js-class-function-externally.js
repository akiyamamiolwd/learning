/**
 * Define a class with function in javascript.
 * Methods defined out of the class
 *
 *@REFER http://www.phpied.com/3-ways-to-define-a-javascript-class/
 */
 function PersonEx(name){
	 /**
	  * fields in Person
	  */
	 this.name = name;
	 this.age = '11';
	 this.sex = 'woman';
	 this.getInfo = getPersonInfo();
 }
 
 /**
  * methods in person
  * this method is in global namespace.
  *
  *
  *@DRAWBACK this method may have problem with naming confict
  */
function getPersonInfo(){
	 return 'Name : ' + this.name + ', Age : ' + this.age + ', Sex : ' + this.sex;
 };