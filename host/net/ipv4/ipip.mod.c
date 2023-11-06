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
	{ 0x2a5bfe99, "unregister_pernet_device" },
	{ 0xbe90ef1, "xfrm4_tunnel_register" },
	{ 0x47f0368, "register_pernet_device" },
	{ 0x27e1a049, "printk" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0x9c2f6e9e, "netdev_state_change" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc6cbbc89, "capable" },
	{ 0x48540434, "__secpath_destroy" },
	{ 0x999aaff9, "__xfrm_policy_check" },
	{ 0xc58fd977, "netif_rx" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x48ab1a9f, "__ip_select_ident" },
	{ 0x2e5e4964, "icmp_send" },
	{ 0x15703f1a, "ip_local_out" },
	{ 0x7628f3c7, "this_cpu_off" },
	{ 0x37a0cba, "kfree" },
	{ 0x18b8042e, "kfree_skb" },
	{ 0x85becf15, "skb_push" },
	{ 0x1fa6d626, "sock_wfree" },
	{ 0xe08f51d8, "skb_realloc_headroom" },
	{ 0xa034f8b5, "consume_skb" },
	{ 0x1f361f28, "register_netdev" },
	{ 0x7d11c268, "jiffies" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x7e6b3ffb, "unregister_netdevice_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x672144bd, "strlcpy" },
	{ 0xe914e41e, "strcpy" },
	{ 0x89c331d6, "register_netdevice" },
	{ 0x55f2580b, "__alloc_percpu" },
	{ 0xc95c287e, "alloc_netdev_mqs" },
	{ 0x6d8a3da, "__dev_get_by_index" },
	{ 0xad8c573c, "dst_release" },
	{ 0xa54fe935, "ip_route_output_flow" },
	{ 0xfe7c4287, "nr_cpu_ids" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb9249d16, "cpu_possible_mask" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x4a91b1be, "free_netdev" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tunnel4";


MODULE_INFO(srcversion, "6AC4C19C70C0122FD2333C8");
