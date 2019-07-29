var n = parseInt(readline());
var vowels = 'aeiouy';

var word = readline();

var isPrevVowel = false;

for (var i = 0; i < n; i++) {
  if (~vowels.indexOf(word[i])) {
    if (isPrevVowel) {
      //do nothing
    } else {
      write(word[i]);
      isPrevVowel = true;
    }
  } else{
    write(word[i]);
    isPrevVowel = false;
  }
}

print();
