// const App=() =>{
//   const button=[
//     {tittle:"inc" ,color:"red"},
//     {tittle:"dec", color:"blue"},
//     {tittle:"reset",color:"green"},
//     {
//     tittle:"start",color:"grey"
//     }

//   ]
// import 'bootstrap/dist/css/bootstrap.min.css';
import 'bootstrap/dist/css/bootstrap.min.css';
import React from 'react';
//   return( <div>

//         {
//           button.map((value,index)=>{
//             return <div>
//                <button style>{value.tittle}</button>


//               <div/>
//         })}




//   </div>
//   )
//   }
// }

// export default App 

const App=()=>{
  // let count=0;
  let [count,setcount]=React.useState(0)
  // const btn=()=>{
  //   // console.log("you clicked me");
  //   count=count+1;
  //   return 5
  // }
  const onbtnInc=(event)=>{
    setcount(count+event)

  }
  const dec=()=>{
    setcount(count-1)
    console.log("decrementt");
    // return 5
  }
  const inc=()=>{
    setcount(count+1)
    console.log("increment");
    // return 5
  } 
  const res=()=>{
    setcount(0)
    console.log("restart");
    // return 5
  }
return (
    <div className="container d-flex  flex-column justify-content-center align-items-center">
        
  {/*  <Button color="primary" size="md">Click Me</Button>
  <Button color="danger" size="md">don't touch Me</Button>
  <Button color="sucess" size="sm">Click Me</Button>
  <Button color="secondary" size="md">Click Me</Button>
  <Button color="info" size="md">Click Me</Button> */} 
{/* 
  <button onClick={btn} className="btn btn-dark">   click me</button> */}
  <p>you clicked me {count}</p>
   <div className="container d-flex gap-1" >
   <button onClick={()=>{
    onbtnInc(2)
   }} className="btn btn-dark">inc by 2 </button> 
  <button onClick={()=>{
    onbtnInc(4)
   }} className="btn btn-dark">inc by 4</button>
  <button onClick={()=>{
    onbtnInc(6)
   }} className="btn btn-dark">inc by 6</button>
   {/* <button onClick={inc} className="btn btn-dark">   increment </button> 
  <button onClick={dec} className="btn btn-dark">   decrement </button>
  <button onClick={res} className="btn btn-dark">   reset</button> */}
   </div>

 

    </div>
)


}
export default App;
// let incs=[4,56,12,54,2,9,12]{
//   insc.map(value,index)=>{
//     ()=>{
//       onbtnInc(value)
//      }
//   }
// }