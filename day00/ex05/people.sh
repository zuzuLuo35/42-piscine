ldapsearch -LLL -x uid="z*" cn | sed "/^dn:/d" | sed "/^\s*$/d" | sort -r
