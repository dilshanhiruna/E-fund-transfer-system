body{

    margin: 0;
    padding: 0px;
    text-align: left;
    font-family: 'Open Sans', sans-serif;
    font-weight: 400;
    

}


.main{
    
    margin: 0px 0px ;
    display: flex;
    /* flex-wrap: inherit; */
    flex-direction: row;
    justify-content: left;
   
} 

.main::after{

    content: "";
    display: table;
    clear: both;
    

}
.nav{

    /* display: flex; */
    /* flex-direction: column;
    position: fixed;
    align-items: flex-start; */
    width: 280px;
    height: 947px;
    top: 0px;
    left: 0px;
    bottom: 0px;
    background-color: rgb(23, 23, 23);
    padding: 50px 30px 30px;
    box-sizing: border-box;
    
    /* width: 200px;
    float: left;
    height: 947px;
    padding: 10px;
    background-color: #272727; */
    animation: movel 2s;
    


}
.right{

    display: flex;
    justify-content: center;
    width: 1000px;
    float: left;
    height: 319px;
    padding: 15px;
    margin-left: 20px;
    animation: mover 2s;
   
}
.right h1,h2{

    font-family: 'Source Sans Pro', sans-serif;
    font-weight: 900;
}
.right h1{
    font-size: 40px;
}
.right h2{
    font-size: 30px;
}
.rcontent hr{
    height: 1px;
    color: rgb(235, 235, 235);
    background-color:rgb(235, 235, 235);
    border: none;
    
}

header{

    font-family: roboto;
    margin-top: 10px;
    font-size: 40px;
    font-weight: bold;
    color: rgb(255, 255, 255);


}
.nav hr{ 
    height: 1px;
    color: rgb(61, 61, 61);
    background-color:rgb(61, 61, 61);
    border: none;
  }
.topnav{
   
    margin-top: 25px;
    display: flex;
    margin-bottom: 15px;
    color: white;
}
.logoutbtn a{

    text-decoration: none;
    font-size: 9px;
    color: white
    ;
}
#username{

    margin-top: 4px;
    color: rgb(218, 218, 218);

}
.logoutbtn a{

    width: 60px;
    height:15px ;
    text-align: center;
    display: block;
    color: rgb(218, 218, 218);;
    border-radius: 3px;
    padding: .5em;
    text-decoration: none;
    font-size: .8em;
    border: 1px solid rgb(218, 218, 218);;
    border-radius: 19px;
    margin: 0px 5px 10px 0;
    position: relative;
    

}
.logoutbtn a:hover{

    background-color: rgb(0, 121, 190);
    border: 1px solid rgb(0, 121, 190);
    transition: 500ms;
}
ul{

   list-style: none;
   padding-left: 0px;
   margin: 50px 0px 0px 0px;
   line-height: 35px;
  
   
  
}
.list{

    display: block;
}
.list a{

    color: rgb(120, 116, 113);
    font-family: 'Source Sans Pro', sans-serif;
    font-size: 20px;
    
    
    text-decoration: none;
    white-space: nowrap;
    background-repeat: no-repeat;
    display: flex;
    align-items: center;
    margin-bottom: 10px;
    background-size: contain;
    padding-top: 5px;
    padding-bottom: 5px;
    text-decoration: none;
}
.list :active{
    color:white;
    transition: 150ms;
    
}

.list a:hover{

    color:rgba(255, 255, 255, 0.801);
    transition: 150ms;
    

  
}
.profile img,.profile p{


    display: inline;
    color: rgb(218, 218, 218);;
  
    
}
.profile{

    
    margin: 370px 30px 20px 50px;
    border: 3px;
    display: block;
    border: 1px solid rgb(218, 218, 218);;
    width: 90px;
    height:30px;
    text-align: center;
    border-radius: 26px;

}
.profile p{

  font-size: 16px;
}

.profile img{

    width: 14px;
    display:initial;
    margin-top: 7px;
 
}
.contact a{

    font-size: 13px;
    text-align: center;
    margin: 180px 30px 20px 65px;
    text-decoration: none;
    color: rgb(218, 218, 218);;
}
.profile:hover{ 

 
    background-color: rgb(0, 104, 165);
    transition: 200ms;
    
}
.contact a:hover{
    color:  rgb(0, 104, 165);
    transition: 100ms;
}
/*----------------right----------------------------------*/


.box{
    
    
    /* display: inline-flex;
    padding: 10px ;
    width: 300px; */
    display: flex;
    
    padding: 10px;
    flex-wrap: wrap;
    flex-direction: row;
    justify-content: left;
    height: 150px;


} 
.leftbox {

    background-color: rgb(255, 234, 222);
    border-radius: 50px;
    width: 200px;
    height: 100px;
}
.balance{

    font-family: 'Source Sans Pro', sans-serif;
    font-weight: 300;
    display: inline-flex;
    justify-content:center;
    width: 200px;
}
.avalablecurrency{

    color:rgb(68, 68, 68);
    padding-top: 10px;
    font-size: 25px;

}
.avalablebalance{
    color: rgb(155, 155, 155);

}
footer, footer a{


    
    padding-top: 400px;
    color: rgb(155, 155, 155);
    text-decoration: none;
}
footer a:hover{
    color: rgb(0, 104, 165);
    transition: 100ms;

}
#notrans{
    color: rgb(155, 155, 155);
    
}
.boxbelow{

    padding-top: 20px;
}

form{

    padding-top: 50px;

   

}



label {

    width: 200px;
    display: inline-block;
    text-align: right;
   
}
form input {

    border-style: solid;
    border-width: 1px;
}
form ::placeholder{

    font-size: 11px;
    color: rgb(163, 163, 163);


}

input[type=text],input[type=number] {
    
    padding: 5px 20px;
    margin: 4px 0;
    box-sizing: border-box;
    
}
/* textarea{
    padding: 5px 20px;
    max-width: 211px;
    max-height: 150px; ;
} */
.ftr-1{

object-position: center;
padding-top: 250px;
padding-bottom: 0px;

}
#remark{
    height: 100px;
}
.cta{

    background: rgb(90, 90, 90);
    text-align: center;
    width: 50px;
    display: block;
    color: rgb(255, 255, 255);
    border-radius: 3px;
    padding: .5em;
    text-decoration: none;
    font-size: .8em;
    /* margin: 2% auto 7%; */
    margin-left: 205px;
    position: relative;
}

.cta:hover{

    background-color: rgb(0, 137, 149);
    transition: 500ms;

}





