let strs = ["aac","ab"]

function shortestLetter() {
    let newStr = strs.map((letter) => {
        return letter.length
    })
    let letterIndex = newStr.indexOf(Math.min(...newStr))
    return strs[letterIndex]

}

function prefix() {
    let longPrefix = shortestLetter()
    console.log(longPrefix)
    let longPrefixArr = []
    if(strs.length === 1) {
        console.log(strs.join(''))
        return
    }
    strs.splice(strs.indexOf(longPrefix),1)
    console.log(strs)
    for (let i = 0; i < strs.length; i++) {
        for (let j = 0; j < longPrefix.length; j++) {
            if (longPrefix[j] === strs[i][j]) {
                console.log('now here')
                console.log(longPrefixArr[j])
                console.log(strs[i][j])
                if (longPrefixArr[j] !== strs[i][j]) {
                    let current = strs[i][j]
                    console.log('come here')
                    longPrefixArr.push(current)
                }
            } else {
                console.log('just else here')
                let index = strs[i].lastIndexOf(strs[i][j])
                console.log(index)
                console.log(i,longPrefixArr.length,'h')
                longPrefixArr.splice(index, longPrefixArr.length)
                console.log('current', longPrefixArr)
                break
            }

        }
        if ( i === longPrefixArr.length ){
            console.log('here')
            break
        }
    }

    console.log(longPrefixArr)
}

function longestPrefix() {
    let prefixWord = shortestLetter()
    strs.splice(strs.indexOf(prefixWord),1)
    for (let word of strs) {
        for (let j = 0; j < prefixWord.length; j++) {
            if ( prefixWord[j] !== word[j] ){
                prefixWord = prefixWord.substring(0, j)
                break
            }
        }
        
    }
    console.log('prefixWord', prefixWord)
}

longestPrefix()