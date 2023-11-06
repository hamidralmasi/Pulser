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
	{ 0x5b91db8, "inet_del_protocol" },
	{ 0xb73249a9, "xfrm_unregister_type" },
	{ 0x5bba9e3, "inet_add_protocol" },
	{ 0x5277709d, "xfrm_register_type" },
	{ 0xde0bdcff, "memset" },
	{ 0xba63339c, "_raw_spin_unlock_bh" },
	{ 0x1637ff0f, "_raw_spin_lock_bh" },
	{ 0x85becf15, "skb_push" },
	{ 0x82f2c431, "pskb_put" },
	{ 0x2e09b41c, "__pskb_pull_tail" },
	{ 0xe52947e7, "__phys_addr" },
	{ 0xb6244511, "sg_init_one" },
	{ 0x6394da34, "skb_to_sgvec" },
	{ 0xc897c382, "sg_init_table" },
	{ 0x1a40385f, "skb_cow_data" },
	{ 0xcb4e8e87, "__xfrm_state_destroy" },
	{ 0xeb0ded67, "xfrm_state_lookup" },
	{ 0x27e1a049, "printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x13aaf36f, "crypto_aead_setauthsize" },
	{ 0xa20ce1b8, "net_msg_warn" },
	{ 0xd05dc2a3, "xfrm_aalg_get_byname" },
	{ 0x236c8c64, "memcpy" },
	{ 0x50720c5f, "snprintf" },
	{ 0xd28c7629, "crypto_alloc_aead" },
	{ 0x8b2cf515, "kmem_cache_alloc_trace" },
	{ 0x1ef11509, "kmalloc_caches" },
	{ 0x3240bd17, "crypto_destroy_tfm" },
	{ 0xccfe4154, "xfrm_input_resume" },
	{ 0xe3738fc0, "___pskb_trim" },
	{ 0xb3b8426d, "km_new_mapping" },
	{ 0x4b439cbf, "skb_copy_bits" },
	{ 0x59a462e0, "xfrm_output_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C61EE4DA6351DE69BC987DF");
