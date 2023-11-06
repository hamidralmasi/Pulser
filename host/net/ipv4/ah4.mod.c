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
	{ 0xcb4e8e87, "__xfrm_state_destroy" },
	{ 0xeb0ded67, "xfrm_state_lookup" },
	{ 0x27e1a049, "printk" },
	{ 0xd05dc2a3, "xfrm_aalg_get_byname" },
	{ 0xb35add06, "crypto_ahash_setkey" },
	{ 0xda1440d9, "crypto_alloc_ahash" },
	{ 0x8b2cf515, "kmem_cache_alloc_trace" },
	{ 0x1ef11509, "kmalloc_caches" },
	{ 0x3240bd17, "crypto_destroy_tfm" },
	{ 0xccfe4154, "xfrm_input_resume" },
	{ 0x2e09b41c, "__pskb_pull_tail" },
	{ 0x2fa5a500, "memcmp" },
	{ 0x89977259, "pskb_expand_head" },
	{ 0x59a462e0, "xfrm_output_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0xc41013cd, "crypto_ahash_digest" },
	{ 0x6394da34, "skb_to_sgvec" },
	{ 0xc897c382, "sg_init_table" },
	{ 0x236c8c64, "memcpy" },
	{ 0x85becf15, "skb_push" },
	{ 0x1a40385f, "skb_cow_data" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0xde0bdcff, "memset" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2438D5E0FA2327C01B76D38");
