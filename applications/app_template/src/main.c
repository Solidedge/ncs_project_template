/** @file
 *  @brief Application template
 */

/** Other files */

/** Functions */
void main(void) {
	int err;

	printk("Initializing...\n");

	if (err) {
		printk("Bluetooth init failed (err %d)\n", err);
	}
}
