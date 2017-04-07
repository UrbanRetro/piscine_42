ldapsearch -x "(sn=*bon*)" sn | grep '^sn:'  | wc -l | cut -c7-
