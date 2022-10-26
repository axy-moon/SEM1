const nums = [1,-4,2,5,11,20,-5,-7,-8,3];
let positiveCount =0;
let negativeCount = 0;

for(i=0;i<nums.length;i++)
{
    if (nums[i] >= 0) 
        positiveCount++;
        
    else
        negativeCount++;

}

console.log(`Positive Numbers: ${positiveCount}`);
console.log(`Negative Numbers: ${negativeCount}`);