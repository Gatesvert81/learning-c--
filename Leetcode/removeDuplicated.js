let nums = [1,1,1,1]

function removeDuplicated() {
    let equalNum = 0
    nums.forEach(number => {
        for (let value of nums) {
            if (number === value) {
                equalNum += 1
            }
        }
        nums.splice(nums.indexOf(number) + 1, equalNum -1)
        equalNum = 0
    });
    return nums.length
    
}


removeDuplicated()
