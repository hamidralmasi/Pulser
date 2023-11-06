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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2e5e4964, "icmp_send" },
	{ 0x99737079, "mutex_unlock" },
	{ 0x5b91db8, "inet_del_protocol" },
	{ 0x2e09b41c, "__pskb_pull_tail" },
	{ 0x27e1a049, "printk" },
	{ 0xb4390f9a, "mcount" },
	{ 0x6ec798b3, "mutex_lock" },
	{ 0x5bba9e3, "inet_add_protocol" },
	{ 0x18b8042e, "kfree_skb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5B64D998DBFEF76CF2D3311");
