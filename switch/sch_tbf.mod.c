#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc5078a78, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xa529a33f, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0xdadc752d, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3551bcfa, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x789a8710, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8a20cc95, __VMLINUX_SYMBOL_STR(qdisc_watchdog_schedule_ns) },
	{ 0x889a0fef, __VMLINUX_SYMBOL_STR(qdisc_watchdog_init) },
	{ 0xe703d87d, __VMLINUX_SYMBOL_STR(fifo_create_dflt) },
	{ 0x7710862a, __VMLINUX_SYMBOL_STR(bfifo_qdisc_ops) },
	{ 0xc0cd3b13, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x521b36b5, __VMLINUX_SYMBOL_STR(qdisc_put_rtab) },
	{ 0xed597524, __VMLINUX_SYMBOL_STR(qdisc_get_rtab) },
	{ 0x74c75a79, __VMLINUX_SYMBOL_STR(fifo_set_limit) },
	{ 0xb77131b1, __VMLINUX_SYMBOL_STR(psched_ratecfg_precompute) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x8a906c2a, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0xefe71928, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x1ec30510, __VMLINUX_SYMBOL_STR(qdisc_tree_decrease_qlen) },
	{ 0x77695f70, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x14176994, __VMLINUX_SYMBOL_STR(netif_skb_features) },
	{ 0x3fc2d4ca, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0x52111230, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xb574890f, __VMLINUX_SYMBOL_STR(skb_gso_transport_seglen) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x954bc395, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0xeb0937a3, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0xafeb2ff, __VMLINUX_SYMBOL_STR(qdisc_watchdog_cancel) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xefd2b4f7, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x8afaebe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E51507B2B0C6CF96E1B85AE");
