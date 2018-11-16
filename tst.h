
  function getConsulta() {
    var d=document.getElementById('desde').value;
    var a=document.getElementById('asta').value;
    
    jQuery.ajax({
    url: "consultaAjax.php",
    data:{desde:d,asta:a,can:nomCan},
    type: "post",
    dataType: "json",
    success:function(data){
        //alert(data);  
        document.getElementById('FBfans').innerHTML=data[0];
        document.getElementById('TWfans').innerHTML=data[1]; 
        document.getElementById('IGfans').innerHTML=data[2]; 
        document.getElementById('FBpost').innerHTML=data[3]; 
        document.getElementById('TWpost').innerHTML=data[4]; 
        document.getElementById('IGpost').innerHTML=data[5]; 
        document.getElementById('FBinter').innerHTML=data[6]; 
        document.getElementById('TWinter').innerHTML=data[7]; 
        document.getElementById('IGinter').innerHTML=data[8];
         
        document.getElementById('FBcreci').innerHTML=data[9]; 
        document.getElementById('TWcreci').innerHTML=data[10]; 
        document.getElementById('IGcreci').innerHTML=data[11]; 
    },
    error:function (){}
    });
    }