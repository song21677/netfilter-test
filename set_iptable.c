#include <stdlib.h>

void set_iptable() {
   system("iptables -F");
   system("iptables -A OUTPUT -j NFQUEUE --queue-num 0");
   system("iptables -A INPUT -j NFQUEUE --queue-num 0");
}
