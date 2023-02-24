#define DEFAULT_PATH "/bin:/sbin:/usr/bin:/usr/sbin:/opt/bin:/opt/sbin:/opt/usr/bin:/opt/usr/sbin"
#define SFTPSERVER_PATH "/opt/libexec/sftp-server"
#define DROPBEAR_SFTPSERVER 1
#define DROPBEAR_CLI_NETCAT 0
#define DROPBEAR_DSS 0
#define DO_MOTD 1
#define DROPBEAR_CURVE25519 1
#define DROPBEAR_ED25519 1
#define DROPBEAR_SK_ED25519 1
#define DROPBEAR_CHACHA20POLY1305 1
#define DROPBEAR_ECDSA 1
#define DROPBEAR_SK_ECDSA 1
#define DROPBEAR_ECDH 1
#define DROPBEAR_CLI_ASKPASS_HELPER 0
#define DROPBEAR_CLI_AGENTFWD 1
#define DROPBEAR_SVR_AGENTFWD 1
#define INETD_MODE 0
#define MAX_UNAUTH_PER_IP 3
#define MAX_UNAUTH_CLIENTS 9
#define MAX_AUTH_TRIES 3
/* Overrides for sysoptions.h */
#ifdef DROPBEAR_SERVER_TCP_FAST_OPEN
#undef DROPBEAR_SERVER_TCP_FAST_OPEN
#endif
