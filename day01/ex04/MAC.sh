ifconfig -a link | grep ether | sed "s/ether //" | cat -e
