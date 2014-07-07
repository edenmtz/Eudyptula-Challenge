#include <linux/init.h>
#include <linux/module.h>

static int hello_init(void)
{
  printk(KERN_DEBUG "Hello World! \n");
  return 0;
}

static void hello_exit(void)
{
  printk(KERN_DEBUG "Good Bye World! \n");

}

module_init(hello_init);
module_exit(hello_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Eden Martinez Martinez");
MODULE_DESCRIPTION("HELLO WORLD MODULE");

