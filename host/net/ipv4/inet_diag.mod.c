#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xf21447ce, "module_layout" },
	{ 0x402b8281, "__request_module" },
	{ 0x1ef11509, "kmalloc_caches" },
	{ 0x25ec1b28, "strlen" },
	{ 0xd103d7a8, "inet_twsk_put" },
	{ 0x1637ff0f, "_raw_spin_lock_bh" },
	{ 0x99737079, "mutex_unlock" },
	{ 0x5d7caa43, "sock_i_ino" },
	{ 0xfe6721b9, "__rta_fill" },
	{ 0x7d11c268, "jiffies" },
	{ 0x6de64777, "skb_trim" },
	{ 0xd7586d49, "netlink_kernel_create" },
	{ 0xde0bdcff, "memset" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x2fa5a500, "memcmp" },
	{ 0x1c8d23c1, "netlink_kernel_release" },
	{ 0xcd279169, "nla_find" },
	{ 0x5b3d0a56, "netlink_rcv_skb" },
	{ 0xb4390f9a, "mcount" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6ec798b3, "mutex_lock" },
	{ 0x850e264f, "sk_free" },
	{ 0xd366c077, "netlink_unicast" },
	{ 0xdfda1474, "init_net" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x8d328b6e, "__alloc_skb" },
	{ 0xba63339c, "_raw_spin_unlock_bh" },
	{ 0x18b8042e, "kfree_skb" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xbe563bcc, "inet6_lookup" },
	{ 0x8b2cf515, "kmem_cache_alloc_trace" },
	{ 0xfdee7d42, "_raw_read_lock_bh" },
	{ 0xf37260ab, "_raw_read_unlock_bh" },
	{ 0x83c6654c, "netlink_dump_start" },
	{ 0x37a0cba, "kfree" },
	{ 0xfc20346d, "__inet_lookup_listener" },
	{ 0xe0378f0b, "skb_put" },
	{ 0x67eca06f, "sock_i_uid" },
	{ 0xe914e41e, "strcpy" },
	{ 0xbec5e0fe, "__inet_lookup_established" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "EA096228F625CDC718DFA55");
