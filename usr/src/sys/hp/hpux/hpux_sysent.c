/*
 * System call switch table.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * created from	@(#)syscalls.master	8.3 (Berkeley) 2/7/94
 */

#include <sys/param.h>
#include <sys/systm.h>

int	nosys(),notimp();

int	exit();
int	hpuxfork();
int	hpuxread();
int	hpuxwrite();
int	hpuxopen();
int	close();
int	hpuxwait();
int	hpuxcreat();
int	link();
int	unlink();
int	hpuxexecv();
int	chdir();
int	mknod();
int	chmod();
int	chown();
int	obreak();
int	olseek();
int	getpid();
int	setuid();
int	getuid();
int	hpuxptrace();
int	access();
int	sync();
int	hpuxkill();
int	hpuxstat();
int	hpuxlstat();
int	hpuxdup();
int	pipe();
int	profil();
int	setgid();
int	getgid();
int	hpuxioctl();
int	symlink();
int	hpuxutssys();
int	readlink();
int	execve();
int	umask();
int	chroot();
int	hpuxfcntl();
int	hpuxulimit();
int	hpuxvfork();
int	hpuxread();
int	hpuxwrite();
int	hpuxmmap();
int	munmap();
int	getgroups();
int	setgroups();
int	hpuxgetpgrp2();
int	hpuxsetpgrp2();
int	setitimer();
int	hpuxwait3();
int	getitimer();
int	dup2();
int	hpuxfstat();
int	select();
int	fsync();
int	sigreturn();
int	hpuxsigvec();
int	hpuxsigblock();
int	hpuxsigsetmask();
int	hpuxsigpause();
int	osigstack();
int	gettimeofday();
int	hpuxreadv();
int	hpuxwritev();
int	settimeofday();
int	fchown();
int	fchmod();
int	hpuxsetresuid();
int	hpuxsetresgid();
int	rename();
int	hpuxsysconf();
int	mkdir();
int	rmdir();
int	hpuxrtprio();
int	hpuxnetioctl();
int	hpuxlockf();
int	hpuxsemget();
int	hpuxsemctl();
int	hpuxsemop();
#ifdef SYSVSHM
int	hpuxshmget();
int	hpuxshmctl();
int	hpuxshmat();
int	hpuxshmdt();
#else
#endif
int	hpuxadvise();
int	hpuxgetcontext();
int	hpuxgetaccess();
int	hpuxwaitpid();
int	getdirentries();
int	hpuxgetdomainname();
int	hpuxsetdomainname();
int	hpuxsigaction();
int	hpuxsigprocmask();
int	hpuxsigpending();
int	hpuxsigsuspend();
int	getdtablesize();
int	fchdir();
int	bind();
int	connect();
int	getsockopt();
int	listen();
int	sendto();
int	hpuxsetsockopt2();
int	shutdown();
int	socket();
int	socketpair();
int	hpuxsemctl();
#ifdef SYSVSHM
int	hpuxnshmctl();
#else
#endif

#ifdef COMPAT_OHPUX
#define compat(n, name) n, __CONCAT(o,name)

int	ohpuxtime();
int	ohpuxstat();
int	ohpuxstime();
int	ohpuxalarm();
int	ohpuxfstat();
int	ohpuxpause();
int	ohpuxutime();
int	ohpuxstty();
int	ohpuxgtty();
int	ohpuxnice();
int	ohpuxftime();
int	ohpuxsetpgrp();
int	ohpuxtimes();
int	ohpuxssig();
int	otruncate();
int	oftruncate();
int	ogetrlimit();
int	osetrlimit();
#ifdef SYSVSHM
#else
#endif
int	oaccept();
int	ogetpeername();
int	ogetsockname();
int	orecv();
int	orecvfrom();
int	orecvmsg();
int	osend();
int	osendmsg();
#ifdef SYSVSHM
#else
#endif

#else /* COMPAT_OHPUX */
#define compat(n, name) 0, nosys
#endif /* COMPAT_OHPUX */

