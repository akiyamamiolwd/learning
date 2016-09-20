/**
 * Define a class with literals in javascript.
 * this way is to create a instance directly.
 * 
 *@PATTERN singleton
 *@REFER http://www.phpied.com/3-ways-to-define-a-javascript-class/
 */
 var PersonSingle = {
	 /**
	  * fields in Person
	  */
	 this.name : name,
	 this.age : '10',
	 this.sex : 'man',
	 /**
	  * methods in person
	  */
	 getInfo : function(){
		 return 'Name : ' + this.name + ', Age : ' + this.age + ', Sex : ' + this.sex;
	 }
 }