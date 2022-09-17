let nums = [0,1,2,2,3,0,4,2]
let vals = 2

function removeElements() {
    nums.forEach(number => {
        console.log('here ', number)
        if ( vals === number ) {
            console.log(number, nums.indexOf(number))
            nums.splice(nums.indexOf(number),1)
            console.log(nums)
        }
    });
    console.log(nums)
}

removeElements()