struct sysent hpuxsysent[] = {
	{ 0, nosys },			/* 0 = indir or out-of-range */
	{ 1, exit },			/* 1 = exit */
	{ 0, hpuxfork },			/* 2 = fork */
	{ 3, hpuxread },			/* 3 = read */
	{ 3, hpuxwrite },			/* 4 = write */
	{ 3, hpuxopen },			/* 5 = open */
	{ 1, close },			/* 6 = close */
	{ 1, hpuxwait },			/* 7 = owait */
	{ 2, hpuxcreat },			/* 8 = ocreat */
	{ 2, link },			/* 9 = link */
	{ 1, unlink },			/* 10 = unlink */
	{ 2, hpuxexecv },			/* 11 = execv */
	{ 1, chdir },			/* 12 = chdir */
	{ compat(1,hpuxtime) },		/* 13 = old time */
	{ 3, mknod },			/* 14 = mknod */
	{ 2, chmod },			/* 15 = chmod */
	{ 3, chown },			/* 16 = chown */
	{ 1, obreak },			/* 17 = break */
	{ compat(2,hpuxstat) },		/* 18 = old stat */
	{ 3, olseek },			/* 19 = olseek */
	{ 0, getpid },			/* 20 = getpid */
	{ 3, notimp },			/* 21 = mount (unimplemented) */
	{ 1, notimp },			/* 22 = umount (unimplemented) */
	{ 1, setuid },			/* 23 = setuid */
	{ 0, getuid },			/* 24 = getuid */
	{ compat(1,hpuxstime) },		/* 25 = old stime */
	{ 4, hpuxptrace },			/* 26 = ptrace */
	{ compat(1,hpuxalarm) },		/* 27 = old alarm */
	{ compat(2,hpuxfstat) },		/* 28 = old fstat */
	{ compat(0,hpuxpause) },		/* 29 = old pause */
	{ compat(2,hpuxutime) },		/* 30 = old utime */
	{ compat(2,hpuxstty) },		/* 31 = old stty */
	{ compat(2,hpuxgtty) },		/* 32 = old gtty */
	{ 2, access },			/* 33 = access */
	{ compat(1,hpuxnice) },		/* 34 = old nice */
	{ compat(1,hpuxftime) },		/* 35 = old ftime */
	{ 0, sync },			/* 36 = sync */
	{ 2, hpuxkill },			/* 37 = kill */
	{ 2, hpuxstat },			/* 38 = stat */
	{ compat(1,hpuxsetpgrp) },		/* 39 = old setpgrp */
	{ 2, hpuxlstat },			/* 40 = lstat */
	{ 1, hpuxdup },			/* 41 = dup */
	{ 0, pipe },			/* 42 = pipe */
	{ compat(1,hpuxtimes) },		/* 43 = old times */
	{ 4, profil },			/* 44 = profil */
	{ 4, notimp },			/* 45 = ki_syscall (unimplemented) */
	{ 1, setgid },			/* 46 = setgid */
	{ 0, getgid },			/* 47 = getgid */
	{ compat(2,hpuxssig) },		/* 48 = old ssig */
	{ 0, nosys },			/* 49 = reserved for USG */
	{ 0, nosys },			/* 50 = reserved for USG */
	{ 1, notimp },			/* 51 = acct (unimplemented) */
	{ 0, nosys },			/* 52 = nosys */
	{ 0, nosys },			/* 53 = nosys */
	{ 3, hpuxioctl },			/* 54 = ioctl */
	{ 4, notimp },			/* 55 = reboot (unimplemented) */
	{ 2, symlink },			/* 56 = symlink */
	{ 3, hpuxutssys },			/* 57 = utssys */
	{ 3, readlink },			/* 58 = readlink */
	{ 3, execve },			/* 59 = execve */
	{ 1, umask },			/* 60 = umask */
	{ 1, chroot },			/* 61 = chroot */
	{ 3, hpuxfcntl },			/* 62 = fcntl */
	{ 2, hpuxulimit },			/* 63 = ulimit */
	{ 0, nosys },			/* 64 = nosys */
	{ 0, nosys },			/* 65 = nosys */
	{ 0, hpuxvfork },			/* 66 = vfork */
	{ 0, hpuxread },			/* 67 = vread */
	{ 0, hpuxwrite },			/* 68 = vwrite */
	{ 0, nosys },			/* 69 = nosys */
	{ 0, nosys },			/* 70 = nosys */
	{ 6, hpuxmmap },			/* 71 = mmap */
	{ 0, nosys },			/* 72 = nosys */
	{ 2, munmap },			/* 73 = munmap */
	{ 3, notimp },			/* 74 = mprotect (unimplemented) */
	{ 0, nosys },			/* 75 = nosys */
	{ 0, nosys },			/* 76 = nosys */
	{ 0, nosys },			/* 77 = nosys */
	{ 0, nosys },			/* 78 = nosys */
	{ 2, getgroups },			/* 79 = getgroups */
	{ 2, setgroups },			/* 80 = setgroups */
	{ 1, hpuxgetpgrp2 },			/* 81 = getpgrp2 */
	{ 2, hpuxsetpgrp2 },			/* 82 = setpgrp2 */
	{ 3, setitimer },			/* 83 = setitimer */
	{ 3, hpuxwait3 },			/* 84 = wait3 */
	{ 5, notimp },			/* 85 = swapon (unimplemented) */
	{ 2, getitimer },			/* 86 = getitimer */
	{ 0, nosys },			/* 87 = nosys */
	{ 0, nosys },			/* 88 = nosys */
	{ 0, nosys },			/* 89 = nosys */
	{ 2, dup2 },			/* 90 = dup2 */
	{ 0, nosys },			/* 91 = nosys */
	{ 2, hpuxfstat },			/* 92 = fstat */
	{ 5, select },			/* 93 = select */
	{ 0, nosys },			/* 94 = nosys */
	{ 1, fsync },			/* 95 = fsync */
	{ 0, nosys },			/* 96 = nosys */
	{ 0, nosys },			/* 97 = nosys */
	{ 0, nosys },			/* 98 = nosys */
	{ 0, nosys },			/* 99 = nosys */
	{ 0, nosys },			/* 100 = nosys */
	{ 0, nosys },			/* 101 = nosys */
	{ 0, nosys },			/* 102 = nosys */
	{ 1, sigreturn },			/* 103 = sigreturn */
	{ 0, nosys },			/* 104 = nosys */
	{ 0, nosys },			/* 105 = nosys */
	{ 0, nosys },			/* 106 = nosys */
	{ 0, nosys },			/* 107 = nosys */
	{ 3, hpuxsigvec },			/* 108 = sigvec */
	{ 1, hpuxsigblock },			/* 109 = sigblock */
	{ 1, hpuxsigsetmask },			/* 110 = sigsetmask */
	{ 1, hpuxsigpause },			/* 111 = sigpause */
	{ 2, osigstack },			/* 112 = osigstack */
	{ 0, nosys },			/* 113 = nosys */
	{ 0, nosys },			/* 114 = nosys */
	{ 0, nosys },			/* 115 = nosys */
	{ 2, gettimeofday },			/* 116 = gettimeofday */
	{ 0, nosys },			/* 117 = nosys */
	{ 0, nosys },			/* 118 = nosys */
	{ 3, notimp },			/* 119 = hpib_io_stub (unimplemented) */
	{ 3, hpuxreadv },			/* 120 = readv */
	{ 3, hpuxwritev },			/* 121 = writev */
	{ 2, settimeofday },			/* 122 = settimeofday */
	{ 3, fchown },			/* 123 = fchown */
	{ 2, fchmod },			/* 124 = fchmod */
	{ 0, nosys },			/* 125 = nosys */
	{ 3, hpuxsetresuid },			/* 126 = setresuid */
	{ 3, hpuxsetresgid },			/* 127 = setresgid */
	{ 2, rename },			/* 128 = rename */
	{ compat(2,truncate) },		/* 129 = old truncate */
	{ compat(2,ftruncate) },		/* 130 = old ftruncate */
	{ 0, nosys },			/* 131 = nosys */
	{ 1, hpuxsysconf },			/* 132 = sysconf */
	{ 0, nosys },			/* 133 = nosys */
	{ 0, nosys },			/* 134 = nosys */
	{ 0, nosys },			/* 135 = nosys */
	{ 2, mkdir },			/* 136 = mkdir */
	{ 1, rmdir },			/* 137 = rmdir */
	{ 0, nosys },			/* 138 = nosys */
	{ 0, nosys },			/* 139 = nosys */
	{ 0, nosys },			/* 140 = nosys */
	{ 0, nosys },			/* 141 = nosys */
	{ 0, nosys },			/* 142 = nosys */
	{ 0, nosys },			/* 143 = nosys */
	{ compat(2,getrlimit) },		/* 144 = old getrlimit */
	{ compat(2,setrlimit) },		/* 145 = old setrlimit */
	{ 0, nosys },			/* 146 = nosys */
	{ 0, nosys },			/* 147 = nosys */
	{ 0, nosys },			/* 148 = nosys */
	{ 0, nosys },			/* 149 = nosys */
	{ 0, nosys },			/* 150 = nosys */
	{ 3, notimp },			/* 151 = privgrp (unimplemented) */
	{ 2, hpuxrtprio },			/* 152 = rtprio */
	{ 1, notimp },			/* 153 = plock (unimplemented) */
	{ 2, hpuxnetioctl },			/* 154 = netioctl */
	{ 4, hpuxlockf },			/* 155 = lockf */
	{ 3, hpuxsemget },			/* 156 = semget */
	{ 4, hpuxsemctl },			/* 157 = semctl */
	{ 3, hpuxsemop },			/* 158 = semop */
	{ 2, notimp },			/* 159 = msgget (unimplemented) */
	{ 3, notimp },			/* 160 = msgctl (unimplemented) */
	{ 4, notimp },			/* 161 = msgsnd (unimplemented) */
	{ 5, notimp },			/* 162 = msgrcv (unimplemented) */
#ifdef SYSVSHM
	{ 3, hpuxshmget },			/* 163 = shmget */
	{ 3, hpuxshmctl },			/* 164 = shmctl */
	{ 3, hpuxshmat },			/* 165 = shmat */
	{ 1, hpuxshmdt },			/* 166 = shmdt */
#else
	{ 3, notimp },			/* 163 = shmget (unimplemented) */
	{ 3, notimp },			/* 164 = shmctl (unimplemented) */
	{ 3, notimp },			/* 165 = shmat (unimplemented) */
	{ 1, notimp },			/* 166 = shmdt (unimplemented) */
#endif
	{ 1, hpuxadvise },			/* 167 = m68020_advise */
	{ 2, notimp },			/* 168 = nsp_init (unimplemented) */
	{ 3, notimp },			/* 169 = cluster (unimplemented) */
	{ 4, notimp },			/* 170 = mkrnod (unimplemented) */
	{ 0, nosys },			/* 171 = nosys */
	{ 0, notimp },			/* 172 = unsp_open (unimplemented) */
	{ 0, nosys },			/* 173 = nosys */
	{ 3, hpuxgetcontext },			/* 174 = getcontext */
	{ 0, nosys },			/* 175 = nosys */
	{ 0, nosys },			/* 176 = nosys */
	{ 0, nosys },			/* 177 = nosys */
	{ 0, notimp },			/* 178 = lsync (unimplemented) */
	{ 0, nosys },			/* 179 = nosys */
	{ 0, notimp },			/* 180 = mysite (unimplemented) */
	{ 1, notimp },			/* 181 = sitels (unimplemented) */
	{ 0, nosys },			/* 182 = nosys */
	{ 0, nosys },			/* 183 = nosys */
	{ 4, notimp },			/* 184 = dskless_stats (unimplemented) */
	{ 0, nosys },			/* 185 = nosys */
	{ 3, notimp },			/* 186 = setacl (unimplemented) */
	{ 3, notimp },			/* 187 = fsetacl (unimplemented) */
	{ 3, notimp },			/* 188 = getacl (unimplemented) */
	{ 3, notimp },			/* 189 = fgetacl (unimplemented) */
	{ 6, hpuxgetaccess },			/* 190 = getaccess */
	{ 0, notimp },			/* 191 = getaudid (unimplemented) */
	{ 1, notimp },			/* 192 = setaudid (unimplemented) */
	{ 0, notimp },			/* 193 = getaudproc (unimplemented) */
	{ 1, notimp },			/* 194 = setaudproc (unimplemented) */
	{ 2, notimp },			/* 195 = getevent (unimplemented) */
	{ 2, notimp },			/* 196 = setevent (unimplemented) */
	{ 1, notimp },			/* 197 = audwrite (unimplemented) */
	{ 1, notimp },			/* 198 = audswitch (unimplemented) */
	{ 4, notimp },			/* 199 = audctl (unimplemented) */
	{ 3, hpuxwaitpid },			/* 200 = waitpid */
	{ 0, nosys },			/* 201 = nosys */
	{ 0, nosys },			/* 202 = nosys */
	{ 0, nosys },			/* 203 = nosys */
	{ 0, nosys },			/* 204 = nosys */
	{ 0, nosys },			/* 205 = nosys */
	{ 0, nosys },			/* 206 = nosys */
	{ 0, nosys },			/* 207 = nosys */
	{ 0, nosys },			/* 208 = nosys */
	{ 0, nosys },			/* 209 = nosys */
	{ 0, nosys },			/* 210 = nosys */
	{ 0, nosys },			/* 211 = nosys */
	{ 0, nosys },			/* 212 = nosys */
	{ 0, nosys },			/* 213 = nosys */
	{ 0, nosys },			/* 214 = nosys */
	{ 0, nosys },			/* 215 = nosys */
	{ 0, nosys },			/* 216 = nosys */
	{ 0, nosys },			/* 217 = nosys */
	{ 0, nosys },			/* 218 = nosys */
	{ 0, nosys },			/* 219 = nosys */
	{ 0, nosys },			/* 220 = nosys */
	{ 0, nosys },			/* 221 = nosys */
	{ 0, nosys },			/* 222 = nosys */
	{ 0, nosys },			/* 223 = nosys */
	{ 0, nosys },			/* 224 = nosys */
	{ 2, notimp },			/* 225 = pathconf (unimplemented) */
	{ 2, notimp },			/* 226 = fpathconf (unimplemented) */
	{ 0, nosys },			/* 227 = nosys */
	{ 0, nosys },			/* 228 = nosys */
	{ 0, notimp },			/* 229 = async_daemon (unimplemented) */
	{ 3, notimp },			/* 230 = nfs_fcntl (unimplemented) */
	{ 4, getdirentries },			/* 231 = getdirentries */
	{ 2, hpuxgetdomainname },			/* 232 = getdomainname */
	{ 2, notimp },			/* 233 = nfs_getfh (unimplemented) */
	{ 4, notimp },			/* 234 = vfsmount (unimplemented) */
	{ 1, notimp },			/* 235 = nfs_svc (unimplemented) */
	{ 2, hpuxsetdomainname },			/* 236 = setdomainname */
	{ 2, notimp },			/* 237 = statfs (unimplemented) */
	{ 2, notimp },			/* 238 = fstatfs (unimplemented) */
	{ 3, hpuxsigaction },			/* 239 = sigaction */
	{ 3, hpuxsigprocmask },			/* 240 = sigprocmask */
	{ 1, hpuxsigpending },			/* 241 = sigpending */
	{ 1, hpuxsigsuspend },			/* 242 = sigsuspend */
	{ 4, notimp },			/* 243 = fsctl (unimplemented) */
	{ 0, nosys },			/* 244 = nosys */
	{ 3, notimp },			/* 245 = pstat (unimplemented) */
	{ 0, nosys },			/* 246 = nosys */
	{ 0, nosys },			/* 247 = nosys */
	{ 0, nosys },			/* 248 = nosys */
	{ 0, nosys },			/* 249 = nosys */
	{ 0, nosys },			/* 250 = nosys */
	{ 0, nosys },			/* 251 = nosys */
	{ 0, nosys },			/* 252 = nosys */
	{ 0, nosys },			/* 253 = nosys */
	{ 0, nosys },			/* 254 = nosys */
	{ 0, nosys },			/* 255 = nosys */
	{ 0, nosys },			/* 256 = nosys */
	{ 0, nosys },			/* 257 = nosys */
	{ 0, nosys },			/* 258 = nosys */
	{ 0, nosys },			/* 259 = nosys */
	{ 0, nosys },			/* 260 = nosys */
	{ 0, nosys },			/* 261 = nosys */
	{ 0, nosys },			/* 262 = nosys */
	{ 0, nosys },			/* 263 = nosys */
	{ 0, nosys },			/* 264 = nosys */
	{ 0, nosys },			/* 265 = nosys */
	{ 0, nosys },			/* 266 = nosys */
	{ 0, nosys },			/* 267 = nosys */
	{ 0, getdtablesize },			/* 268 = getnumfds */
	{ 0, nosys },			/* 269 = nosys */
	{ 0, nosys },			/* 270 = nosys */
	{ 0, nosys },			/* 271 = nosys */
	{ 1, fchdir },			/* 272 = fchdir */
	{ 0, nosys },			/* 273 = nosys */
	{ 0, nosys },			/* 274 = nosys */
	{ compat(3,accept) },		/* 275 = old accept */
	{ 3, bind },			/* 276 = bind */
	{ 3, connect },			/* 277 = connect */
	{ compat(3,getpeername) },		/* 278 = old getpeername */
	{ compat(3,getsockname) },		/* 279 = old getsockname */
	{ 5, getsockopt },			/* 280 = getsockopt */
	{ 2, listen },			/* 281 = listen */
	{ compat(4,recv) },		/* 282 = old recv */
	{ compat(6,recvfrom) },		/* 283 = old recvfrom */
	{ compat(3,recvmsg) },		/* 284 = old recvmsg */
	{ compat(4,send) },		/* 285 = old send */
	{ compat(3,sendmsg) },		/* 286 = old sendmsg */
	{ 6, sendto },			/* 287 = sendto */
	{ 5, hpuxsetsockopt2 },			/* 288 = setsockopt2 */
	{ 2, shutdown },			/* 289 = shutdown */
	{ 3, socket },			/* 290 = socket */
	{ 4, socketpair },			/* 291 = socketpair */
	{ 0, nosys },			/* 292 = nosys */
	{ 0, nosys },			/* 293 = nosys */
	{ 0, nosys },			/* 294 = nosys */
	{ 0, nosys },			/* 295 = nosys */
	{ 0, nosys },			/* 296 = nosys */
	{ 0, nosys },			/* 297 = nosys */
	{ 0, nosys },			/* 298 = nosys */
	{ 0, nosys },			/* 299 = nosys */
	{ 0, nosys },			/* 300 = nosys */
	{ 0, nosys },			/* 301 = nosys */
	{ 0, nosys },			/* 302 = nosys */
	{ 0, nosys },			/* 303 = nosys */
	{ 0, nosys },			/* 304 = nosys */
	{ 0, nosys },			/* 305 = nosys */
	{ 0, nosys },			/* 306 = nosys */
	{ 0, nosys },			/* 307 = nosys */
	{ 0, nosys },			/* 308 = nosys */
	{ 0, nosys },			/* 309 = nosys */
	{ 0, nosys },			/* 310 = nosys */
	{ 0, nosys },			/* 311 = nosys */
	{ 4, hpuxsemctl },			/* 312 = nsemctl */
	{ 3, notimp },			/* 313 = msgctl (unimplemented) */
#ifdef SYSVSHM
	{ 3, hpuxnshmctl },			/* 314 = nshmctl */
#else
	{ 3, notimp },			/* 314 = nshmctl (unimplemented) */
#endif
};

int	hpuxnsysent = sizeof(hpuxsysent) / sizeof(hpuxsysent[0]);