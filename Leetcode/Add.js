const romanNumbers = {
    'I': 1,
    'V': 5,
    'X': 10,
    'L': 50,
    'C': 100,
    'D': 500,
    'M': 1000
}

function add(string) {
    const stringArr = string.split('')
    let sum = 0;
    for (let i = 0; i < stringArr.length; i++) {
        let number = romanNumbers[stringArr[i]]
        let nextNumber = romanNumbers[stringArr[i + 1]]
        if (i != 0) {
            let prevNumber = romanNumbers[stringArr[i - 1]]
            if (prevNumber < number) {
                continue
            }
        }
        if (nextNumber > number) {
            number = nextNumber - number
        }

        sum += number
    }
    console.log(sum)
}

add('MCMXCIV')