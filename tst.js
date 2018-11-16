
  function getConsulta() {
    //var d=document.getElementById('desde').value;
    var a="class Shape {        public:           void setWidth(int w) {              width = w;           }           void setHeight(int h) {              height = h;           }                 protected:           int width;           int height;     };     class Rectangle: public Shape {        public:           int getArea() {               return (width * height);            }     };";
    
    jQuery.ajax({
    url: "http://10.49.70.102:4000/convert",
    data: a,
    type: "post",
    success:function(data){
        //alert(data);  
        console.log(data); 
    },
    error:function (){}
    });
    }