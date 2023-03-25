printf(
"Suricata Configuration:\n"
"  AF_PACKET support:                       yes\n"
"  eBPF support:                            no\n"
"  XDP support:                             no\n"
"  PF_RING support:                         no\n"
"  NFQueue support:                         no\n"
"  NFLOG support:                           no\n"
"  IPFW support:                            no\n"
"  Netmap support:                          no  using new api: no\n"
"  DAG enabled:                             no\n"
"  Napatech enabled:                        no\n"
"  WinDivert enabled:                       no\n"
"\n"
"  Unix socket enabled:                     yes\n"
"  Detection enabled:                       yes\n"
"\n"
"  Libmagic support:                        yes\n"
"  libnss support:                          yes\n"
"  libnspr support:                         yes\n"
"  libjansson support:                      yes\n"
"  hiredis support:                         no\n"
"  hiredis async with libevent:             no\n"
"  Prelude support:                         no\n"
"  PCRE jit:                                yes\n"
"  LUA support:                             no\n"
"  libluajit:                               no\n"
"  GeoIP2 support:                          no\n"
"  Non-bundled htp:                         no\n"
"  Hyperscan support:                       no\n"
"  Libnet support:                          yes\n"
"  liblz4 support:                          no\n"
"  HTTP2 decompression:                     no\n"
"\n"
"  Rust support:                            yes\n"
"  Rust strict mode:                        no\n"
"  Rust compiler path:                      /usr/bin/rustc\n"
"  Rust compiler version:                   rustc 1.65.0\n"
"  Cargo path:                              /usr/bin/cargo\n"
"  Cargo version:                           cargo 1.65.0\n"
"  Cargo vendor:                            yes\n"
"\n"
"  Python support:                          yes\n"
"  Python path:                             /usr/bin/python3\n"
"  Install suricatactl:                     yes\n"
"  Install suricatasc:                      yes\n"
"  Install suricata-update:                 yes\n"
"\n"
"  Profiling enabled:                       no\n"
"  Profiling locks enabled:                 no\n"
"\n"
"  Plugin support (experimental):           yes\n"
"\n"
"Development settings:\n"
"  Coccinelle / spatch:                     no\n"
"  Unit tests enabled:                      no\n"
"  Debug output enabled:                    no\n"
"  Debug validation enabled:                no\n"
"\n"
"Generic build parameters:\n"
"  Installation prefix:                     /usr/local\n"
"  Configuration directory:                 /usr/local/etc/suricata/\n"
"  Log directory:                           /usr/local/var/log/suricata/\n"
"\n"
"  --prefix                                 /usr/local\n"
"  --sysconfdir                             /usr/local/etc\n"
"  --localstatedir                          /usr/local/var\n"
"  --datarootdir                            /usr/local/share\n"
"\n"
"  Host:                                    x86_64-pc-linux-gnu\n"
"  Compiler:                                gcc (exec name) / g++ (real)\n"
"  GCC Protect enabled:                     no\n"
"  GCC march native enabled:                yes\n"
"  GCC Profile enabled:                     no\n"
"  Position Independent Executable enabled: no\n"
"  CFLAGS                                   -g -O2 -std=c11 -march=native -I${srcdir}/../rust/gen -I${srcdir}/../rust/dist\n"
"  PCAP_CFLAGS                               -I/usr/local/include\n"
"  SECCFLAGS                                \n"
);