#ifndef H_CHAINPARAMSSEEDS
#define H_CHAINPARAMSSEEDS

// Each line contains a 16-byte IPv6 address and a port.
// IPv4 as well as onion addresses are wrapped inside a IPv6 address accordingly.
static SeedSpec6 pnSeed6_main[] = {
  {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x6c,0x3d,0xa5,0xe5}, 3300},
  {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x6c,0x3d,0xa5,0x2a}, 3300}
};

static SeedSpec6 pnSeed6_test[] = {
};
#endif