* ex01:     `groups "$FT_USER" | tr ' ' ',' | cut -d ',' -f 3- | tr -d '\n'`
* ex02:     `find . -type f -name "*.sh" | sed 's/...$//' | sed 's/^..//'`
* ex03:     `find . -type f -o -type d | wc -l`
* ex04:     `ifconfig | grep -o -E '([[:xdigit:]]{1,2}:){5}[[:xdigit:]]{1,2}'`
* ex05:     `echo -n "42" > \"\\?\$*\'MaRViN\'*\$?\\\"`
* ex06:     `ls -l | awk 'NR % 2 != 0'`
* ex07:     `cat /etc/passwd | grep -v '^#' | awk 'NR % 2 == 0' | cut -d ':' -f 1 | rev | sort -r | awk -v line1="$FT_LINE1" -v line2="$FT_LINE2" 'line1 >= 5 && NR <= line2' | tr '\n' ',' | sed 's/,/, /g' | sed 's/..$/./'`

