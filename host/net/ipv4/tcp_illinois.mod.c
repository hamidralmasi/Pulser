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
	{ 0x283e2be3, "tcp_reno_min_cwnd" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0xd4578bd6, "tcp_unregister_congestion_control" },
	{ 0x7c69c3bb, "tcp_register_congestion_control" },
	{ 0xd5054fa5, "tcp_slow_start" },
	{ 0x26720ea6, "tcp_is_cwnd_limited" },
	{ 0x877de5b8, "nla_put" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4DB0F2E09DB0024C9BC927D");
