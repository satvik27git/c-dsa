if (str1.length() != str2.length())
        return false;
    if(str1.length()<2){
      return str1.compare(str2) == 0;
    }
//substr(a,b) return substr from a till b
    string clock_rot = "";
    string anticlock_rot = "";
    int len = str2.length();

    // Initialize string as anti-clockwise rotation
    anticlock_rot = anticlock_rot +
                    str2.substr(len-2, 2) +
                    str2.substr(0, len-2) ;

    // Initialize string as clock wise rotation
    clock_rot = clock_rot +
                str2.substr(2) +
                str2.substr(0, 2) ;

    // check if any of them is equal to string1
    return (str1.compare(clock_rot) == 0 ||
            str1.compare(anticlock_rot) == 0);
