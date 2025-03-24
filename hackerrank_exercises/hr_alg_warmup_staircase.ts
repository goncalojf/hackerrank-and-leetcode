// https://www.hackerrank.com/challenges/staircase/problem?isFullScreen=true
function staircase(n: number): void {
     // Write your code here
     if (n === 0) return;
     let current_string: string = "";
     for (let i = 0; i < n; i++) {
         const arr_remainder = new Array(n - (i + 1)).fill(" ");
         const arr_car = new Array(i + 1).fill("#");
         arr_car.push("\n");
         const joined: string = arr_remainder.join('') + arr_car.join('');
         current_string += joined;
     }
 }