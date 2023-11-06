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
	{ 0x1eb3d93a, "xfrm4_tunnel_deregister" },
	{ 0xb73249a9, "xfrm_unregister_type" },
	{ 0xbe90ef1, "xfrm4_tunnel_register" },
	{ 0x27e1a049, "printk" },
	{ 0x5277709d, "xfrm_register_type" },
	{ 0x4f228f47, "xfrm4_rcv_encap" },
	{ 0x85becf15, "skb_push" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tunnel4";


MODULE_INFO(srcversion, "92EF0178327C6B3BF6F9CFD");
