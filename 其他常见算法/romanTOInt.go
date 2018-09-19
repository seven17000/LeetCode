/*
*问题：罗马数字转整数
	罗马数字包含以下七种字符：I， V， X， L，C，D 和 M。
	字符          数值
	I             1
	V             5
	X             10
	L             50
	C             100
	D             500
	M             1000
	例如， 罗马数字 2 写做 II ，即为两个并列的 1。12 写做 XII ，
	即为 X + II 。 27 写做  XXVII, 即为 XX + V + II 。
*      
*答者：Seven17000
*/

func romanToInt(s string) int {
    	var ret int
	m := map[uint8]int{
		'I':1,
		'V':5,
		'X':10,
		'L':50,
		'C':100,
		'D':500,
		'M':1000,
	}

	for i := 0; i < len(s) - 1; i++{
		if (m[s[i]] < m[s[i+1]]) {
			ret -= m[s[i]]
		}else {
			ret += m[s[i]]
		}
	}

	ret += m[s[len(s)-1]]
	return ret
}