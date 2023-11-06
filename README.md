Pulser
================================
This folder contains the implementation of the [Pulser](https://ieeexplore.ieee.org/document/8847075) on the Linux kernel TCP/IP stack and as a kernel module to serve as a switch.



## Patching and Building the Kernel
The code to patch the Linux kernel is located in [`host`](https://github.com/hamidralmasi/Pulser/tree/master/host). We will be using a modified DCTCP patch to enable Pulser and EIN capability in Linux.

Follow these steps to patch and build your new kernel with Pulser support:


1. Change into the extracted kernel source directory:
   ```bash
   cd host
   ```

2. Apply the patch:
   ```bash
   patch -p1 < 0001-Updated-DCTCP-patch-for-3.2-kernels.patch
   ```

3. Configure the kernel options:
   ```bash
   make menuconfig
   ```
   - Navigate to `Networking support` > `Networking options` and enable `DCTCP: Data Center TCP`.

4. Prepare for the kernel build by setting the concurrency level to match your processor count:
   ```bash
   processors=\`grep -c ^processor /proc/cpuinfo\`
   export CONCURRENCY_LEVEL=$processors
   make-kpkg clean
   ```

5. Build the new kernel (this may take some time):
   ```bash
   time fakeroot make-kpkg --verbose --initrd --append-to-version=-dctcp kernel_image kernel_headers
   ```
   - If you are connected remotely, consider using `screen` to avoid interruption.

6. Install the new kernel and headers:
   ```bash
   cd /usr/src
   sudo dpkg -i linux-image-3.2.18-dctcp_3.2.18-dctcp-10.00.Custom_amd64.deb
   sudo dpkg -i linux-headers-3.2.18-dctcp_3.2.18-dctcp-10.00.Custom_amd64.deb
   ```

7. Update the GRUB configuration:
   ```bash
   sudo update-grub2
   ```
   - Edit `/etc/default/grub` and change the "default" kernel option, then run:
     ```bash
     sudo update-grub2
     ```

8. Verify the GRUB configuration:
   ```bash
   cat /boot/grub/grub.cfg
   ```

9. Reboot your system to apply changes:
    ```bash
    sudo reboot
    ```
## Kernel Module Installation to Make a Linux Server Act as a Switch

The code for this part is located in [`switch`](https://github.com/hamidralmasi/Pulser/tree/master/switch). Here we show steps to install a modified `sch_tbf` kernel module. The `sch_tbf` module is used for traffic control in the Linux kernel.

### Installation Steps

1. Open a terminal and navigate to the directory containing the `sch_tbf.c` file, `Makefile`, and the `depmod.sh` script.

2. Run the `depmod.sh` script to automate the installation:
   ```bash
   sudo ./depmod.sh
   ```
   This script will perform the following actions:
   - Clean any previous build artifacts.
   - Remove any existing `tbf` (Token Bucket Filter) queueing discipline on the network device `eno2`.
   - Unload the `sch_tbf` module if it is already loaded.
   - Compile the `sch_tbf` kernel module.
   - Load the new `sch_tbf` module into the kernel.
   - Apply a new `tbf` queueing discipline on the network device `eno2` with the specified rate, burst, and latency.

3. To verify the installation, check that the `sch_tbf` module is loaded:
   ```bash
   lsmod | grep sch_tbf
   ```

4. Also, verify the `tc` queueing discipline settings:
   ```bash
   tc -s qdisc show dev eno2
   ```

### Post-Installation

After the module is loaded and the `tc` settings are applied, you can manage the `sch_tbf` queueing discipline using the `tc` utility.

### Notes

- Replace `eno2` with the actual network device name on your system if it differs.
- The `depmod.sh` script opens a new bash shell at the end; you can remove the `exec bash` line if you prefer not to open a new shell.


## Citation
```bib
@INPROCEEDINGS{Almasi2019Pulser,
  author={Almasi, Hamidreza and Rezaei, Hamed and Chaudhry, Muhammad Usama and Vamanan, Balajee},
  booktitle={2019 IEEE International Symposium on Local and Metropolitan Area Networks (LANMAN)}, 
  title={Pulser: Fast Congestion Response Using Explicit Incast Notifications for Datacenter Networks}, 
  year={2019},
  volume={},
  number={},
  pages={1-6},
  doi={10.1109/LANMAN.2019.8847075}}
```
