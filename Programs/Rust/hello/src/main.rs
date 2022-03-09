
fn main() {

    let mut num1 = String::new();
    std::io::stdin().read_line(&mut num1).expect("Falied");
    println!("Enter number 1: ");
    let mut num2 = String::new();
    std::io::stdin().read_line(&mut num2).expect("Failed");
    println!("Enter number 2: ");
    let mut op = String::new();
    std::io::stdin().read_line(&mut op).expect("Failed");
    println!("Enter the operator: ");

    if op == "+"{
        
    }


}

pub fn add(num1,num2){

}


// pub fn run(){
   
//     //let num: i32 = 12;
//     //let name: &str = "eshwar";
//     let mut numbers = vec![1,2,3,4];
//     numbers.push(5);
//     numbers.pop();
//     let len = numbers.len();
//     for (i,x) in numbers.iter_mut().enumerate(){
//         *x *= 1;
//         println!("{}: {}",i,x);
//     }
//     for y in 0..len{
//         println!("{}",y);
//     }
//     // for y in 0..len{

//     //     println!("{}",a);
//     // }
    
//     // println!("Enter number 1: ");
//     // let mut input1 = String::new();
//     // std::io::stdin().read_line(&mut input1).expect("Falied");
//     // println!("Enter number 2: ");
//     // let mut input2 = String::new();
//     // std::io::stdin().read_line(&mut input2).expect("Failed");

//     // let num1 = input1.parse::<f32>().unwrap();
//     // let num2 = input2.parse::<f32>().unwrap();

//     // println!("{} and {}",num1,num2);
    
// }