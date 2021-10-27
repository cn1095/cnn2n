#ifndef _N2N_UPNPC_H_
#define _N2N_UPNPC_H_

#include <stdint.h>

int n2n_upnp_set_port_mapping(const uint16_t port);
void n2n_upnp_del_port_mapping(const uint16_t port);

#endif // _N2N_UPNPC_H_
