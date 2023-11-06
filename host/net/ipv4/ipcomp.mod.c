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
	{ 0x33aaf56c, "xfrm4_rcv" },
	{ 0xdc74f5e2, "ipcomp_output" },
	{ 0xeaf6b2dd, "ipcomp_input" },
	{ 0x503d9f55, "ipcomp_destroy" },
	{ 0x5b91db8, "inet_del_protocol" },
	{ 0xb73249a9, "xfrm_unregister_type" },
	{ 0x5bba9e3, "inet_add_protocol" },
	{ 0x5277709d, "xfrm_register_type" },
	{ 0x27e1a049, "printk" },
	{ 0xa20ce1b8, "net_msg_warn" },
	{ 0xcb4e8e87, "__xfrm_state_destroy" },
	{ 0x96f5e100, "xfrm_state_insert" },
	{ 0x1c032f57, "xfrm_init_state" },
	{ 0x4ddd396d, "xfrm_state_alloc" },
	{ 0xeb0ded67, "xfrm_state_lookup" },
	{ 0xca1f8a9b, "ipcomp_init_state" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_ipcomp";


MODULE_INFO(srcversion, "8AE29BA64E674F6C44F607A");
